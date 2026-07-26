/*
 * XREFs of ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C014731C
 * Callers:
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0036420 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z @ 0x1C010A7E8 (-ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z.c)
 *     ?CreateDeviceDriverSecurityDescriptor@@YAJPEAXEEPEAU_ACL@@@Z @ 0x1C014747C (-CreateDeviceDriverSecurityDescriptor@@YAJPEAXEEPEAU_ACL@@@Z.c)
 */

int ndisFdoInitializeSubsystem(void)
{
  int v0; // ebx
  int result; // eax
  char *v2; // rdi
  ACL *v3; // rcx
  unsigned __int8 v4; // dl
  struct _ACL *v5; // r9
  unsigned __int8 v6; // dl
  struct _ACL *v7; // r9
  unsigned __int8 v8; // dl
  struct _ACL *v9; // r9
  NTSTATUS v10; // eax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ndis");
  v0 = 0;
  result = IoCreateDevice((PDRIVER_OBJECT)ndisDriverObject, 0, &DestinationString, 0x12u, 0x100u, 0, &ndisDeviceObject);
  if ( result >= 0 )
  {
    SymbolicLinkName = 0LL;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\Global??\\NDIS");
    result = IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    if ( result >= 0 )
    {
      v2 = (char *)ndisDriverObject + 112;
      ndisDeviceObject->Flags |= 0x10u;
      memset64(v2, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
      result = ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
      if ( result >= 0 )
      {
        result = ndisCreateSecurityDescriptorEx(v3);
        if ( result >= 0 )
        {
          result = CreateDeviceDriverSecurityDescriptor(ndisDriverObject, v4, 0, v5);
          if ( result >= 0 )
          {
            result = CreateDeviceDriverSecurityDescriptor(*((void **)ndisDriverObject + 1), v6, 0, v7);
            if ( result >= 0 )
            {
              result = CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v8, 1u, v9);
              if ( result >= 0 )
              {
                v10 = IoWMIRegistrationControl(ndisDeviceObject, 1u);
                if ( v10 < 0 )
                  return v10;
                return v0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
