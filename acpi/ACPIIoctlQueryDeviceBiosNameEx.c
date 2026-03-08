/*
 * XREFs of ACPIIoctlQueryDeviceBiosNameEx @ 0x1C00311E0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0043BC4 (ACPIQueryDeviceBiosNameEx.c)
 */

__int64 __fastcall ACPIIoctlQueryDeviceBiosNameEx(__int64 a1, IRP *a2, __int64 a3)
{
  bool v3; // cf
  int v6; // edi
  _IRP *MasterIrp; // rax
  int v8; // edx
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  void *Src[2]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a3 + 16) < 8u;
  *(_OWORD *)Src = 0LL;
  if ( v3 )
  {
    v6 = -1073741820;
  }
  else
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type != 1114721857
      || (v8 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber, (v8 & 0xFFFFFFFB) != 0) )
    {
      v6 = -1073741585;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      v6 = ACPIQueryDeviceBiosNameEx(a1, v8 | 1u, Src);
      if ( v6 >= 0 )
      {
        v9 = LOWORD(Src[0]) + 2;
        if ( *(_DWORD *)(a3 + 8) >= v9 )
        {
          v10 = v9;
          memmove(a2->AssociatedIrp.MasterIrp, Src[1], v9);
          a2->IoStatus.Information = v10;
        }
        else
        {
          v6 = -1073741789;
        }
      }
    }
  }
  if ( Src[1] )
  {
    ExFreePoolWithTag(Src[1], 0x53706341u);
    *(_OWORD *)Src = 0LL;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v6;
}
