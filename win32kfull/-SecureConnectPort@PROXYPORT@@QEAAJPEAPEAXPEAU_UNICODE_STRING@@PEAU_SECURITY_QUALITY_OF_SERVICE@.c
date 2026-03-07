__int64 __fastcall PROXYPORT::SecureConnectPort(
        PROXYPORT *this,
        void **a2,
        struct _UNICODE_STRING *a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        struct _PORT_VIEW *ClientView,
        PSID Sid,
        struct _REMOTE_PORT_VIEW *a7,
        unsigned int *MaxMessageLength)
{
  PVOID v11; // r15
  NTSTATUS v12; // ebx
  HANDLE SectionHandle; // rcx
  NTSTATUS v14; // eax
  PVOID v15; // rdi
  void *PortHandle; // [rsp+50h] [rbp-49h] BYREF
  PVOID Object; // [rsp+58h] [rbp-41h] BYREF
  PVOID Section; // [rsp+60h] [rbp-39h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-31h] BYREF

  PortHandle = 0LL;
  v11 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(gpepCSRSS, &ApcState);
  v12 = ZwSecureConnectPort(&PortHandle, a3, a4, ClientView, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v11 = Object;
    ZwClose(PortHandle);
    ClientView->ViewBase = 0LL;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12 >= 0 )
  {
    SectionHandle = ClientView->SectionHandle;
    Section = 0LL;
    v14 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &Section, 0LL);
    v15 = Section;
    v12 = v14;
    if ( v14 < 0
      || (v12 = MmMapViewInSessionSpace(Section, &ClientView->ViewBase, &ClientView->ViewSize),
          ObfDereferenceObject(v15),
          v12 < 0) )
    {
      ObfDereferenceObject(v11);
    }
    else
    {
      *a2 = v11;
    }
  }
  return (unsigned int)v12;
}
