/*
 * XREFs of ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800102F4
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18001047C (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180028C38 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180039904 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800423DC (-PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x1800425E4 (-BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StartAnimations(CAnimationEngine *this)
{
  int v1; // edi
  __int64 v2; // rbp
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int i; // ebx

  v1 = 0;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 16) )
    return (unsigned int)v1;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2);
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( *(_BYTE *)(v4 + 48) || *(_BYTE *)(v4 + 49) )
      goto LABEL_5;
    v6 = CAnimationEngine::SetupStoryboard(this, (struct CAnimationEngine::CTransitionVisualSet *)v4);
    v1 = v6;
    if ( v6 < 0 )
      break;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 32) + 96LL))(
           *(_QWORD *)(v4 + 32),
           v7,
           0LL);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xDAu);
      goto LABEL_21;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
            *((_QWORD *)this + 1),
            v9,
            0LL);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xDDu);
      goto LABEL_21;
    }
    if ( *(_BYTE *)(v4 + 48) && !*(_BYTE *)(v4 + 49) )
    {
      v11 = CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
      v1 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE3u);
        goto LABEL_21;
      }
      v12 = CAnimationEngine::CTransitionVisualSet::BindAnimationCurves((CAnimationEngine::CTransitionVisualSet *)v4);
      v1 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE4u);
        goto LABEL_21;
      }
    }
LABEL_5:
    CBaseObject::Release((CBaseObject *)v4);
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 16) )
      goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xD7u);
LABEL_21:
  CBaseObject::Release((CBaseObject *)v4);
LABEL_6:
  if ( v1 < 0 )
  {
    for ( i = *((_DWORD *)this + 16); --i >= (int)v2; CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(
                                                        this,
                                                        i) )
      ;
  }
  return (unsigned int)v1;
}
