/*
 * XREFs of MiInitializeVadCellBitMap @ 0x140729460
 * Callers:
 *     MiInitializeVadBitMap @ 0x1407293F0 (MiInitializeVadBitMap.c)
 *     MiSelectUserAddress @ 0x1407D6D30 (MiSelectUserAddress.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x1407295BC (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadCellBitMap(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r15
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // esi

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = a1[8] >> 15 << 12 >> 2;
  v7 = *(_QWORD *)(Process + 1680);
  a1[2] = a1[8] & 0x7FFFLL;
  v8 = qword_140C66CE8;
  *a1 = 0LL;
  a1[1] = v8 + 4 * v6;
  if ( a2 )
    ++*(_QWORD *)(v7 + 264);
  else
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  v9 = MiExpandVadBitMap(a1, 1LL);
  if ( !v9 )
  {
    if ( a2 )
      --*(_QWORD *)(v7 + 264);
    *a1 = 0LL;
  }
  a1[4] = a1[2];
  if ( !a2 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  return v9 == 0 ? 0xC0000017 : 0;
}
