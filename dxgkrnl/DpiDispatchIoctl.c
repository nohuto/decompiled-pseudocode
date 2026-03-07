__int64 __fastcall DpiDispatchIoctl(__int64 a1, IRP *a2)
{
  char v2; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(__int64, IRP *); // rax
  NTSTATUS v12; // eax
  __int64 v13; // r8
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v16[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+90h] [rbp-88h]
  __int128 v18; // [rsp+A0h] [rbp-78h]
  __int128 v19; // [rsp+B0h] [rbp-68h]
  __int128 v20; // [rsp+C0h] [rbp-58h]
  __int64 v21; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v16, (__int64)a2);
    v17 = *(_OWORD *)EtwStackLocation;
    v18 = *((_OWORD *)EtwStackLocation + 1);
    v19 = *((_OWORD *)EtwStackLocation + 2);
    v20 = *((_OWORD *)EtwStackLocation + 3);
    v21 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v6, &EventEnterDpiDispatchIoctl, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    goto LABEL_18;
  }
  v11 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 120);
  v2 = 1;
  if ( !v11 )
  {
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v12 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_7;
    }
    v10 = -1073741637;
LABEL_18:
    a2->IoStatus.Status = v10;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v12 = v11(a1, a2);
LABEL_7:
  v10 = v12;
LABEL_8:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, 0x20u);
LABEL_9:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v10;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventExitDpiDispatchIoctl,
      v13,
      a1,
      RemlockSize);
  }
  return v10;
}
