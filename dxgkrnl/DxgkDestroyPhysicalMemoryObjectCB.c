void __fastcall DxgkDestroyPhysicalMemoryObjectCB(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rcx

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 )
    SmmClosePhysicalObject(v4, a2, a3);
  SysMmUnreferencePhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)a1);
}
