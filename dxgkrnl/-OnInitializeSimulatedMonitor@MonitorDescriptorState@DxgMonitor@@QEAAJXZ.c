/*
 * XREFs of ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03C7540
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001ED38 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C001F290 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C006C044 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rax
  void ***v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, _QWORD, _QWORD, __int64, void ***, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *); // rbp
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v8; // eax
  bool v9; // si
  unsigned int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // r9
  int v13; // edi
  void **v14; // rdi
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v16; // [rsp+80h] [rbp+8h] BYREF
  void ***v17; // [rsp+88h] [rbp+10h] BYREF
  char v18; // [rsp+90h] [rbp+18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
    WdLogSingleEntry0(1LL);
  if ( *((_QWORD *)this + 16) )
    WdLogSingleEntry0(1LL);
  v2 = operator new[](0x98uLL, 0x4D677844u, 256LL);
  v3 = (void ***)v2;
  if ( v2 )
  {
    memset((void *)(v2 + 24), 0, 0x80uLL);
    v4 = (__int64 *)DxgMonitor::EDIDCACHE::s_pEdidCache;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = (void **)128;
    v5 = *((_QWORD *)this + 14);
    v16 = D3DKMDT_MCO_UNINITIALIZED;
    v6 = *v4;
    v17 = v3;
    v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, void ***, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *))(v6 + 24);
    v8 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    v9 = IsInternalVideoOutput(v8);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 8LL))(
                      *((_QWORD *)this + 14),
                      &v18);
    LOBYTE(v12) = v9;
    v13 = v7(v4, *v11, v10, v12, v3 + 3, &v16);
    if ( v13 >= 0 )
    {
      if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v3 + 24) >= 0 )
      {
        ConvertMonitorCapablitiesOrigin(v16, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v3 + 1));
        *((_DWORD *)v3 + 3) = 1;
        v14 = *v3;
        *v3 = 0LL;
        if ( v14 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v14);
          operator delete(v14);
        }
        DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(&v17, (__int64 *)this + 16);
        v13 = 0;
        v3 = v17;
        *((_QWORD *)this + 20) = *((_QWORD *)this + 16);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v13 = -1073741275;
      }
    }
    else
    {
      WdLogSingleEntry1(7LL, this);
    }
  }
  else
  {
    v3 = 0LL;
    WdLogSingleEntry0(2LL);
    v13 = -1073741801;
  }
  if ( v3 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>((void **)v3);
    operator delete(v3);
  }
  return (unsigned int)v13;
}
