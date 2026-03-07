__int64 __fastcall PopDirectedDripsUmTestDeviceCompare(
        struct _RTL_AVL_TABLE *Table,
        _DWORD *FirstStruct,
        PVOID SecondStruct)
{
  unsigned int v3; // ebx
  _DWORD *v4; // r8
  const WCHAR *DeviceInstancePath; // rax
  PCWCH v6; // r10
  LONG v7; // eax
  SIZE_T String2Length; // [rsp+48h] [rbp+10h] BYREF
  SIZE_T String1Length; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  LODWORD(String1Length) = 0;
  LODWORD(String2Length) = 0;
  PopDirectedDripsUmGetDeviceInstancePath(FirstStruct, &String1Length);
  DeviceInstancePath = (const WCHAR *)PopDirectedDripsUmGetDeviceInstancePath(v4, &String2Length);
  v7 = RtlCompareUnicodeStrings(v6, (unsigned int)String1Length, DeviceInstancePath, (unsigned int)String2Length, 1u);
  if ( v7 >= 0 )
    return 2 - (unsigned int)(v7 != 0);
  return v3;
}
