/*
 * XREFs of ViDdiDriverEntry @ 0x1409C92B0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     IoWMIRegistrationControl @ 0x1407550F0 (IoWMIRegistrationControl.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ViDdiDriverEntry(PDRIVER_OBJECT DriverObject)
{
  int v3; // ebx
  __int64 v4; // rdi
  NTSTATUS v5; // esi
  PDEVICE_OBJECT v6; // rcx
  int v7; // ebx
  __int64 i; // rdi
  struct _DEVICE_OBJECT *v9; // rsi
  NTSTATUS v10; // ebp
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)ViDdiDispatchWmi;
  ViDdiDeviceObjectArray = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x61446656u);
  if ( !ViDdiDeviceObjectArray )
    return 3221225626LL;
  v3 = 0;
  v4 = 0LL;
  do
  {
    v5 = IoCreateDevice(DriverObject, 4u, 0LL, 0x22u, 0x180u, 0, &DeviceObject);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = DeviceObject;
    *(_QWORD *)(v4 + ViDdiDeviceObjectArray) = DeviceObject;
    v4 += 8LL;
    *(_DWORD *)v6->DeviceExtension = v3++;
  }
  while ( !v3 );
  v7 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v9 = *(struct _DEVICE_OBJECT **)(i + ViDdiDeviceObjectArray);
    v9->Flags &= ~0x80u;
    v10 = IoWMIRegistrationControl(v9, 1u);
    if ( v10 < 0 )
      break;
    if ( ++v7 )
      return 0LL;
  }
  IoDeleteDevice(v9);
  return (unsigned int)v10;
}
