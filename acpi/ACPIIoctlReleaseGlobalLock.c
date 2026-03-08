/*
 * XREFs of ACPIIoctlReleaseGlobalLock @ 0x1C0031418
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001290 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIReleaseGlobalLock @ 0x1C003937C (ACPIReleaseGlobalLock.c)
 */

__int64 __fastcall ACPIIoctlReleaseGlobalLock(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edi
  _IRP *MasterIrp; // rbx
  _MDL *MdlAddress; // rbx

  v3 = *(_DWORD *)(a3 + 16);
  a2->IoStatus.Information = 0LL;
  if ( v3 >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1281847873 )
    {
      MdlAddress = MasterIrp->MdlAddress;
      v5 = ACPIReleaseGlobalLock(MdlAddress);
      ExFreePoolWithTag(MdlAddress, 0x4C706341u);
    }
    else
    {
      v5 = -1073741585;
    }
  }
  else
  {
    v5 = -1073741820;
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  return v5;
}
