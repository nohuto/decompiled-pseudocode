/*
 * XREFs of ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0077660 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0082554 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00AF70C (-ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C (-FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00CDD98 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00CE218 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00F4C7C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C016D33A (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01DF4B0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01ED8C8 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C020783C (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C0244DD4 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00FE1A0 (GetAppCompatFlags2QuadWord.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowCloakState(const struct tagWND *a1)
{
  unsigned int v1; // esi
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r15
  tagObjLock **v9; // rbx
  _DWORD *Prop; // rbx
  int v11; // ecx
  unsigned __int64 AppCompatFlags2QuadWord; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  char v15; // [rsp+58h] [rbp-21h]
  char v16; // [rsp+60h] [rbp-19h]
  __int128 v17; // [rsp+70h] [rbp-9h]

  v1 = 0;
  v17 = 0LL;
  v2 = 0;
  if ( !(unsigned int)IsTopLevelWindow(a1)
    && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow(a1)) )
  {
    goto LABEL_20;
  }
  v7 = *((_QWORD *)a1 + 18);
  v14 = 0LL;
  v15 = 0;
  v8 = (unsigned __int16)atomDWMProp;
  v16 = 0;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY(v5, v4, v6) )
  {
    v16 = 1;
    if ( v7 == gObjDummyLock )
      v7 = 0LL;
    *(_QWORD *)&v14 = v7;
    v9 = (tagObjLock **)&v14;
    do
    {
      if ( *v9 )
        tagObjLock::LockExclusive(*v9);
      ++v2;
      ++v9;
    }
    while ( !v2 );
    v15 = 1;
  }
  Prop = (_DWORD *)RealGetProp(*((_QWORD *)a1 + 18), v8, 1LL);
  if ( v16 && v15 )
  {
    if ( (_QWORD)v14 )
      tagObjLock::UnLockExclusive((tagObjLock *)v14);
    v15 = 0;
  }
  v2 = 1;
  if ( Prop )
  {
    v11 = *Prop & 0x7FFFF;
  }
  else
  {
LABEL_20:
    AppCompatFlags2QuadWord = GetAppCompatFlags2QuadWord(*((_QWORD *)a1 + 2));
    v11 = (AppCompatFlags2QuadWord >> 3) & 0x40000 | v17 & 0xFFF90000;
    if ( !v2 )
      return 0LL;
  }
  if ( (v11 & 0x400) != 0 || (v11 & 0x2000) != 0 )
    v1 = 1;
  result = v1 | 2;
  if ( (v11 & 0x800) == 0 )
    return v1;
  return result;
}
