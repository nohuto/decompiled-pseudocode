/*
 * XREFs of ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008920 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0028F20 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00A2E6C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00C8AFC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00FCCCC (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1C012949C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C0144F40 (DCELogicalSpeedTopLevelHitTest.c)
 *     _ChildWindowFromPointEx @ 0x1C01489CA (_ChildWindowFromPointEx.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CA56C (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E7030 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01E8238 (xxxTouchTargetWindow.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F5038 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     _RealChildWindowFromPoint @ 0x1C023336C (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C004A1A8 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall GetWindowCloakState(struct tagTHREADINFO **a1)
{
  int v2; // esi
  tagObjLock *v3; // rcx
  unsigned int v4; // ebx
  _DWORD *Prop; // rbx
  int v6; // ecx
  struct tagTHREADINFO *v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  __int64 result; // rax
  _DWORD v11[16]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp+17h] BYREF
  tagObjLock *v13; // [rsp+78h] [rbp+27h]
  char v14; // [rsp+88h] [rbp+37h]
  char v15; // [rsp+90h] [rbp+3Fh]

  memset_0(v11, 0, sizeof(v11));
  v2 = 0;
  if ( !(unsigned int)IsTopLevelWindow(a1) && ((*((_BYTE *)a1[5] + 26) & 8) == 0 || !GetTopLevelWindow((__int64)v3)) )
    goto LABEL_6;
  v4 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(v12, a1[18]);
  Prop = (_DWORD *)RealGetProp(a1[18], v4, 1LL);
  if ( v15 && v14 )
  {
    v3 = v13;
    if ( v13 )
      tagObjLock::UnLockExclusive(v13);
    v14 = 0;
  }
  v2 = 1;
  if ( Prop )
  {
    v6 = *Prop & 0x7FFFF;
  }
  else
  {
LABEL_6:
    v7 = a1[2];
    v8 = v11[0] & 0xFFFD0000;
    if ( !v7 )
      v7 = PtiCurrentShared((__int64)v3);
    v6 = (v8 ^ (v8 ^ (*((_DWORD *)v7 + 162) >> 3)) & 0x40000) & 0x7FFFF;
    if ( !v2 )
      return 0LL;
  }
  v9 = 0;
  if ( (v6 & 0x400) != 0 || (v6 & 0x2000) != 0 )
    v9 = 1;
  result = v9 | 2;
  if ( (v6 & 0x800) == 0 )
    return v9;
  return result;
}
