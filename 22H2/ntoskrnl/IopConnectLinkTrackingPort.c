/*
 * XREFs of IopConnectLinkTrackingPort @ 0x140891510
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  NTSTATUS v1; // ebx
  ULONG MaxMessageLength[2]; // [rsp+50h] [rbp+17h] BYREF
  HANDLE PortHandle; // [rsp+58h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+27h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+70h] [rbp+37h] BYREF

  PortHandle = 0LL;
  v1 = 0;
  if ( !IopLinkTrackingServiceObject )
  {
    MaxMessageLength[0] = 0;
    *(_QWORD *)&SecurityQos.Length = 0LL;
    *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
    DestinationString = 0LL;
    if ( *(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
    {
      SecurityQos.ImpersonationLevel = SecurityImpersonation;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = NtSecureConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, 0LL, MaxMessageLength, 0LL, 0LL);
      if ( v1 >= 0 )
      {
        if ( MaxMessageLength[0] - 128 > 0x80 )
        {
          NtClose(PortHandle);
          v1 = -1073741811;
        }
        else
        {
          *(_QWORD *)MaxMessageLength = 0LL;
          v1 = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, 0, (PVOID *)MaxMessageLength, 0LL);
          IopLinkTrackingServiceObject = *(PADAPTER_OBJECT *)MaxMessageLength;
          NtClose(PortHandle);
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
