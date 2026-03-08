/*
 * XREFs of LogOp2 @ 0x1C00572D0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     LogOp2_32 @ 0x1C0057328 (LogOp2_32.c)
 *     LogOp2_64 @ 0x1C00576E4 (LogOp2_64.c)
 */

__int64 __fastcall LogOp2(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  if ( IsCompatableDSDTRevision() && (v4 = *(_QWORD *)(a2 + 80), *(_WORD *)(v4 + 2) == 1) && *(_WORD *)(v4 + 42) == 1 )
    return LogOp2_64(a1, a2);
  else
    return LogOp2_32(a1, a2);
}
