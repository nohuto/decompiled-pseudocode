__int64 __fastcall IommuUnmapDevice(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = IommupUnmapDeviceInternal(*a1);
  HalpIommuDeleteDevice(a2);
  return v3;
}
