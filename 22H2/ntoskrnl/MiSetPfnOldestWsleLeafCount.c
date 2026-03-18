/*
 * XREFs of MiSetPfnOldestWsleLeafCount @ 0x1402923E4
 * Callers:
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x140820480 (MiInitializeShadowPageTable.c)
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
