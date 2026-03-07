__int64 __fastcall DpiDispatchCreate(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  __int64 v6; // rbp
  NTSTATUS v7; // eax
  int v8; // ebx
  __int64 (__fastcall *v9)(__int64, IRP *); // rax
  __int64 v10; // r8
  __int64 RemlockSize; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventEnterDpiDispatchCreate, a3, a1, 0);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, File, 1u, 0x20u);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
LABEL_14:
    a2->IoStatus.Status = v8;
    IofCompleteRequest(a2, 0);
    goto LABEL_7;
  }
  v9 = *(__int64 (__fastcall **)(__int64, IRP *))(v6 + 104);
  v3 = 1;
  if ( !v9 )
  {
    if ( (a2->RequestorMode || (a2->Tail.Overlay.CurrentStackLocation->Flags & 1) != 0) && !*(_BYTE *)(v6 + 58) )
      v8 = -1073741790;
    goto LABEL_14;
  }
  v8 = v9(a1, a2);
LABEL_7:
  if ( v8 < 0 && v3 == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v8;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventExitDpiDispatchCreate,
      v10,
      a1,
      RemlockSize);
  }
  return (unsigned int)v8;
}
