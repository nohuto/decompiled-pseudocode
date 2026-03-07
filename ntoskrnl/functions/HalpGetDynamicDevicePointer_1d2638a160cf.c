__int64 __fastcall HalpGetDynamicDevicePointer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID v5; // rdi

  v2 = 0;
  if ( !HalpDynamicDevicesReady )
    return 3221226645LL;
  KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
  v5 = HalpDynamicDevices;
  if ( HalpDynamicDevices )
  {
    ObfReferenceObject(HalpDynamicDevices);
    *a2 = v5;
  }
  else
  {
    v2 = -1073741275;
  }
  KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  return v2;
}
