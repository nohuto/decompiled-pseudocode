/*
 * XREFs of PortPassThroughExBasicValidation @ 0x1C0059D20
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007D8B0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C007DE24 (PortPassThroughGetAddress.c)
 *     PortPassThroughSetAddress @ 0x1C007E124 (PortPassThroughSetAddress.c)
 * Callees:
 *     RtlULongAdd @ 0x1C0045F40 (RtlULongAdd.c)
 */

__int64 __fastcall PortPassThroughExBasicValidation(IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IRP *MasterIrp; // rdi
  unsigned int v3; // r9d
  ULONG v5; // ecx
  int v6; // r9d
  ULONG v7; // r10d
  int v8; // r11d
  int MdlAddress; // eax
  ULONG v10; // eax
  ULONG pulResult; // [rsp+30h] [rbp+8h] BYREF

  pulResult = 0;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a1->AssociatedIrp.MasterIrp;
  v3 = IoIs32bitProcess(a1) != 0 ? 52 : 64;
  if ( CurrentStackLocation->Parameters.Create.Options < v3 )
    return 3221225507LL;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v3 )
    return 3221225561LL;
  if ( RtlULongAdd(MasterIrp->AssociatedIrp.IrpCount, HIDWORD(MasterIrp->MdlAddress), &pulResult) >= 0 )
  {
    MdlAddress = (int)MasterIrp->MdlAddress;
    if ( MdlAddress )
    {
      if ( v8 )
      {
        v10 = v6 + MdlAddress - 1;
        if ( v5 >= v10 && v7 > v10 && v7 >= pulResult && BYTE2(MasterIrp->Flags) <= 3u )
          return 0LL;
      }
    }
  }
  return 3221225485LL;
}
