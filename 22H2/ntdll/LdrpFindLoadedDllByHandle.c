/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x180010500
 * Callers:
 *     LdrDisableThreadCalloutsForDll @ 0x18000EF70 (LdrDisableThreadCalloutsForDll.c)
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     LdrGetDllFullName @ 0x180010240 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrIsModuleSxsRedirected @ 0x1800CDE70 (LdrIsModuleSxsRedirected.c)
 *     LdrQueryModuleServiceTags @ 0x1800CE060 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CE500 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(unsigned __int64 a1, volatile signed __int32 **a2, _DWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int64 Root; // rax
  unsigned __int64 v8; // rcx
  __int64 v10; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v3 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*((_QWORD *)LdrpNtDllDataTableEntry + 19) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && LdrpModuleBaseAddressIndex.Root )
        Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      while ( Root )
      {
        if ( a1 >= *(_QWORD *)(Root - 152) )
        {
          if ( a1 <= *(_QWORD *)(Root - 152) )
          {
            v3 = (volatile signed __int32 *)(Root - 200);
            v10 = *(_QWORD *)(Root - 200 + 152);
            if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement(v3 + 69);
            if ( a3 )
              *a3 = *(_DWORD *)(*((_QWORD *)v3 + 19) + 56LL);
            break;
          }
          v8 = *(_QWORD *)(Root + 8);
        }
        else
        {
          v8 = *(_QWORD *)Root;
        }
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v8 )
          Root ^= v8;
        else
          Root = v8;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v3;
  return v3 == 0LL ? 0xC0000135 : 0;
}
