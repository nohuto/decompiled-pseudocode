/*
 * XREFs of SeGetTokenDeviceMap @ 0x14069CC40
 * Callers:
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14069CAE8 (ObpSetCurrentProcessDeviceMap.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     ObpSetDeviceMap @ 0x14069B8FC (ObpSetDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  NTSTATUS result; // eax
  unsigned int ServerSiloServiceSessionId; // eax
  int SymbolicLinkObject; // esi
  __int64 v9; // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v15; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  Handle = 0LL;
  P = 0LL;
  *a2 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v15 = 0LL;
  if ( !a1 )
    return -1073741811;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return -1073741729;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return -1073741729;
  v5 = *(_QWORD *)(v4 + 40);
  if ( v5 )
  {
    *a2 = v5;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 240), 1uLL) <= 0 )
      __fastfail(0xEu);
    return 0;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 160));
    swprintf_s(
      Dst,
      0x40uLL,
      L"\\Sessions\\%d\\DosDevices\\%08x-%08x",
      ServerSiloServiceSessionId,
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 24));
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      SymbolicLinkObject = ObpSetDeviceMap(*(PVOID *)(v4 + 160), 0LL, DirectoryHandle, 0, 2, (__int64 *)&P);
      if ( SymbolicLinkObject >= 0 )
      {
        RtlInitUnicodeString(&v15, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v15;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
        if ( SymbolicLinkObject < 0 )
        {
          ObDereferenceDeviceMap((volatile signed __int64 *)P, 1u);
        }
        else
        {
          ZwClose(Handle);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), (signed __int64)P, 0LL) )
            ObDereferenceDeviceMap((volatile signed __int64 *)P, 1u);
          v9 = *(_QWORD *)(v4 + 40);
          *a2 = v9;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
        }
      }
      ZwClose(DirectoryHandle);
      return SymbolicLinkObject;
    }
  }
  return result;
}
