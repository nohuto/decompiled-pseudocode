/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FB6A0
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAC68 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??_GDXGMONITOR@@UEAAPEAXI@Z @ 0x1C002A280 (--_GDXGMONITOR@@UEAAPEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C006B16C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByRef@$0BA@@@@.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F84CC (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C01FB908 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x1C01FB934 (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x1C01FB9B0 (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FBCA0 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FBE38 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03C5474 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 *     ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x1C03C5E24 (-DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct DXGMONITOR **a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  __int64 v10; // r14
  void *v11; // rax
  DXGMONITOR *v12; // rax
  struct DxgMonitor::IMonitorComponentParent *v13; // rsi
  USB4_HOSTROUTER_MGR *v14; // rcx
  __int128 *v15; // r13
  int v16; // eax
  __int64 v17; // rdi
  int MonitorInstance; // eax
  DXGMONITOR *v19; // rbx
  int v20; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // r13
  DXGMONITOR *v22; // rbx
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  int v25; // eax
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  DXGMONITOR *v33; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v34)(_QWORD, __int64); // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  struct DXGMONITOR **v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING v42; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v43[14]; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+130h] [rbp+30h]

  v10 = a2;
  v40 = a6;
  v38 = a8;
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v10 == -1 )
    WdLogSingleEntry0(1LL);
  *a6 = 0LL;
  v11 = (void *)operator new[](0x380uLL, 0x4D677844u, 64LL);
  if ( !v11 || (v12 = DXGMONITOR::DXGMONITOR(v11, this), (v13 = v12) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v17) = -1073741801;
    return (unsigned int)v17;
  }
  DxgMonitor::CreateMonitorDriverInterface((unsigned int)&v34, (_DWORD)v12, *((_QWORD *)this + 3), v10, (__int64)a3);
  if ( v34 )
  {
    v15 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    if ( a7 )
    {
      v25 = USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(v14, *((_DWORD *)a7 + 1), &v42);
      v26 = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry1(2LL, v25);
        if ( (unsigned int)dword_1C013A8A8 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000000002LL) )
        {
          v37 = v26;
          v39 = (__int64)v38 + 8;
          v35 = *((_DWORD *)a7 + 1);
          v36 = *(_DWORD *)a7;
          LODWORD(v33) = 1;
          v32 = 16779264LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v27,
            byte_1C00A0EA6,
            v28,
            v29,
            (__int64)&v32,
            (__int64)&v33,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35,
            &v39);
        }
      }
      else
      {
        v15 = &v41;
        v41 = *(_OWORD *)a7;
      }
    }
    LOBYTE(v30) = a4;
    v16 = DXGMONITOR::_InitializeMonitorNoDriver(
            v13,
            (__int64 *)&v34,
            (unsigned int)v10,
            (__int64)a3,
            v30,
            a5,
            1u,
            (__int64)v15);
    LODWORD(v17) = v16;
    if ( v16 >= 0 )
    {
      v33 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v10, 0, &v33);
      v19 = v33;
      v20 = MonitorInstance;
      if ( MonitorInstance >= 0 )
      {
        if ( !v33 )
          WdLogSingleEntry0(1LL);
        if ( *((_DWORD *)v19 + 78) == 1 )
          WdLogSingleEntry0(1LL);
        if ( *((_QWORD *)v19 + 40) )
          WdLogSingleEntry0(1LL);
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v32, (__int64)v19, 1);
        DXGMONITOR::_SetAttachedPhysicalMonitor(v19, v13);
        if ( v32 )
        {
          ExReleaseResourceLite((PERESOURCE)(v32 + 24));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        if ( v33 )
          WdLogSingleEntry0(1LL);
        if ( v20 != -1073741275 )
          WdLogSingleEntry0(1LL);
        MONITOR_MGR::_InsertMonitorToList(this, v13);
      }
      v43[0] = &MonitorEventDeferral::`vftable';
      memset(&v43[2], 0, 0x60uLL);
      v44 = 0;
      v43[1] = (char *)this + 8;
      RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v32, (__int64)v13, 1);
      v21 = v38;
      v17 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                   v13,
                   0LL,
                   (struct DxgMonitor::IMonitorDeferredEventSource *)v43,
                   v38);
      if ( v32 )
      {
        ExReleaseResourceLite((PERESOURCE)(v32 + 24));
        KeLeaveCriticalRegion();
      }
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v43, v21);
      if ( v19 )
      {
        RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v32, (__int64)v19, 1);
        DXGMONITOR::_SetAttachedPhysicalMonitor(v19, 0LL);
        if ( v32 )
        {
          ExReleaseResourceLite((PERESOURCE)(v32 + 24));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        MONITOR_MGR::_RemoveMonitorFromList(this, v13);
      }
      if ( (int)v17 < 0 )
      {
        WdLogSingleEntry2(2LL, v10, v17);
        v22 = v13;
      }
      else
      {
        v22 = 0LL;
        LODWORD(v17) = 0;
        *v40 = v13;
      }
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v43);
      goto LABEL_25;
    }
    WdLogSingleEntry2(2LL, v10, v16);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v17) = -1073741801;
  }
  v22 = v13;
LABEL_25:
  v23 = v34;
  v34 = 0LL;
  if ( v23 )
    (**v23)(v23, 1LL);
  if ( v22 )
    DXGMONITOR::`scalar deleting destructor'(v22, 1);
  return (unsigned int)v17;
}
