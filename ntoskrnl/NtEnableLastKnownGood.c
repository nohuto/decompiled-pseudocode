/*
 * XREFs of NtEnableLastKnownGood @ 0x14087F5A0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwDeleteFile @ 0x140413E30 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x140413E50 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14087F880 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 NtEnableLastKnownGood()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int CachedContextBaseKey; // ebx
  char v3; // bl
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-89h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v9; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING v11; // [rsp+98h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v15; // [rsp+120h] [rbp+77h] BYREF
  void *v16; // [rsp+128h] [rbp+7Fh] BYREF

  v16 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  memset(&v5, 0, 44);
  ValueName = 0LL;
  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) || PsIsCurrentThreadInServerSilo(v1, v0) )
    {
      CachedContextBaseKey = -1073741727;
    }
    else
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v16);
      if ( CachedContextBaseKey >= 0 )
      {
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
        ObjectAttributes.RootDirectory = v16;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &ValueName;
        *(_DWORD *)&ValueName.Length = 1572886;
        ObjectAttributes.Attributes = 576;
        CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
        if ( CachedContextBaseKey >= 0 )
        {
          v3 = 0;
          if ( IopGetRegistryValue(KeyHandle, L"DisableLKG", 0, &P) < 0 )
            goto LABEL_26;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v3 = *((_BYTE *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(P, 0);
          if ( v3 )
          {
            *(_DWORD *)&ValueName.Length = 1441812;
            ValueName.Buffer = L"DisableLKG";
            CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &ValueName);
            if ( CachedContextBaseKey >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
              v5.RootDirectory = 0LL;
              v5.ObjectName = &DestinationString;
              v5.Length = 48;
              v5.Attributes = 576;
              *(_OWORD *)&v5.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&Handle, 0xF003Fu, &v5) >= 0 )
                ZwDeleteKey(Handle);
              RtlInitUnicodeString(&v11, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
              v5.RootDirectory = 0LL;
              v5.ObjectName = &v11;
              v5.Length = 48;
              v5.Attributes = 576;
              *(_OWORD *)&v5.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&v15, 0xF003Fu, &v5) >= 0 )
                ZwDeleteKey(v15);
              RtlInitUnicodeString(&SourceString, L"\\SystemRoot\\LastGood");
              IopFileUtilWalkDirectoryTreeBottomUp(&SourceString);
              v5.RootDirectory = 0LL;
              v5.ObjectName = &SourceString;
              v5.Length = 48;
              v5.Attributes = 64;
              *(_OWORD *)&v5.SecurityDescriptor = 0LL;
              ZwDeleteFile(&v5);
              RtlInitUnicodeString(&v9, L"\\SystemRoot\\LastGood.Tmp");
              IopFileUtilWalkDirectoryTreeBottomUp(&v9);
              v5.RootDirectory = 0LL;
              v5.ObjectName = &v9;
              v5.Length = 48;
              *(_OWORD *)&v5.SecurityDescriptor = 0LL;
              v5.Attributes = 64;
              ZwDeleteFile(&v5);
              CachedContextBaseKey = 0;
            }
          }
          else
          {
LABEL_26:
            CachedContextBaseKey = -1073741823;
          }
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v15 )
      ZwClose(v15);
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)CachedContextBaseKey;
}
