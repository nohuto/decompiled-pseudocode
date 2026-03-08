/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1403A3A90
 * Callers:
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     MiPageTableStillExists @ 0x1403A3B20 (MiPageTableStillExists.c)
 */

_BOOL8 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  _BOOL8 result; // rax
  unsigned __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  LODWORD(v5) = 0;
  memset(v4, 0, 32);
  MiFillPteHierarchy(a1, v4);
  result = 0;
  if ( (unsigned int)MiPageTableStillExists(v4, &v5) )
  {
    if ( !(_DWORD)v5 )
    {
      if ( a2 == -1 )
        return 1;
      v5 = MI_READ_PTE_LOCK_FREE(v4[0]);
      if ( (v5 & 1) != 0
        && ((((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v5) >> 12) & 0xFFFFFFFFFFLL) == a2
         || v4[0] == 0xFFFFF6FB7DBEDF68uLL
         && (*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL) == a2
         && a2 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12) )
      {
        return 1;
      }
    }
  }
  return result;
}
