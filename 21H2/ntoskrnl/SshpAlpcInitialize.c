/*
 * XREFs of SshpAlpcInitialize @ 0x140B2984C
 * Callers:
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x14041C6C0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14041C900 (ZwAlpcSetInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     CmSiRWLockInitialize @ 0x1407F3B30 (CmSiRWLockInitialize.c)
 *     SshpAlpcMessageCallback @ 0x14081AE90 (SshpAlpcMessageCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 SshpAlpcInitialize()
{
  unsigned int v0; // edi
  char *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r8
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rsi
  int Acl; // ebx
  NTSTATUS v8; // eax
  PCALLBACK_OBJECT v9; // rdi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-81h] BYREF
  __int128 v13; // [rsp+60h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-11h]
  _QWORD v17[9]; // [rsp+A8h] [rbp-9h] BYREF

  v13 = 0LL;
  memset(&CallbackObject_8, 0, 44);
  memset(v17, 0, sizeof(v17));
  CallbackObject = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C1C1E8);
  v0 = 0;
  v1 = (char *)&unk_140C1C202;
  v2 = 0LL;
  do
  {
    *(_DWORD *)(v1 - 10) = 0;
    *(v1 - 6) = 0;
    *(_QWORD *)(v1 + 174) = v1 + 166;
    *(_QWORD *)(v1 + 166) = v1 + 166;
    *(_WORD *)v1 = 0;
    KiInitializeTimer2((__int64)(v1 - 2), (__int64)SshpAlpcOpenGracePeriodTimerCallback, v2, 8);
    *(_QWORD *)(v1 + 134) = 0LL;
    *(_QWORD *)(v1 + 150) = SshpAlpcOpenGracePeriodWorker;
    *(_QWORD *)(v1 + 158) = v3;
    if ( v0 == 1 )
      ++*(_DWORD *)(v1 - 10);
    ++v0;
    v2 = v3 + 1;
    v1 += 192;
  }
  while ( v0 < 2 );
  v4 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v4, 0x70687373u);
  v6 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v4);
    Acl = RtlCreateAcl(v6, v4, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v6, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            CallbackObject_8.RootDirectory = 0LL;
            CallbackObject_8.ObjectName = &DestinationString;
            v17[2] = 64LL;
            *(_OWORD *)&CallbackObject_8.SecurityDescriptor = (unsigned __int64)SecurityDescriptor;
            LODWORD(v17[0]) = 0x100000;
            CallbackObject_8.Length = 48;
            CallbackObject_8.Attributes = 512;
            Acl = ZwAlpcCreatePort((__int64)&SshpAlpcContext, (__int64)&CallbackObject_8);
            if ( Acl >= 0 )
            {
              CallbackObject_8.RootDirectory = 0LL;
              CallbackObject_8.ObjectName = 0LL;
              CallbackObject_8.Length = 48;
              CallbackObject_8.Attributes = 512;
              *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
              v8 = ExCreateCallback(&CallbackObject, &CallbackObject_8, 1u, 0);
              v9 = CallbackObject;
              Acl = v8;
              if ( v8 >= 0 )
              {
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)SshpAlpcMessageCallback, 0LL) )
                {
                  v13 = (unsigned __int64)v9;
                  Acl = ZwAlpcSetInformation(SshpAlpcContext, 9LL);
                  if ( Acl >= 0 )
                  {
                    SshpAlpcMessageCallback(0LL, 0LL, 0LL);
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
              if ( v9 )
                ObfDereferenceObjectWithTag(v9, 0x746C6644u);
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v6, 0x70687373u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
