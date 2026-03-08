/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MustUpdateExpressions@CExpressionManager@@QEBA_NXZ @ 0x180052780 (-MustUpdateExpressions@CExpressionManager@@QEBA_NXZ.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800538B4 (-clear@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$ha.c)
 *     ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x1800538E0 (-FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180053950 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800985D4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B288 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800E1CF4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18012A6F8 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18012E9A8 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x1802132E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$00@@U1@.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1802138FC (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180213984 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180213C28 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1802358E4 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x18025FC64 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x18025FC98 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 */

void __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned int i; // ebx
  char v8; // dl
  bool v9; // r13
  char v10; // dl
  __int64 v11; // rax
  unsigned int j; // r12d
  __int64 ***v13; // r15
  __int64 **k; // rbx
  unsigned int v15; // ebx
  unsigned int *v16; // rbx
  int Elapsed; // eax
  double v18; // xmm2_8
  double v19; // xmm3_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  double DurationAverage; // xmm0_8
  __int64 v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  CInteractionTrackerBindingManager *v31; // rcx
  unsigned int v32; // eax
  bool v33[8]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v34; // [rsp+98h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-70h] BYREF
  int v36; // [rsp+A8h] [rbp-68h] BYREF
  int v37; // [rsp+ACh] [rbp-64h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-60h] BYREF
  double v39; // [rsp+B8h] [rbp-58h] BYREF
  double v40; // [rsp+C0h] [rbp-50h] BYREF
  double v41; // [rsp+C8h] [rbp-48h] BYREF
  double v42; // [rsp+D0h] [rbp-40h] BYREF
  double v43; // [rsp+D8h] [rbp-38h] BYREF
  double v44; // [rsp+E0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E8h] [rbp-28h] BYREF

  v35 = a3;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Compositor_Context,
      &UpdateExpressions_Start,
      a3,
      1LL,
      &v45);
  v5 = 0;
  v6 = 0LL;
  v34 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 110); ++i )
    CBaseExpression::TryRegisterWithExpressionManager(*(CBaseExpression **)(*((_QWORD *)this + 52) + 8LL * i));
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<1>::ShrinkToSize((char *)this + 416, 8LL);
  v8 = *((_BYTE *)this + 448) & 0xF3 | (2 * (*((_BYTE *)this + 448) & 4));
  *((_BYTE *)this + 448) = v8;
  v9 = (v8 & 8) != 0;
  if ( CExpressionManager::MustUpdateExpressions(this) )
  {
    *((_BYTE *)this + 448) = v10 & 0xFD;
    if ( *((_DWORD *)this + 40) || CCommonRegistryData::LogExpressionPerfStats )
    {
      CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 88));
      QpcStopwatch::Start((QpcStopwatch *)&v34);
      v6 = v34;
    }
    v11 = v35;
    *((_BYTE *)this + 448) |= 1u;
    *((_QWORD *)this + 3) = v11;
    *((_QWORD *)this + 2) = a2;
    CExpressionManager::UpdateExpressionsWorker(this, 0);
    if ( *((_DWORD *)this + 110) )
    {
      CExpressionManager::FlushPendingTriggeredAnimations(this, 1);
      *((_BYTE *)this + 448) = *((_BYTE *)this + 448) & 0xF3 | (2 * (*((_BYTE *)this + 448) & 4));
      if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 4LL) )
        tlgWriteTransfer_EventWriteTransfer((int)&dword_1803E07D0, (int)&dword_18037D390, 0, 0, 2u, &v45);
      CExpressionManager::UpdateExpressionsWorker(this, 1);
    }
    *((_BYTE *)this + 448) &= ~1u;
    for ( j = 0; j < *((_DWORD *)this + 64); ++j )
    {
      v16 = (unsigned int *)(*((_QWORD *)this + 29) + 16LL * j);
      CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v16 + 1), *v16);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v16 + 1) + 16LL))(*((_QWORD *)v16 + 1));
    }
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<1>::ShrinkToSize((char *)this + 232, 16LL);
    CExpressionManager::FlushQueuedSuspendAnimations(this);
    v13 = (__int64 ***)*((_QWORD *)this + 83);
    for ( k = *v13; k != (__int64 **)v13; k = (__int64 **)*k )
      CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)k[2]);
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::clear((char *)this + 656);
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v34);
      v18 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
      v19 = (double)Elapsed;
      if ( (unsigned int)dword_1803E07D0 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 1LL) )
        {
          v38 = v35;
          v39 = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 88, 5LL) / v18;
          v40 = CExpressionPerformanceCounter::GetDurationAverage(v20, 4LL) / v18;
          v41 = CExpressionPerformanceCounter::GetDurationAverage(v21, 3LL) / v18;
          v42 = CExpressionPerformanceCounter::GetDurationAverage(v22, 2LL) / v18;
          v43 = CExpressionPerformanceCounter::GetDurationAverage(v23, 1LL) / v18;
          DurationAverage = CExpressionPerformanceCounter::GetDurationAverage(v24, 0LL);
          v36 = *((_DWORD *)this + 80);
          v26 = *((unsigned int *)this + 41) + 6LL;
          v33[0] = v9;
          v44 = DurationAverage / v18;
          v37 = *((_DWORD *)this + 8 * v26);
          LODWORD(v35) = *((_DWORD *)this + 114);
          LODWORD(v34) = *((_DWORD *)this + 113);
          *(double *)&v45.Ptr = v19 / v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v27,
            (unsigned int)&unk_18037D20F,
            v28,
            v29,
            (__int64)&v45,
            (__int64)&v34,
            (__int64)&v35,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)v33,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (__int64)&v38);
        }
      }
    }
  }
  v15 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    do
    {
      v30 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * v15);
      v31 = *(CInteractionTrackerBindingManager **)(v30 + 640);
      if ( v31 && *(_DWORD *)(v30 + 176) == 2 && (*(_BYTE *)(v30 + 541) & 1) != 0 )
        CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
          v31,
          (struct CInteractionTracker *)v30);
      v32 = *((_DWORD *)this + 72);
      ++v15;
    }
    while ( v15 < v32 );
    if ( v32 )
    {
      do
        CInteractionTracker::NotifyExpressionProcessingComplete(*(CInteractionTracker **)(*((_QWORD *)this + 33)
                                                                                        + 8LL * v5++));
      while ( v5 < *((_DWORD *)this + 72) );
    }
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Compositor_Context,
      (unsigned int)&UpdateExpressions_Stop,
      *((_DWORD *)this + 113),
      *((_DWORD *)this + 114),
      *((_DWORD *)this + 8 * *((unsigned int *)this + 41) + 48),
      *((_DWORD *)this + 80));
}
