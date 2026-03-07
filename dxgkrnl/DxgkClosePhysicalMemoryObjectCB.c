void __fastcall DxgkClosePhysicalMemoryObjectCB(__int64 **a1, __int64 a2, int a3)
{
  SmmClosePhysicalObject(*a1, a2, a3);
}
