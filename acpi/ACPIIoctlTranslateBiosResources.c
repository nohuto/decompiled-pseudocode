/*
 * XREFs of ACPIIoctlTranslateBiosResources @ 0x1C0088698
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall ACPIIoctlTranslateBiosResources(__int64 a1, IRP *a2, __int64 a3)
{
  int v4; // edi
  unsigned int v5; // ebx
  _IRP *MasterIrp; // r9
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v5 = *(_DWORD *)(a3 + 8);
    if ( v5 >= 8 )
    {
      a2->IoStatus.Information = 0LL;
      v4 = PnpBiosResourcesToNtResources(a1, a2->AssociatedIrp.MasterIrp, 4LL, &P);
      if ( v4 >= 0 && P )
      {
        MasterIrp = a2->AssociatedIrp.MasterIrp;
        v7 = 32 * *((_DWORD *)P + 9) + 8;
        if ( v5 >= v7 )
        {
          v8 = v7;
          memmove(a2->AssociatedIrp.MasterIrp, (char *)P + 32, v7);
          a2->IoStatus.Information = v8;
        }
        else
        {
          v4 = -2147483643;
          MasterIrp->Type = *((_WORD *)P + 16);
          MasterIrp->Size = *((_WORD *)P + 17);
          *(_DWORD *)&MasterIrp->AllocationProcessorNumber = *((_DWORD *)P + 9);
          a2->IoStatus.Information = 8LL;
        }
      }
    }
    else
    {
      v4 = -1073741789;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
