/*
 * XREFs of SeGetTokenDeviceMap @ 0x1406770FC
 * Callers:
 *     ObpReferenceDeviceMap @ 0x140625B10 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140676FE8 (ObSetCurrentProcessDeviceMap.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D61F0 (swprintf_s.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1403FAF00 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403FB240 (ZwCreateSymbolicLinkObject.c)
 *     ObfDereferenceDeviceMap @ 0x140625954 (ObfDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x1406A04E4 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  NTSTATUS result; // eax
  unsigned int ServerSiloServiceSessionId; // eax
  NTSTATUS v8; // edi
  char v9[4]; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE LinkHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v16; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  if ( !a1 || !a2 )
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
    return 0;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 160));
    v10 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)v9 = *(_DWORD *)(a1 + 28);
    swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, *(_DWORD *)v9, v10);
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v8 = ObpSetDeviceMap(*(PVOID *)(v4 + 160), 2, (__int64)&P);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&v16, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v16;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v8 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
        if ( v8 < 0 )
        {
          ObfDereferenceDeviceMap(P);
        }
        else
        {
          ZwClose(LinkHandle);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), (signed __int64)P, 0LL) )
            ObfDereferenceDeviceMap(P);
          *a2 = *(_QWORD *)(v4 + 40);
        }
      }
      ZwClose(DirectoryHandle);
      return v8;
    }
  }
  return result;
}
