__int64 __fastcall DpiDispatchPnp(__int64 a1, IRP *a2)
{
  bool v2; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct _IO_REMOVE_LOCK *v9; // r15
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, IRP *); // rax
  UCHAR MinorFunction; // bl
  __int64 v14; // r8
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v17[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+90h] [rbp-88h]
  __int128 v19; // [rsp+A0h] [rbp-78h]
  __int128 v20; // [rsp+B0h] [rbp-68h]
  __int128 v21; // [rsp+C0h] [rbp-58h]
  __int64 v22; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v17, (__int64)a2);
    v18 = *(_OWORD *)EtwStackLocation;
    v19 = *((_OWORD *)EtwStackLocation + 1);
    v20 = *((_OWORD *)EtwStackLocation + 2);
    v21 = *((_OWORD *)EtwStackLocation + 3);
    v22 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v6, &EventEnterDpiDispatchPnp, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (struct _IO_REMOVE_LOCK *)(v8 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 128);
    v2 = 1;
    if ( v12 )
    {
      MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
      v11 = v12(a1, a2);
      v2 = MinorFunction != 2;
      goto LABEL_7;
    }
    v11 = -1073741637;
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v11 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 6 )
      v11 = DpiGdoDispatchGdiPnp(a1, (__int64)a2);
  }
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
LABEL_7:
  if ( v2 )
LABEL_8:
    IoReleaseRemoveLockEx(v9, a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v11;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventExitDpiDispatchPnp,
      v14,
      a1,
      RemlockSize);
  }
  return v11;
}
