/*
 * XREFs of ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B9150
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053768 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800B85D0 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B8ABC (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B8B6C (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateTransition(CTouchPressHoldVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // cl
  __int64 v5; // rdx
  bool v6; // al
  __int64 v7; // rdx
  float v8; // xmm2_4
  float v9; // xmm1_4
  bool v10; // al
  __int64 v11; // rax
  bool v12; // al
  CTouchVisual *v13; // rcx

  v1 = *((_QWORD *)this + 42);
  if ( v1 && (*((float *)this + 82) = *(double *)(v1 + 48), *(_BYTE *)(v1 + 72)) )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    *((_QWORD *)this + 42) = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  else
  {
    v4 = CDesktopManager::s_fTimelineDirty;
  }
  v5 = *((_QWORD *)this + 44);
  if ( v5 )
  {
    *((_DWORD *)this + 81) = (int)(float)*(double *)(v5 + 48);
    if ( *(_BYTE *)(v5 + 72) )
    {
      v3 = (*(_DWORD *)(v5 + 8))-- == 1;
      v6 = v4;
      if ( v3 )
        v6 = 1;
      *((_QWORD *)this + 44) = 0LL;
      v4 = v6;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
  v7 = *((_QWORD *)this + 43);
  if ( v7 )
  {
    v8 = *(double *)(v7 + 48);
    v9 = (float)*((int *)this + 78) * v8;
    *((_DWORD *)this + 79) = (int)(float)((float)*((int *)this + 77) * v8);
    *((_DWORD *)this + 80) = (int)v9;
    if ( *(_BYTE *)(v7 + 72) )
    {
      v3 = (*(_DWORD *)(v7 + 8))-- == 1;
      v10 = v4;
      if ( v3 )
        v10 = 1;
      *((_QWORD *)this + 43) = 0LL;
      v4 = v10;
      CDesktopManager::s_fTimelineDirty = v10;
    }
  }
  v11 = *((_QWORD *)this + 45);
  if ( !v11 )
    goto LABEL_22;
  if ( *(_BYTE *)(v11 + 72) )
  {
    *((_DWORD *)this + 82) = 0;
    v3 = (*(_DWORD *)(v11 + 8))-- == 1;
    v12 = v4;
    if ( v3 )
      v12 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
LABEL_22:
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
  }
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) && !*((_QWORD *)this + 44) && !*((_QWORD *)this + 45) )
  {
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
    CTouchPressHoldVisual::StopAllTimelines(this);
    CTouchVisual::UnRegisterGlobalTimer(v13);
  }
  return 0LL;
}
