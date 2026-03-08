/*
 * XREFs of MiGetPageTableLockBuffer @ 0x140290838
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiIsPageTableLocked @ 0x1402F2A4C (MiIsPageTableLocked.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetPageTableLockBuffer(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r9
  char *v6; // rax
  char *result; // rax

  v3 = 2 * (unsigned int)((a2 + 0x90482413000LL) >> 3);
  v4 = (2 * (unsigned __int8)((a2 + 0x90482413000LL) >> 3)) & 0x1F;
  v5 = v3 >> 5;
  v6 = (char *)&unk_140C66C24;
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    v6 = (char *)(a1 + 424);
  result = &v6[4 * v5];
  *a3 = v4;
  return result;
}
