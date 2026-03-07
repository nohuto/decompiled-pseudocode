void __fastcall SysMmReferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
}
