/*
 * XREFs of SshpAlpcInitialize @ 0x140B6437C
 * Callers:
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140203D9C (KiInitializeTimer2.c)
 *     ExRegisterCallback @ 0x1402FBE90 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x140413270 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1404134B0 (ZwAlpcSetInformation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 *     CmSiRWLockInitialize @ 0x14080BCF0 (CmSiRWLockInitialize.c)
 *     SshpAlpcMessageCallback @ 0x140849F10 (SshpAlpcMessageCallback.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SshpAlpcInitialize()
{
  unsigned int v0; // edi
  char *v1; // rbx
  __int64 v2; // rsi
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  int Acl; // ebx
  NTSTATUS v7; // eax
  PCALLBACK_OBJECT v8; // rdi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-81h] BYREF
  __int128 v12; // [rsp+60h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-11h]
  _QWORD v16[9]; // [rsp+A8h] [rbp-9h] BYREF

  v12 = 0LL;
  memset(&CallbackObject_8, 0, 44);
  memset(v16, 0, sizeof(v16));
  CallbackObject = 0LL;
  DestinationString = 0LL;
  v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C38148);
  v0 = 0;
  v1 = (char *)&unk_140C38162;
  v2 = 0LL;
  do
  {
    *(_DWORD *)(v1 - 10) = 0;
    *(v1 - 6) = 0;
    *(_QWORD *)(v1 + 174) = v1 + 166;
    *(_QWORD *)(v1 + 166) = v1 + 166;
    *(_WORD *)v1 = 0;
    KiInitializeTimer2((unsigned __int64)(v1 - 2), (__int64)SshpAlpcOpenGracePeriodTimerCallback, v2, 8);
    *(_QWORD *)(v1 + 134) = 0LL;
    *(_QWORD *)(v1 + 150) = SshpAlpcOpenGracePeriodWorker;
    *(_QWORD *)(v1 + 158) = v2;
    if ( v0 == 1 )
      ++*(_DWORD *)(v1 - 10);
    ++v0;
    ++v2;
    v1 += 192;
  }
  while ( v0 < 2 );
  v3 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 28;
  Pool2 = (ACL *)ExAllocatePool2(64LL, v3, 0x70687373u);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v3);
    Acl = RtlCreateAcl(v5, v3, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v5, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\SleepstudyControlPort");
            CallbackObject_8.RootDirectory = 0LL;
            CallbackObject_8.ObjectName = &DestinationString;
            v16[2] = 64LL;
            *(_OWORD *)&CallbackObject_8.SecurityDescriptor = (unsigned __int64)SecurityDescriptor;
            LODWORD(v16[0]) = 0x100000;
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
              v7 = ExCreateCallback(&CallbackObject, &CallbackObject_8, 1u, 0);
              v8 = CallbackObject;
              Acl = v7;
              if ( v7 >= 0 )
              {
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)SshpAlpcMessageCallback, 0LL) )
                {
                  v12 = (unsigned __int64)v8;
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
              if ( v8 )
                ObfDereferenceObjectWithTag(v8, 0x746C6644u);
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v5, 0x70687373u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
