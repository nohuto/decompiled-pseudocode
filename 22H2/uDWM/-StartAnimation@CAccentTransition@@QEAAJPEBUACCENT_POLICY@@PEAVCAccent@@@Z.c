/*
 * XREFs of ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800B5AB4
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180004A24 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180035460 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180035610 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180035AC0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180035D44 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180039468 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800B5A0C (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccentTransition::StartAnimation(
        CAccentTransition *this,
        const struct ACCENT_POLICY *a2,
        struct CAccent *a3)
{
  __int64 v6; // rdi
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // r15
  int v9; // r9d
  int v10; // ebx
  int started; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int128 v15; // xmm1
  struct tagRECT si128; // xmm6
  char v17; // cl
  int v18; // edx
  int v19; // eax
  unsigned int v21; // [rsp+28h] [rbp-39h]
  __int64 v22; // [rsp+38h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+40h] [rbp-21h] BYREF
  __int128 v24; // [rsp+48h] [rbp-19h] BYREF
  int v25; // [rsp+58h] [rbp-9h]
  int v26; // [rsp+5Ch] [rbp-5h]
  int v27; // [rsp+60h] [rbp-1h]
  struct tagRECT rc; // [rsp+68h] [rbp+7h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v6 = 0LL;
  *((_BYTE *)this + 32) = 1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0LL;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  if ( !v7 )
  {
    v21 = 37;
LABEL_5:
    v9 = -2147024882;
    v10 = -2147024882;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v21);
    goto LABEL_27;
  }
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v7, this);
  v10 = started;
  if ( started < 0 )
  {
    v21 = 38;
LABEL_25:
    v9 = started;
    goto LABEL_26;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          72LL);
  v6 = v12;
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 3);
    v14 = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v12 + 16) = 1;
    *(_QWORD *)v12 = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
    *(_QWORD *)(v12 + 8) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
    *(_DWORD *)(v12 + 32) = v14;
    *(_OWORD *)(v12 + 40) = *(_OWORD *)(v13 + 616);
    v15 = *(_OWORD *)(v13 + 616);
    *(_QWORD *)(v12 + 24) = v13;
    *(_OWORD *)(v12 + 56) = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v21 = 39;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 3) == 5 )
  {
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
    v17 = *(_BYTE *)(*((_QWORD *)this + 3) + 632LL);
    rc = si128;
    v18 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 60) * 81.0);
    if ( !v17 )
      v18 = -v18;
    OffsetRect(&rc, v18, 0);
    *(struct tagRECT *)(v6 + 56) = rc;
    *(struct tagRECT *)(v6 + 40) = si128;
  }
  v22 = v6;
  v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v24, 8u, 1, &v22);
  v10 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC0u);
  if ( v10 >= 0 )
  {
    started = CAnimationEngine::ScheduleStartAnimation(v8, 74, (__int64)&v24, (unsigned int *)this + 9);
    v10 = started;
    if ( started >= 0 )
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v10 = started;
      if ( started >= 0 )
        goto LABEL_28;
      v21 = 58;
    }
    else
    {
      v21 = 56;
    }
    goto LABEL_25;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x34u);
LABEL_27:
  CAccentTransition::CleanupAnimation(this);
LABEL_28:
  if ( v8 )
    CAnimationEngine::Release(v8);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  DynArrayImpl<0>::~DynArrayImpl<0>(&v24);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v10;
}
