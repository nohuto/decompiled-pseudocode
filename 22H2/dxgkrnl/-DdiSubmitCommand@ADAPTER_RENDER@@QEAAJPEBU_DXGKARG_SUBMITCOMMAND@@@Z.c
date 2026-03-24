/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00159C0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C00159A0 (-ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(ADAPTER_RENDER *this, const struct _DXGKARG_SUBMITCOMMAND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  struct DXGTHREAD *v7; // r14
  int v8; // r15d
  struct DXGADAPTER *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 Value; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGGLOBAL *v29; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v31; // rcx
  _QWORD *v32; // rax
  unsigned __int8 v33; // cl
  _QWORD *v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-88h] BYREF
  __int64 v37; // [rsp+28h] [rbp-80h]
  char v38; // [rsp+30h] [rbp-78h]
  char v39; // [rsp+38h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 5013LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v8 = *((_DWORD *)Current + 8);
  else
    v8 = 0;
  v9 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  v39 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1548), v9) )
    {
      v29 = DXGGLOBAL::GetGlobal(v28, v27);
      SessionData = DXGGLOBAL::GetSessionData(v29);
      if ( SessionData )
      {
        v31 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2337);
        if ( v31 )
        {
          KeStackAttachProcess(v31, &ApcState);
          v39 = 1;
        }
      }
    }
  }
  v11 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 432LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v39 )
    KeUnstackDetachProcess(&ApcState);
  v12 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v12 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v10);
    v32[3] = 275LL;
    v32[4] = 16LL;
    v32[5] = this;
    v32[6] = CurrentIrql;
    v33 = KeGetCurrentIrql();
    v32[7] = v33;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( v7 && *((_DWORD *)v7 + 8) != v8 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v10);
    v34[3] = 275LL;
    v34[4] = 38LL;
    v34[5] = *((int *)v7 + 8);
    v34[6] = v8;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v10);
  v13[3] = v11;
  v13[4] = a2->hDevice;
  v13[5] = a2->DmaBufferSegmentId;
  v13[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v13[7] = DmaBufferSize;
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v15);
  v16[3] = a2->DmaBufferSubmissionStartOffset;
  v16[4] = a2->DmaBufferSubmissionEndOffset;
  v16[5] = a2->pDmaBufferPrivateData;
  v16[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v16[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v18);
  v19[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v19[4] = a2->SubmissionFenceId;
  v19[5] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v19[6] = Value;
  if ( (_DWORD)v11 )
  {
    v35 = WdLogNewEntry5_WdError(Value, v20);
    *(_QWORD *)(v35 + 24) = v11;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v22);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit);
  return (unsigned int)v11;
}
