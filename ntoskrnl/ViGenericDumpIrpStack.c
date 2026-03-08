/*
 * XREFs of ViGenericDumpIrpStack @ 0x140AC0020
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViGenericDumpIrpStack(unsigned __int8 *a1)
{
  __int64 v1; // rax
  const char *v3; // rcx

  v1 = *a1;
  if ( (_BYTE)v1 == 15 )
  {
    if ( a1[1] == 1 )
      return VfUtilDbgPrint("IRP_MJ_SCSI");
    return VfUtilDbgPrint(IrpMajorNames[v1]);
  }
  if ( (unsigned __int8)v1 <= 0x1Bu )
    return VfUtilDbgPrint(IrpMajorNames[v1]);
  v3 = "IRP_MJ_BOGUS";
  if ( (_BYTE)v1 != 0xFF )
    v3 = "IRP_MJ_??";
  return VfUtilDbgPrint(v3);
}
