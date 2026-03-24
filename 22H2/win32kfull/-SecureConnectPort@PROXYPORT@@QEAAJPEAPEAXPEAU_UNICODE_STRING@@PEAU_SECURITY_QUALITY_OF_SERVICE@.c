/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C011F7B0
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C011F3C0 (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     Win32DestroySection @ 0x1C01D41A0 (Win32DestroySection.c)
 *     Win32OpenSectionByHandle @ 0x1C01D41BC (Win32OpenSectionByHandle.c)
 *     Win32MapViewInSessionSpace @ 0x1C01E9384 (Win32MapViewInSessionSpace.c)
 */

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
  PVOID v9; // r15
  NTSTATUS v12; // ebx
  __int64 v13; // r8
  void *PortHandle; // [rsp+50h] [rbp-49h] BYREF
  __int64 v16; // [rsp+58h] [rbp-41h] BYREF
  PVOID Object; // [rsp+60h] [rbp-39h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-31h] BYREF

  v9 = 0LL;
  PortHandle = 0LL;
  v16 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(gpepCSRSS, &ApcState);
  v12 = ZwSecureConnectPort(&PortHandle, a3, a4, ClientView, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v9 = Object;
    ZwClose(PortHandle);
    ClientView->ViewBase = 0LL;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12 >= 0 )
  {
    v12 = Win32OpenSectionByHandle(ClientView->SectionHandle, 6LL, v13, &v16);
    if ( v12 < 0
      || (v12 = Win32MapViewInSessionSpace(v16, &ClientView->ViewBase, &ClientView->ViewSize),
          Win32DestroySection(v16),
          v12 < 0) )
    {
      ObfDereferenceObject(v9);
    }
    else
    {
      *a2 = v9;
    }
  }
  return (unsigned int)v12;
}
