/*
 * XREFs of ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x180234070
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EFC0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC8E8 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802333AC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180234B0C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScaleAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *a3)
{
  CBaseExpression *v4; // rsi
  unsigned int v5; // edx
  __int64 Resource; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
    goto LABEL_5;
  Resource = CResourceTable::GetResource((__int64)a2, v5, 0xBu);
  v4 = (CBaseExpression *)Resource;
  if ( !Resource )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( (*(_BYTE *)(Resource + 232) & 1) == 0 )
  {
LABEL_5:
    *((_BYTE *)this + 540) = *((_BYTE *)this + 540) & 0xBF | (*((_BYTE *)a3 + 12) == 0 ? 0x40 : 0);
    if ( (unsigned __int8)CInteractionTracker::SetCustomAnimation(this, v4, 1LL) )
    {
      v10 = *((_DWORD *)this + 47);
      if ( v10 <= *((_DWORD *)a3 + 7) )
        v10 = *((_DWORD *)a3 + 7);
      *((_DWORD *)this + 47) = v10;
    }
    else if ( v4 )
    {
      CBaseExpression::NotifyAnimationCompleted(v4);
      CResource::UnRegisterNotifierInternal(this, v4);
      if ( *((_BYTE *)a3 + 12) )
        CInteractionTracker::NotifyRequestIgnored(this);
    }
    *((_DWORD *)this + 37) = *((_DWORD *)a3 + 4) ^ _xmm;
    *((_DWORD *)this + 38) = *((_DWORD *)a3 + 5) ^ _xmm;
    *((_BYTE *)this + 540) &= ~0x40u;
  }
  return 0LL;
}
