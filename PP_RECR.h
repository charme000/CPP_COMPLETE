#ifndef PP_RECR_H
#define PP_RECR_H

#include "PP_CORE.h"
#include "PP_COND.h"

#define $0 0
#define $1 1

/*!
 * Recursion Example
 * =================
 *
 * #define PP_RCOND($, X) PP_BOOL(X)
 * #define PP_RMACRO($, X) X
 * #define PP_RUPDATE($, X) PP_SUB($, X, 2)
 * #define PP_RFINALLY($, X) DONE
 *
 * #define PP_RTEST($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), PP_RCOND, PP_RMACRO, PP_RUPDATE, PP_RFINALLY, X)
 *
 * PP_RTEST($, 10) => 10 8 6 4 2 
 * 
 */
 
#define PP_RECR_D0($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D1($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D2($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D3($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D4($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D5($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D6($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D7($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D8($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D9($, C, M, U, E, X)   PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D10($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D11($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D12($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D13($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D14($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D15($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D16($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D17($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D18($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D19($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D20($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D21($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D22($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D23($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D24($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D25($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D26($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D27($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D28($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D29($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D30($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D31($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D32($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D33($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D34($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D35($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D36($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D37($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D38($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D39($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D40($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D41($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D42($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D43($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D44($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D45($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D46($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D47($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D48($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D49($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D50($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D51($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D52($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D53($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D54($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D55($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D56($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D57($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D58($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D59($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D60($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D61($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D62($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D63($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D64($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D65($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D66($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D67($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D68($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D69($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D70($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D71($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D72($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D73($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D74($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D75($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D76($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D77($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D78($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D79($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D80($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D81($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D82($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D83($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D84($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D85($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D86($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D87($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D88($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D89($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D90($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D91($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D92($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D93($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D94($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D95($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D96($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D97($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D98($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)
#define PP_RECR_D99($, C, M, U, E, X)  PP_JOIN(PP_RECR_A, $)(PP_INC($), C, M, U, E, X)

#define PP_RECR_A0($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A1($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A2($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A3($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A4($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A5($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A6($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A7($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A8($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A9($, C, M, U, E, X)   PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A10($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A11($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A12($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A13($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A14($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A15($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A16($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A17($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A18($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A19($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A20($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A21($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A22($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A23($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A24($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A25($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A26($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A27($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A28($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A29($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A30($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A31($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A32($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A33($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A34($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A35($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A36($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A37($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A38($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A39($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A40($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A41($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A42($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A43($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A44($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A45($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A46($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A47($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A48($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A49($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A50($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A51($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A52($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A53($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A54($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A55($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A56($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A57($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A58($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A59($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A60($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A61($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A62($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A63($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A64($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A65($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A66($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A67($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A68($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A69($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A70($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A71($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A72($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A73($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A74($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A75($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A76($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A77($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A78($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A79($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A80($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A81($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A82($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A83($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A84($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A85($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A86($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A87($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A88($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A89($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A90($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A91($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A92($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A93($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A94($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A95($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A96($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A97($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A98($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )
#define PP_RECR_A99($, C, M, U, E, X)  PP_IF_ELSE( C($, X), M($, X) PP_JOIN(PP_RECR_D, $)(PP_INC($), C, M, U, E, U($, X)), E($, X) )

#endif