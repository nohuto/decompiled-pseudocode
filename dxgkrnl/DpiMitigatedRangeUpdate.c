void __fastcall DpiMitigatedRangeUpdate(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  void *v4; // rdx
  PIRP v5; // rsi
  struct _IRP *MasterIrp; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF
  int VirtualFunctionLuid; // [rsp+40h] [rbp-18h]
  struct _LUID SourceLuid; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[8];
  SourceLuid = 0LL;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1, 0LL, 1, 0);
  if ( VirtualFunctionLuid < 0
    || (VirtualFunctionLuid = DxgkDdiQueryVirtualFunctionLuid(*(_QWORD **)(v2 + 3912), 0, a2, (__int64)&SourceLuid),
        VirtualFunctionLuid < 0) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
  }
  else
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
    ExAcquirePushLockExclusiveEx(v2 + 5432, 0LL);
    v4 = *(void **)(v2 + 5376);
    if ( v4 && (v5 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5272), v4)) != 0LL )
    {
      KeClearEvent((PRKEVENT)(v2 + 5440));
      MasterIrp = v5->AssociatedIrp.MasterIrp;
      *(_OWORD *)&MasterIrp->Type = 0LL;
      *(_OWORD *)&MasterIrp->Flags = 0LL;
      MasterIrp->ThreadListEntry.Flink = 0LL;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = 0;
      RtlCopyLuid((PLUID)MasterIrp, &SourceLuid);
      v5->IoStatus.Status = 0;
      v5->IoStatus.Information = 44LL;
      IofCompleteRequest(v5, 1);
      KeWaitForSingleObject((PVOID)(v2 + 5440), Executive, 0, 0, 0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
    }
    ExReleasePushLockExclusiveEx(v2 + 5432, 0LL);
  }
}
