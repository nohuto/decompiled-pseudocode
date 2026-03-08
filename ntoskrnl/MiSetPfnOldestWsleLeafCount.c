/*
 * XREFs of MiSetPfnOldestWsleLeafCount @ 0x1402A6F00
 * Callers:
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14080B974 (MiInitializeShadowPageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetPfnOldestWsleLeafCount(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (*a1 ^ (16 * a2)) & 0x3FF0;
  *(_QWORD *)a1 ^= result;
  return result;
}
