/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180025BB0
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025CCC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025954 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v11; // rax
  _QWORD *v12; // r8
  bool v14; // zf
  char v15; // al

  v6 = 0;
  v7 = a2;
  v9 = *(_QWORD *)(a1 + 8LL * a2 + 376);
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    v15 = CDesktopManager::s_fTimelineDirty;
    if ( v14 )
      v15 = 1;
    *(_QWORD *)(a1 + 8LL * a2 + 376) = 0LL;
    CDesktopManager::s_fTimelineDirty = v15;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - a5) & _xmm) < 0.00000011920929 )
    a6 = 0;
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v11 )
  {
    CTimelineBase::CTimelineBase(v11, a3, a4, a5, a6);
    *v12 = &CTimeline<float>::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)(a1 + 8 * v7 + 376) = v12;
  if ( !v12 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA4u);
  }
  return v6;
}
