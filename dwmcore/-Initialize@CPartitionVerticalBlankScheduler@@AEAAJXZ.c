/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800D5F58
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800D5CD8 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x18004C6C8 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800AEEF4 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AF148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800CB540 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Initialize(CPartitionVerticalBlankScheduler *this)
{
  HANDLE WaitableTimerW; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CConnection *v6; // r8
  struct CTransport *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  signed int LastError; // eax
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 40LL))(*((_QWORD *)this + 6));
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  *((_QWORD *)this + 3) = WaitableTimerW;
  if ( WaitableTimerW )
  {
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    v3 = CoreUICreateEx(1LL, (char *)this + 72);
    v5 = v3;
    if ( v3 < 0 )
    {
      v13 = 239;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 40LL))(
             *((_QWORD *)this + 9),
             (char *)this + 80);
      v5 = v3;
      if ( v3 < 0 )
      {
        v13 = 242;
      }
      else
      {
        v6 = (struct CConnection *)*((_QWORD *)this + 7);
        v7 = (struct CTransport *)*((_QWORD *)this + 6);
        *((_BYTE *)this + 4548) = 1;
        v3 = CGlobalComposition::Create(
               v7,
               this,
               v6,
               (CPartitionVerticalBlankScheduler *)((char *)this + 4640),
               (struct CComposition **)this + 8);
        v5 = v3;
        if ( v3 >= 0 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
            1u,
            v8,
            v9);
          LinearFitT<256>::Reset(*((_QWORD *)this + 1170));
          return v5;
        }
        v13 = 252;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, v13, 0LL);
    return v5;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( (v5 & 0x80000000) == 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v5, 0xE5u, 0LL);
  return v5;
}
