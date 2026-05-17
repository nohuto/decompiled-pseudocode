/*
 * XREFs of LdrpFastpthReloadedDll @ 0x18001FC80
 * Callers:
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x18001F544 (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x18001F59C (LdrpBuildForwarderLink.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpDropLastInProgressCount @ 0x18005EE7C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(int a1, __int16 a2, __int64 a3, __int64 *a4)
{
  int LoadedDllByName; // ebx
  int v7; // eax
  __int16 v9; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a1;
    a1 = 0;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByName;
    v7 = 0;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(v7, a1, a2, (_DWORD)a4, (__int64)&v12);
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( v12 != 9 )
      goto LABEL_11;
    LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
    if ( LoadedDllByName >= 0 )
    {
      LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
      if ( LoadedDllByName < 0 )
      {
        v9 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v9 )
          LdrpDrainWorkQueue(0LL);
        LdrpDecrementModuleLoadCountEx(*a4, 0);
        if ( !v9 )
          LdrpDropLastInProgressCount(v11, v10);
      }
    }
    if ( LoadedDllByName < 0 )
    {
LABEL_11:
      LdrpDereferenceModule(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
