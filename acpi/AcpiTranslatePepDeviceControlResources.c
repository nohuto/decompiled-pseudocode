__int64 __fastcall AcpiTranslatePepDeviceControlResources(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return AcpiTranslatePepDeviceControlResourcesInternal(
           *(_QWORD *)(RootDeviceExtension + 768),
           *(_QWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 24),
           a4,
           *(void **)(a1 + 32),
           a1 + 40);
}
