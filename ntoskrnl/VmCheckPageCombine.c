/*
 * XREFs of VmCheckPageCombine @ 0x1408A20A0
 * Callers:
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

bool __fastcall VmCheckPageCombine(__int64 a1, int a2)
{
  __int64 v2; // r8
  bool result; // al

  v2 = *(_QWORD *)(a1 + 2288);
  result = 0;
  if ( !v2 )
    return 1;
  if ( (*(_BYTE *)(v2 + 104) & 1) == 0 )
    return a2 != 0;
  return result;
}
