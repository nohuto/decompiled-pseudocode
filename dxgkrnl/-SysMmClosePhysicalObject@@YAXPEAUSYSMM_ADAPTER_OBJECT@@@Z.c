void __fastcall SysMmClosePhysicalObject(struct SYSMM_ADAPTER_OBJECT *a1, __int64 a2, int a3)
{
  SmmClosePhysicalObject((__int64 *)a1, a2, a3);
}
