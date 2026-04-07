/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180031494
 * Callers:
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x180031F50 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800AFF60 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002FFE0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180031100 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800316F4 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180031830 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180031874 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18003191C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180031EBC (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800852C8 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // r8d
  CAnimationScheduler *v15; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-50h]
  CStoryboard *v24; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+40h] [rbp-30h]
  __int128 v27; // [rsp+50h] [rbp-20h]

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v9, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v24 = 0LL;
  v10 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  v11 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v18 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 8 * v11);
      if ( *(_DWORD *)(v19 + 72) == a2 )
      {
        v20 = *(_QWORD *)(v19 + 32);
        if ( a3 )
        {
          v27 = *(_OWORD *)(v19 + 32);
          v21 = v20 - *(_QWORD *)&a3->Data1;
          if ( !v21 )
            v21 = *((_QWORD *)&v27 + 1) - *(_QWORD *)a3->Data4;
        }
        else
        {
          v21 = v20 - *(_QWORD *)&GUID_NULL.Data1;
          v26 = *(_OWORD *)(v19 + 32);
          if ( !v21 )
            v21 = *((_QWORD *)&v26 + 1) - *(_QWORD *)GUID_NULL.Data4;
        }
        if ( !v21 && !*(_DWORD *)(v19 + 24) )
          break;
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v24 = (CStoryboard *)v19;
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v10 = 0;
  }
LABEL_4:
  if ( !v24 )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v10 = -2147024809;
      goto LABEL_22;
    }
    v12 = CStoryboardFactory::Create(a2, a4, &v24);
    v10 = v12;
    if ( v12 < 0 )
    {
      v23 = 215;
LABEL_41:
      v22 = v12;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D34EC, 1LL, v22, v23);
      goto LABEL_20;
    }
    if ( a3 )
      *((struct _GUID *)v24 + 2) = *a3;
    if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)v24 + 24LL))(v24) )
    {
      v13 = *((_DWORD *)this + 10);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v14 <= *((_DWORD *)this + 9) )
        {
          v10 = 0;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v13) = v24;
          *((_DWORD *)this + 10) = v14;
LABEL_13:
          _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
          goto LABEL_14;
        }
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8u, 1, &v24);
        v10 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC0u);
        if ( v10 >= 0 )
          goto LABEL_13;
      }
      v23 = 226;
      v22 = v10;
      goto LABEL_44;
    }
  }
LABEL_14:
  if ( v10 < 0 )
    goto LABEL_20;
  if ( (*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)v24 + 24LL))(v24) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v24) )
    {
      v12 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)v24 + 88LL))(v24);
      v10 = v12;
      if ( v12 < 0 )
      {
        v23 = 250;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v24, a4);
        v12 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                v24,
                0,
                0);
        v10 = v12;
        if ( v12 < 0 )
        {
          v23 = 254;
        }
        else
        {
          v12 = CAnimationScheduler::_OnBeginAnimationClock(v15, (struct _GUID *)v24, a3, a5);
          v10 = v12;
          if ( v12 >= 0 )
            goto LABEL_20;
          v23 = 257;
        }
      }
      goto LABEL_41;
    }
    CStoryboard::Abandon(v24);
    v10 = -2147467259;
  }
  else
  {
    v10 = -2147024809;
  }
LABEL_20:
  if ( v24 )
  {
    CStoryboard::Release(v24);
    v24 = 0LL;
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return (unsigned int)v10;
}
