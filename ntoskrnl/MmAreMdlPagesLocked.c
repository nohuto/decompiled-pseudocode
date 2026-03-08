/*
 * XREFs of MmAreMdlPagesLocked @ 0x140AE5198
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x140AC1620 (VERIFY_BUFFER_LOCKED.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140ADD240 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 * Callees:
 *     MiIsPfn @ 0x14025F1D0 (MiIsPfn.c)
 *     MiIsPfnLocked @ 0x14030043C (MiIsPfnLocked.c)
 *     MiLockPage @ 0x1404647C4 (MiLockPage.c)
 *     MiUnlockPage @ 0x1404647DA (MiUnlockPage.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(_DWORD *a1)
{
  unsigned __int64 *v1; // r14
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  BOOL IsPfnLocked; // ebp

  v1 = (unsigned __int64 *)(a1 + 12);
  v2 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  while ( 1 )
  {
    v3 = *v1;
    if ( (unsigned int)MiIsPfn(*v1) )
    {
      v4 = 48 * v3 - 0x220000000000LL;
      v5 = dword_140C67ACC == 2 ? 17 : MiLockPage(v4);
      IsPfnLocked = MiIsPfnLocked(v4);
      if ( v5 != 17 )
        MiUnlockPage(v4, v5);
      if ( !IsPfnLocked )
        break;
    }
    ++v1;
    if ( !--v2 )
      return 1LL;
  }
  return 0LL;
}
