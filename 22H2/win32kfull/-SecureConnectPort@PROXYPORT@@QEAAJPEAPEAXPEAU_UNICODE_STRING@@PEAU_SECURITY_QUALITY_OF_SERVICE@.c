/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAK@Z @ 0x1C0140350
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C02BF3B4 (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall PROXYPORT::SecureConnectPort(
        PROXYPORT *this,
        void **a2,
        struct _UNICODE_STRING *a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        struct _PORT_VIEW *ClientView,
        PSID Sid,
        unsigned int *MaxMessageLength)
{
  PVOID v10; // r15
  NTSTATUS v11; // ebx
  HANDLE SectionHandle; // rcx
  NTSTATUS v13; // eax
  PVOID v14; // rdi
  void *PortHandle; // [rsp+50h] [rbp-41h] BYREF
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  PVOID Section; // [rsp+60h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-29h] BYREF

  PortHandle = 0LL;
  v10 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(gpepCSRSS, &ApcState);
  v11 = ZwSecureConnectPort(&PortHandle, a3, a4, ClientView, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v11 >= 0 )
  {
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v10 = Object;
    ZwClose(PortHandle);
    ClientView->ViewBase = 0LL;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v11 >= 0 )
  {
    SectionHandle = ClientView->SectionHandle;
    Section = 0LL;
    v13 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &Section, 0LL);
    v14 = Section;
    v11 = v13;
    if ( v13 < 0
      || (v11 = MmMapViewInSessionSpace(Section, &ClientView->ViewBase, &ClientView->ViewSize),
          ObfDereferenceObject(v14),
          v11 < 0) )
    {
      ObfDereferenceObject(v10);
    }
    else
    {
      *a2 = v10;
    }
  }
  return (unsigned int)v11;
}
