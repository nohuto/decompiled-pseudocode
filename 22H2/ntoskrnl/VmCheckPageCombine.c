/*
 * XREFs of VmCheckPageCombine @ 0x14092E878
 * Callers:
 *     MiCapturePfnVm @ 0x140367A50 (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VmCheckPageCombine(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 2288);
  return !v2 || (*(_DWORD *)(v2 + 88) & 1) == 0 && a2;
}
