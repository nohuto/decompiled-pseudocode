/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0010350
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0010330 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@@YAJPEAVADAPTER_DISPLAY@@PEAU_DX.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008714 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008740 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0008C68 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C004006C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01C97C4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2,
        __int64 a3)
{
  int v5; // ecx
  int v6; // r8d
  KIRQL CurrentIrql; // di
  KIRQL v8; // al
  __int64 v9; // rbp
  struct DXGTHREAD *v10; // r14
  int v11; // r15d
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v21; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v23; // rcx
  KIRQL v24; // al
  int v25; // edx
  __int64 v26; // [rsp+60h] [rbp-98h] BYREF
  __int64 v27; // [rsp+68h] [rbp-90h]
  char v28; // [rsp+70h] [rbp-88h]
  char v29; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  LODWORD(v26) = -1;
  v27 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    LODWORD(v26) = 5122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5122LL);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 5122);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v5,
      (unsigned int)&DdiSetVidPnMultiPlaneOverlay3Enter,
      v6,
      *((_QWORD *)this + 2),
      a2->VidPnSourceId,
      a2->InputFlags.Value,
      a2->OutputFlags.Value);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  v8 = KeGetCurrentIrql();
  v9 = v8;
  v10 = 0LL;
  if ( v8 < 2u && (Current = DXGTHREAD::GetCurrent(), (v10 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 12);
  else
    v11 = 0;
  v12 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v29 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1684), v12) )
    {
      v21 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v21);
      if ( SessionData )
      {
        v23 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2340);
        if ( v23 )
        {
          KeStackAttachProcess(v23, &ApcState);
          v29 = 1;
        }
      }
    }
  }
  v13 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *))(*((_QWORD *)this + 2) + 1024LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v29 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v24);
  }
  if ( v10 )
  {
    v14 = *((_DWORD *)v10 + 12);
    if ( v14 != v11 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v11, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4612LL));
  if ( (_DWORD)v13 )
  {
    if ( (_DWORD)v13 != -1073741267 && (_DWORD)v13 != -2147483631 )
    {
      WdLogSingleEntry1(2LL, v13);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v25,
            v15,
            0,
            0,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v13,
            0LL,
            0LL,
            0LL,
            0LL,
            v26,
            v27);
      }
    }
  }
  if ( !CurrentIrql )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      v14,
      (unsigned int)&DdiSetVidPnMultiPlaneOverlay3Exit,
      v15,
      *((_QWORD *)this + 2),
      a2->VidPnSourceId,
      a2->InputFlags.Value,
      a2->OutputFlags.Value);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, (unsigned int)v26);
  return (unsigned int)v13;
}
