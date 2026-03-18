/*
 * XREFs of VmCheckPageCombine @ 0x140882E88
 * Callers:
 *     MiCapturePfnVm @ 0x14026AEB0 (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VmCheckPageCombine(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 2288);
  return !v2 || (*(_BYTE *)(v2 + 104) & 1) == 0 && a2;
}
