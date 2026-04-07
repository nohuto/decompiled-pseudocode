/*
 * XREFs of ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800ADBEC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A01C4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025114 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800A752C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800AD9F0 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800ADFB4 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800AE09C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800AE10C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartHover(__int64 a1)
{
  CIndirectTouchVisual *v2; // rcx
  int v3; // r8d
  const struct tagPOINT *v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r8
  int v9; // eax
  int v10; // edi
  CIndirectTouchVisual *v11; // rcx

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *((_DWORD *)v2 + 87) = v3;
  CIndirectTouchVisual::UpdateLocation(v2, v4);
  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, *(float *)(a1 + 324), (float)*(int *)(a1 + 344), 0.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Fu);
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v7 )
  {
    CTimelineBase::CTimelineBase(v7, *(float *)(a1 + 324), *(float *)(a1 + 340), 1.0, 0);
    *v8 = &CTimeline<float>::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 368) = v8;
  if ( !v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x82u);
LABEL_16:
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *(_DWORD *)(a1 + 344) = 0;
    *(_DWORD *)(a1 + 340) = 1065353216;
    CIndirectTouchVisual::UpdateOpacityAndSource(v11);
    return 0LL;
  }
  v9 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v10 = v9;
  if ( v9 >= 0 )
    CIndirectTouchVisual::SetETWAnimation(a1, 2);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x84u);
  if ( v10 < 0 )
    goto LABEL_16;
  return 0LL;
}
