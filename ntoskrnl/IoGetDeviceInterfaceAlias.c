NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // rdi
  void *v7; // rsi
  __int64 v8; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  wchar_t *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  wchar_t *v18; // rsi
  char v19; // r12
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  size_t v24; // [rsp+30h] [rbp-D0h]
  size_t v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  int v29[2]; // [rsp+78h] [rbp-88h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v33[40]; // [rsp+B0h] [rbp-50h] BYREF

  LOWORD(v26) = 0;
  Handle = 0LL;
  v28 = 0;
  v6 = 0LL;
  v30 = 0;
  v7 = 0LL;
  *(_QWORD *)v29 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
    goto LABEL_6;
  ObjectProperty = PnpUnicodeStringToWstr(v29, 0LL, &SymbolicLinkName->Length);
  if ( ObjectProperty < 0 )
  {
LABEL_29:
    v7 = *(void **)v29;
    goto LABEL_7;
  }
  v7 = *(void **)v29;
  if ( CmValidateDeviceInterfaceName(v8, *(__int64 *)v29) < 0 )
  {
LABEL_6:
    ObjectProperty = -1073741811;
    goto LABEL_7;
  }
  SeCaptureSubjectContext(&SubjectContext);
  ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 3, 0LL, &SubjectContext, &v26);
  SeReleaseSubjectContext(&SubjectContext);
  if ( ObjectProperty >= 0 )
  {
    if ( !(_BYTE)v26 )
    {
      ObjectProperty = -1073741790;
      goto LABEL_7;
    }
    ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v33);
    if ( ObjectProperty >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      Pool2 = ExAllocatePool2(256LL, 400LL, 538996816LL);
      v13 = (wchar_t *)Pool2;
      if ( Pool2 )
      {
        v14 = *(_QWORD *)v29;
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(__int64 *)v29,
                           3LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           (__int64)&v28,
                           Pool2,
                           400,
                           (__int64)&v30,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_25;
        if ( v28 != 18 )
        {
          ObjectProperty = -1073741585;
          goto LABEL_25;
        }
        v27 = 128;
        v6 = (void *)ExAllocatePool2(256LL, 256LL, 538996816LL);
        if ( !v6 )
          goto LABEL_32;
        ObjectProperty = CmGetDeviceInterfaceReferenceString(v15, v14, v6, 128LL, &v27);
        if ( ObjectProperty != -1073741789 )
        {
LABEL_16:
          if ( ObjectProperty == -1073741772 )
          {
            ExFreePoolWithTag(v6, 0);
            v6 = 0LL;
          }
          else if ( ObjectProperty < 0 )
          {
            goto LABEL_25;
          }
          ObjectProperty = CmGetDeviceInterfacePathFormat(v16, v14, (char *)&v26 + 1);
          if ( ObjectProperty >= 0 )
          {
            v27 = 512;
            v18 = (wchar_t *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
            if ( v18 )
            {
              v19 = BYTE1(v26);
              LODWORD(v24) = 512;
              ObjectProperty = CmGetDeviceInterfaceName(v17, v33, v13, (const wchar_t *)v6, SBYTE1(v26), v18, v24, &v27);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_21:
                if ( ObjectProperty >= 0 )
                {
                  ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v18);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)v18,
                                       0x30u,
                                       v20,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty >= 0 )
                      ZwClose(Handle);
                    else
                      RtlFreeUnicodeString(AliasSymbolicLinkName);
                  }
                }
                goto LABEL_25;
              }
              ExFreePoolWithTag(v18, 0);
              v22 = v27;
              v18 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v27, 538996816LL);
              if ( v18 )
              {
                LODWORD(v25) = v22;
                ObjectProperty = CmGetDeviceInterfaceName(v23, v33, v13, (const wchar_t *)v6, v19, v18, v25, &v27);
                goto LABEL_21;
              }
            }
            goto LABEL_32;
          }
LABEL_25:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
          goto LABEL_29;
        }
        ExFreePoolWithTag(v6, 0);
        v6 = (void *)ExAllocatePool2(256LL, 2LL * v27, 538996816LL);
        if ( v6 )
        {
          ObjectProperty = CmGetDeviceInterfaceReferenceString(v21, v14, v6, v27, &v27);
          goto LABEL_16;
        }
      }
LABEL_32:
      ObjectProperty = -1073741670;
      goto LABEL_25;
    }
  }
LABEL_7:
  PnpUnicodeStringToWstrFree(v7, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
