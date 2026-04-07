/*
 * XREFs of ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800ACC40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18003141C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800AC534 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800AC840 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800ACCDC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD2AC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnGlobalTimeUpdated(CScreenRotation *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // eax

  v1 = *((_QWORD *)this + 37);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    v4 = *((_DWORD *)this + 76);
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30));
    if ( v4 == 1 )
    {
      v5 = CScreenRotation::PreDelayExpired(this);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1CCu);
LABEL_8:
        CScreenRotation::Stop(this, 0);
      }
    }
    else
    {
      v6 = CScreenRotation::MidDelayExpired(this);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1D2u);
        goto LABEL_8;
      }
    }
  }
  return v2;
}
