/*
 * XREFs of ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180039904
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800102F4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180010400 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180039850 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x1800399F0 (-StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qdq_EtwEventWriteTransfer @ 0x1800A9CA0 (McTemplateU0qdq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(CAnimationEngine *this, unsigned int a2)
{
  __int64 v3; // r14
  int v4; // ecx
  CAnimationEngine::CTransitionVisualSet *v5; // rsi
  unsigned int v6; // edi
  unsigned int i; // ebp
  void (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  __int64 v9; // rax
  CBaseObject *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *(CAnimationEngine::CTransitionVisualSet **)(*((_QWORD *)this + 5) + 8 * v3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qdq_EtwEventWriteTransfer(
      v4,
      (unsigned int)&UdwmAnimationEngine_Animation_End,
      *((_DWORD *)v5 + 4),
      *((_DWORD *)v5 + 7),
      *((_DWORD *)v5 + 6));
  v6 = 0;
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v8 = *(void (__fastcall ****)(_QWORD, _QWORD))(*((_QWORD *)this + 9) + 8LL * i);
    if ( v8 )
      (**v8)(v8, *((unsigned int *)v5 + 4));
  }
  CAnimationEngine::CTransitionVisualSet::StopStoryboard(v5);
  v9 = *((_QWORD *)this + 5);
  *((_BYTE *)this + 112) = 1;
  v10 = *(CBaseObject **)(v9 + 8 * v3);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = *((_DWORD *)this + 16);
  if ( (unsigned int)v3 >= v11 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x218u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x590u);
  }
  else
  {
    v12 = v11 - 1;
    if ( (unsigned int)v3 < (unsigned int)v12 )
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v12);
      v11 = *((_DWORD *)this + 16);
    }
    *((_DWORD *)this + 16) = v11 - 1;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v6;
}
