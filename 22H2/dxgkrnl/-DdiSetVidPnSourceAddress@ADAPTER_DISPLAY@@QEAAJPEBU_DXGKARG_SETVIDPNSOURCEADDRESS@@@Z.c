/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C00155A0
 * Callers:
 *     ?ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0015580 (-ADAPTER_DISPLAY_DdiSetVidPnSourceAddress@@YAJPEAVADAPTER_DISPLAY@@PEBU_DXGKARG_SETVIDPNSOURCEAD.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00034C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F9304 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v4; // rdx
  char v5; // r14
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  struct DXGTHREAD *v8; // r15
  int v9; // r12d
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  HANDLE hAllocation; // rcx
  __int64 v17; // rcx
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGGLOBAL *v23; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v25; // rcx
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-88h] BYREF
  __int64 v31; // [rsp+28h] [rbp-80h]
  char v32; // [rsp+30h] [rbp-78h]
  char v33; // [rsp+38h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 5010LL);
  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    v5 = 1;
  }
  v6 = *((_QWORD *)this + 2);
  if ( *(int *)(v6 + 2596) < 1105 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v6 + 544))(
            *(_QWORD *)(v6 + 272),
            a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 4364));
    CurrentIrql = KeGetCurrentIrql();
    v8 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
      v9 = *((_DWORD *)Current + 8);
    else
      v9 = 0;
    v10 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
    v33 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      Global = DXGGLOBAL::GetGlobal(v6, v4);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1548), v10) )
      {
        v23 = DXGGLOBAL::GetGlobal(v22, v21);
        SessionData = DXGGLOBAL::GetSessionData(v23);
        if ( SessionData )
        {
          v25 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2337);
          if ( v25 )
          {
            KeStackAttachProcess(v25, &ApcState);
            v33 = 1;
          }
        }
      }
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2)
                                                                                           + 544LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
            a2);
    if ( v33 )
      KeUnstackDetachProcess(&ApcState);
    v13 = KeGetCurrentIrql();
    if ( CurrentIrql != (_BYTE)v13 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
      v26[3] = 275LL;
      v26[4] = 16LL;
      v26[5] = this;
      v26[6] = CurrentIrql;
      v27 = KeGetCurrentIrql();
      v26[7] = v27;
      WdLogEvent5_WdCriticalError(v26);
    }
    if ( v8 && *((_DWORD *)v8 + 8) != v9 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
      v28[3] = 275LL;
      v28[4] = 38LL;
      v28[5] = *((int *)v8 + 8);
      v28[6] = v9;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v11);
  v14[3] = (int)v12;
  v14[4] = a2->VidPnSourceId;
  v14[5] = a2->PrimarySegment;
  v14[6] = a2->PrimaryAddress.QuadPart;
  hAllocation = a2->hAllocation;
  v14[7] = hAllocation;
  if ( v12 && v12 != -1073741811 && v12 != -1073741801 )
  {
    v29 = WdLogNewEntry5_WdError(hAllocation, v15);
    *(_QWORD *)(v29 + 24) = (int)v12;
    WdLogEvent5_WdError(v29);
  }
  if ( v5 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v15);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit);
  return v12;
}
