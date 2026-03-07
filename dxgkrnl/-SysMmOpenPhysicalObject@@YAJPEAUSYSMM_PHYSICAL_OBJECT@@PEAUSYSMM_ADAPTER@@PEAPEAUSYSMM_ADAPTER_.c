__int64 __fastcall SysMmOpenPhysicalObject(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        struct SYSMM_ADAPTER *a2,
        struct SYSMM_ADAPTER_OBJECT **a3)
{
  __int64 result; // rax

  result = SmmOpenPhysicalObject(a1, a2);
  *a3 = (struct SYSMM_PHYSICAL_OBJECT *)((char *)a1 + 64);
  return result;
}
