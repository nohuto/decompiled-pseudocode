__int64 __fastcall ACPIThermalQueryWmiRegInfo(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        int a5,
        _QWORD *a6)
{
  *a4 = (unsigned __int64)&AcpiRegistryPath & -(__int64)(AcpiRegistryPath.Buffer != 0LL);
  *a2 = 32;
  *a6 = a1;
  return 0LL;
}
