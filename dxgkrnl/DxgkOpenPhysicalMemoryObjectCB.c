__int64 __fastcall DxgkOpenPhysicalMemoryObjectCB(__int64 a1)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_PHYSICAL_OBJECT *v3; // rbx
  __int64 result; // rax

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v3 = *(struct SYSMM_PHYSICAL_OBJECT **)a1;
  result = SmmOpenPhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)a1, SysMmAdapterFromDevice);
  *(_QWORD *)(a1 + 16) = (char *)v3 + 64;
  return result;
}
