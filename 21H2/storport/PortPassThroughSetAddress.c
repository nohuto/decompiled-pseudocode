/*
 * XREFs of PortPassThroughSetAddress @ 0x1C007E124
 * Callers:
 *     RaUnitScsiPassThroughIoctl @ 0x1C007B234 (RaUnitScsiPassThroughIoctl.c)
 * Callees:
 *     PortPassThroughBasicValidation @ 0x1C0059C68 (PortPassThroughBasicValidation.c)
 *     PortPassThroughExBasicValidation @ 0x1C0059D20 (PortPassThroughExBasicValidation.c)
 */

__int64 __fastcall PortPassThroughSetAddress(IRP *a1, char a2, char a3, char a4)
{
  char v8; // di
  __int64 result; // rax
  _IRP *MasterIrp; // rcx
  char *v11; // rax

  if ( ((a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
  {
    v8 = 0;
    result = PortPassThroughBasicValidation(a1);
  }
  else
  {
    v8 = 1;
    result = PortPassThroughExBasicValidation(a1);
  }
  if ( (int)result >= 0 )
  {
    MasterIrp = a1->AssociatedIrp.MasterIrp;
    if ( v8 )
    {
      v11 = (char *)MasterIrp + (unsigned int)MasterIrp->AssociatedIrp.IrpCount;
      if ( *(_WORD *)v11 >= 2u || HIDWORD(MasterIrp->MdlAddress) < 0xC )
        return 3221225485LL;
      *(_DWORD *)v11 = 1;
      *((_DWORD *)v11 + 1) = 4;
      v11[8] = a2;
      v11[9] = a3;
      v11[10] = a4;
      v11[11] = 0;
    }
    else
    {
      HIBYTE(MasterIrp->Size) = a2;
      *((_BYTE *)&MasterIrp->Size + 2) = a3;
      *((_BYTE *)&MasterIrp->Size + 3) = a4;
    }
    return 0LL;
  }
  return result;
}
