/*
 * XREFs of MiIsAddressInDriverView @ 0x140631A9C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x1402280EC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402824A4 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiIsAddressInDriverView(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  PVOID *i; // rdx
  PVOID v4; // rcx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0;
  MmLockLoadedModuleListShared(&v6);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v4 = i[6];
    if ( a1 >= (unsigned __int64)v4 && a1 < (unsigned __int64)v4 + *((unsigned int *)i + 16) )
    {
      v2 = 1;
      break;
    }
  }
  MmUnlockLoadedModuleListShared(v6);
  return v2;
}
