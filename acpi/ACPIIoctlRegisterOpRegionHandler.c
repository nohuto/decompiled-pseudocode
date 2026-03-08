/*
 * XREFs of ACPIIoctlRegisterOpRegionHandler @ 0x1C003133C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     RegisterOperationRegionHandler @ 0x1C008BB24 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIIoctlRegisterOpRegionHandler(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // r10
  int v7; // ebx
  _IRP *MasterIrp; // rcx
  _IRP *v9; // rdx
  _MDL *v10; // rcx
  _MDL *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  a2->IoStatus.Information = 32LL;
  if ( v4 >= 0x20 )
  {
    if ( v5 >= 0x10 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      if ( *(_DWORD *)&MasterIrp->Type == 1215263297 )
      {
        v7 = RegisterOperationRegionHandler(
               v6,
               *(_DWORD *)&MasterIrp->AllocationProcessorNumber,
               MasterIrp->MdlAddress,
               *(_QWORD *)&MasterIrp->Flags,
               (__int64)MasterIrp->AssociatedIrp.MasterIrp,
               (__int64)&v12);
        if ( v7 < 0 )
        {
          a2->IoStatus.Information = 0LL;
        }
        else
        {
          v9 = a2->AssociatedIrp.MasterIrp;
          v10 = v12;
          *(_DWORD *)&v9->Type = 1215264065;
          v9->MdlAddress = v10;
          a2->IoStatus.Information = 16LL;
        }
      }
      else
      {
        v7 = -1072431089;
      }
    }
    else
    {
      v7 = -1073741789;
    }
  }
  else
  {
    v7 = -1073741820;
  }
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
