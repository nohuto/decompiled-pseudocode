/*
 * XREFs of PopFxQueryBiosDeviceName @ 0x14036F654
 * Callers:
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x14073E218 (PopFxFindDeviceAndAllocateUniqueId.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x14062EE90 (IoGetDevicePropertyData.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PopFxQueryBiosDeviceName(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  PVOID Data; // rdi
  unsigned __int16 v6; // bx
  NTSTATUS result; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Type = 0;
  Data = 0LL;
  v6 = 0;
  result = IoGetDevicePropertyData(v4, &DEVPKEY_Device_BiosDeviceName, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type);
  if ( result == -1073741789 )
  {
    if ( (unsigned int)NumberOfBytes >= 0xFFFE )
      return result;
    Data = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x4D584650u);
    if ( !Data )
      return -1073741670;
    v6 = NumberOfBytes;
    result = 0;
  }
  if ( result >= 0 )
  {
    result = IoGetDevicePropertyData(
               *(PDEVICE_OBJECT *)(a1 + 32),
               &DEVPKEY_Device_BiosDeviceName,
               0,
               0,
               v6,
               Data,
               (PULONG)&NumberOfBytes,
               &Type);
    if ( result >= 0 )
    {
      *(_WORD *)(a2 + 2) = v6;
      *(_WORD *)a2 = v6 - 2;
      *(_QWORD *)(a2 + 8) = Data;
    }
  }
  return result;
}
