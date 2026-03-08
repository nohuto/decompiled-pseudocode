/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1C01D1400
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     LoadEtwStackLocation @ 0x1C00137DC (LoadEtwStackLocation.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x1C005E0A8 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(__int64, IRP *); // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 RemlockSize; // [rsp+20h] [rbp-A9h]
  int v18; // [rsp+40h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-81h]
  char v20; // [rsp+50h] [rbp-79h]
  _BYTE v21[72]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-29h]
  __int128 v23; // [rsp+B0h] [rbp-19h]
  __int128 v24; // [rsp+C0h] [rbp-9h]
  __int128 v25; // [rsp+D0h] [rbp+7h]
  __int64 v26; // [rsp+E0h] [rbp+17h]

  v18 = -1;
  v3 = 0;
  v19 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 1003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 1003);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 1003);
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v21, (__int64)a2);
    v22 = *(_OWORD *)EtwStackLocation;
    v23 = *((_OWORD *)EtwStackLocation + 1);
    v24 = *((_OWORD *)EtwStackLocation + 2);
    v25 = *((_OWORD *)EtwStackLocation + 3);
    v26 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v7, &EventEnterDpiDispatchInternalIoctl, v8, a1);
  }
  v9 = *(_QWORD *)(a1 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, File, 1u, 0x20u);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
LABEL_25:
    a2->IoStatus.Status = v11;
    IofCompleteRequest(a2, 0);
LABEL_15:
    if ( v3 != 1 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v12 = *(__int64 (__fastcall **)(__int64, IRP *))(v9 + 112);
  v3 = 1;
  if ( !v12 )
  {
    if ( *(_BYTE *)(v9 + 56) == 1 && *(_QWORD *)(v9 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v11 = IofCallDriver(*(PDEVICE_OBJECT *)(v9 + 160), a2);
      goto LABEL_9;
    }
    v11 = -1073741637;
    goto LABEL_25;
  }
  v11 = v12(a1, a2);
  if ( v11 == -1073741738 )
  {
    v3 = 0;
    goto LABEL_15;
  }
LABEL_9:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, 0x20u);
LABEL_10:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v11;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventExitDpiDispatchInternalIoctl,
      v13,
      a1,
      RemlockSize);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  return v11;
}
