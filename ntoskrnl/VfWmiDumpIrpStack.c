__int64 __fastcall VfWmiDumpIrpStack(__int64 a1)
{
  __int64 v2; // rax
  const char *v4; // rcx

  VfUtilDbgPrint("IRP_MJ_SYSTEM_CONTROL.");
  v2 = *(unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8)v2 <= 9u )
    return VfUtilDbgPrint(WmiIrpNames[v2]);
  v4 = "IRP_MN_BOGUS";
  if ( (_BYTE)v2 != 0xFF )
    v4 = "(Bogus)";
  return VfUtilDbgPrint(v4);
}
