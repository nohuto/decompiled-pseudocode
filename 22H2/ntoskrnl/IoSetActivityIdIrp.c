/*
 * XREFs of IoSetActivityIdIrp @ 0x140290480
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14028FDE8 (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x1402902B0 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x1405557C4 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140208AA0 (EtwActivityIdControl.c)
 *     IopFreeIrpExtension @ 0x14028FCF8 (IopFreeIrpExtension.c)
 *     IopAllocateIrpExtension @ 0x1402906EC (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ebx
  __int64 IrpExtension; // rax

  v4 = 0;
  IrpExtension = IopAllocateIrpExtension(a1, 0LL);
  if ( IrpExtension )
  {
    if ( a2 )
    {
      *(_OWORD *)(IrpExtension + 24) = *a2;
      return v4;
    }
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
    {
      v4 = EtwActivityIdControl(1u, (LPGUID)(IrpExtension + 24));
      if ( (v4 & 0x80000000) == 0 )
        return v4;
    }
    else
    {
      v4 = -1073741637;
    }
    IopFreeIrpExtension(a1, 0, 1);
    return v4;
  }
  return 3221225626LL;
}
