/*
 * XREFs of ObpCreateDosDevicesDirectory @ 0x140855150
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateDirectoryObjectEx @ 0x140413870 (ZwCreateDirectoryObjectEx.c)
 *     ZwCreateSymbolicLinkObject @ 0x140413BD0 (ZwCreateSymbolicLinkObject.c)
 *     ObpSetSiloDeviceMap @ 0x140855394 (ObpSetSiloDeviceMap.c)
 *     ObpGetDosDevicesProtection @ 0x140855400 (ObpGetDosDevicesProtection.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDosDevicesDirectory(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int DirectoryObject; // ebx
  BOOLEAN DaclPresent; // [rsp+38h] [rbp-49h] BYREF
  BOOLEAN DaclDefaulted[7]; // [rsp+39h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-41h] BYREF
  HANDLE v13; // [rsp+48h] [rbp-39h] BYREF
  int v14; // [rsp+50h] [rbp-31h]
  int v15; // [rsp+54h] [rbp-2Dh]
  HANDLE v16; // [rsp+58h] [rbp-29h]
  __int64 *v17; // [rsp+60h] [rbp-21h]
  int v18; // [rsp+68h] [rbp-19h]
  int v19; // [rsp+6Ch] [rbp-15h]
  _OWORD *v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  PACL Dacl; // [rsp+80h] [rbp-1h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+2Fh] BYREF

  v13 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v24 = 0LL;
  v15 = 0;
  v19 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( PsIsHostSilo(a1) && a3 )
    return 3221225485LL;
  result = ObpGetDosDevicesProtection(SecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v14 = 48;
    v17 = &ObpGlobalDirectoryName;
    v16 = a2;
    v20 = SecurityDescriptor;
    v18 = 528;
    v21 = 0LL;
    DirectoryObject = ZwCreateDirectoryObjectEx((__int64)&v13, 983055LL);
    if ( DirectoryObject < 0 )
    {
      v13 = 0LL;
    }
    else
    {
      DirectoryObject = ObpSetSiloDeviceMap(a1, v13, a4);
      if ( DirectoryObject >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, &word_1408834C0);
        v16 = v13;
        v14 = 48;
        v17 = &ObpGlobalRootNameString;
        v18 = 528;
        v20 = SecurityDescriptor;
        v21 = 0LL;
        DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
        if ( DirectoryObject >= 0 )
        {
          ZwClose(Handle);
          v16 = v13;
          v14 = 48;
          v17 = &ObpGlobalNameString;
          v18 = 528;
          v20 = SecurityDescriptor;
          v21 = 0LL;
          DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
          if ( DirectoryObject >= 0 )
          {
            ZwClose(Handle);
            v14 = 48;
            v17 = &ObpDosDevicesNameString;
            v16 = a2;
            v20 = SecurityDescriptor;
            v18 = 528;
            v21 = 0LL;
            DirectoryObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
            if ( DirectoryObject >= 0 )
              ZwClose(Handle);
          }
        }
      }
    }
    DaclPresent = 0;
    Dacl = 0LL;
    RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, DaclDefaulted);
    ExFreePoolWithTag(Dacl, 0x6C636144u);
    if ( v13 )
      ZwClose(v13);
    return (unsigned int)DirectoryObject;
  }
  return result;
}
