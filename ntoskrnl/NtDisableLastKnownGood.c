/*
 * XREFs of NtDisableLastKnownGood @ 0x1408806A0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x14078BB90 (IopCreateRegistryKeyEx.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 NtDisableLastKnownGood()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int CachedContextBaseKey; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  void *v7; // [rsp+70h] [rbp+30h] BYREF

  Data = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v7 = 0LL;
  KeyHandle = 0LL;
  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) || PsIsCurrentThreadInServerSilo(v1, v0) )
    {
      return (unsigned int)-1073741727;
    }
    else
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v7);
      if ( CachedContextBaseKey >= 0 )
      {
        ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
        *(_DWORD *)&ValueName.Length = 1572886;
        CachedContextBaseKey = IopCreateRegistryKeyEx(&KeyHandle, v7, &ValueName, 0xF003Fu, 0, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          ValueName.Buffer = L"DisableLKG";
          Data = 1;
          *(_DWORD *)&ValueName.Length = 1441812;
          CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        }
        if ( KeyHandle )
          ZwClose(KeyHandle);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)CachedContextBaseKey;
}
