/*
 * XREFs of DpiDispatchSystemControl @ 0x1C03959D0
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C00137DC (LoadEtwStackLocation.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x1C005E0A8 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDispatchSystemControl(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  char v3; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 (__fastcall *v13)(__int64, IRP *); // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v16[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+90h] [rbp-88h]
  __int128 v18; // [rsp+A0h] [rbp-78h]
  __int128 v19; // [rsp+B0h] [rbp-68h]
  __int128 v20; // [rsp+C0h] [rbp-58h]
  __int64 v21; // [rsp+D0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v16, (__int64)a2);
    v17 = *(_OWORD *)EtwStackLocation;
    v18 = *((_OWORD *)EtwStackLocation + 1);
    v19 = *((_OWORD *)EtwStackLocation + 2);
    v20 = *((_OWORD *)EtwStackLocation + 3);
    v21 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v7, &EventEnterDpiDispatchSystemControl, v8, a1);
  }
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, File, 1u, 0x20u);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, IRP *))(v2 + 144);
    v3 = 1;
    if ( v13 )
    {
      v10 = v13(a1, a2);
      if ( v10 != -1073741637 )
        goto LABEL_7;
    }
    v10 = -1073741637;
    if ( *(_BYTE *)(v2 + 56) == 1 )
    {
      if ( *(_QWORD *)(v2 + 160) )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
        {
          ++a2->CurrentLocation;
          a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
          v10 = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v9);
  }
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  if ( v3 == 1 )
LABEL_7:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v10;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventExitDpiDispatchSystemControl,
      v11,
      a1,
      RemlockSize);
  }
  return v10;
}
