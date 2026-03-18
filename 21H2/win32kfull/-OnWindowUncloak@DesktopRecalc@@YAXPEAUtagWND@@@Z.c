/*
 * XREFs of ?OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z @ 0x1C0082214
 * Callers:
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z @ 0x1C0082238 (-HasPendingWork@CRecalcProp@@SA_NPEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00AF70C (-ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C023B1C4 (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

void __fastcall DesktopRecalc::OnWindowUncloak(DesktopRecalc *this, struct tagWND *a2)
{
  int v3; // edx
  int v4; // r8d

  if ( CRecalcProp::HasPendingWork(this) && !(unsigned __int8)CRecalcProp::ShouldDeferRecalc(this, 2LL) )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        84,
        4,
        23,
        84,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        *(_QWORD *)this);
    }
    CRecalcProp::s_PostRecalcForWindow(this);
  }
}
