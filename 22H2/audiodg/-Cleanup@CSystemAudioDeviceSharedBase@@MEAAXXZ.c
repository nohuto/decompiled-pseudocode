/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010740
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140013188 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14001331C (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140044924 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x140045280 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140045B10 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x1400013B8 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140001D94 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F210 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010890 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14003E930 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v4);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids);
  }
  if ( *((_DWORD *)this + 85) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 85) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 41) )
    goto LABEL_15;
  if ( !*((_DWORD *)this + 84) )
    goto LABEL_7;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this, 0) >= 0 )
    goto LABEL_7;
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids);
LABEL_7:
    v2 = WPP_GLOBAL_Control;
  }
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v2 + 7) & 0x200) == 0 || *((_BYTE *)v2 + 25) < 4u )
    {
LABEL_12:
      if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
        WPP_SF_(v2[2], 15LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids);
      goto LABEL_14;
    }
    WPP_SF_(v2[2], 14LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids);
LABEL_15:
    v2 = WPP_GLOBAL_Control;
    goto LABEL_12;
  }
LABEL_14:
  PublishDeviceGraphWnfState();
  EtwEventActivityIdControl(4LL, &v4);
}
