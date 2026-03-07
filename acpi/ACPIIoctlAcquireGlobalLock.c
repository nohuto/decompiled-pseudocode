__int64 __fastcall ACPIIoctlAcquireGlobalLock(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  _IRP *MasterIrp; // rbx
  __int64 Pool2; // rax

  v3 = *(_DWORD *)(a3 + 8);
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x10 )
  {
    v5 = -1073741820;
LABEL_3:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1281843521 )
  {
    v5 = -1073741585;
    goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(64LL, 32LL, 1282433857LL);
  if ( !Pool2 )
  {
    v5 = -1073741670;
    goto LABEL_3;
  }
  MasterIrp->MdlAddress = (_MDL *)Pool2;
  a2->IoStatus.Information = 16LL;
  *(_QWORD *)Pool2 = a2;
  *(_WORD *)(Pool2 + 8) = 1;
  v5 = ACPIAsyncAcquireGlobalLock(Pool2);
  result = 259LL;
  if ( v5 != 259 )
    goto LABEL_3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return result;
}
