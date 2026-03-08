/*
 * XREFs of ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03C7304
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03C4A88 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x1C006C0DC (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C01F97B8 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1C03C720C (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 */

DxgMonitor::MonitorDescriptorState **__fastcall DxgMonitor::MonitorDescriptorState::CopyInstance(
        __int64 a1,
        DxgMonitor::MonitorDescriptorState **a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rax
  DxgMonitor::MonitorDescriptorState *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rdx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  DxgMonitor::MultiMonitorDescriptor *v20; // rax
  DxgMonitor::MultiMonitorDescriptor *v21; // rax
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v26[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = (DxgMonitor::MonitorDescriptorState *)operator new[](0xB8uLL, 0x4D677844u, 256LL);
  if ( !v8 || (v9 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(v8, a3, a4)) == 0LL )
  {
    *a2 = 0LL;
    return a2;
  }
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 )
  {
    v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 16LL))(v10, v26);
    v12 = *v11;
    *v11 = 0LL;
    v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v9 + 16);
    *((_QWORD *)v9 + 16) = v12;
    if ( v13 )
      (**v13)(v13, 1LL);
    v14 = (void (__fastcall ***)(_QWORD, __int64))v26[0];
    v26[0] = 0LL;
    if ( v14 )
      (**v14)(v14, 1LL);
    if ( !*((_QWORD *)v9 + 16) )
      goto LABEL_9;
  }
  v15 = *(_QWORD *)(a1 + 136);
  if ( v15 )
  {
    v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 16LL))(v15, v26);
    v17 = *v16;
    *v16 = 0LL;
    v18 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v9 + 17);
    *((_QWORD *)v9 + 17) = v17;
    if ( v18 )
      (**v18)(v18, 1LL);
    v19 = (void (__fastcall ***)(_QWORD, __int64))v26[0];
    v26[0] = 0LL;
    if ( v19 )
      (**v19)(v19, 1LL);
    if ( !*((_QWORD *)v9 + 17) )
      goto LABEL_9;
    *((_BYTE *)v9 + 152) = *(_BYTE *)(a1 + 152);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_24;
  v20 = (DxgMonitor::MultiMonitorDescriptor *)operator new[](0x28uLL, 0x4D677844u, 256LL);
  v21 = v20
      ? DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
          v20,
          *((struct DxgMonitor::IMonitorDescriptor **)v9 + 16),
          *((struct DxgMonitor::IMonitorDescriptor **)v9 + 17))
      : 0LL;
  v22 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v9 + 18);
  *((_QWORD *)v9 + 18) = v21;
  if ( v22 )
    (**v22)(v22, 1LL);
  if ( *((_QWORD *)v9 + 18) )
  {
LABEL_24:
    v23 = *(_QWORD *)(a1 + 160);
    if ( v23 == *(_QWORD *)(a1 + 128) )
    {
      v24 = *((_QWORD *)v9 + 16);
    }
    else if ( v23 == *(_QWORD *)(a1 + 136) )
    {
      v24 = *((_QWORD *)v9 + 17);
    }
    else
    {
      if ( v23 != *(_QWORD *)(a1 + 144) )
      {
LABEL_31:
        *a2 = v9;
        return a2;
      }
      v24 = *((_QWORD *)v9 + 18);
    }
    *((_QWORD *)v9 + 20) = v24;
    goto LABEL_31;
  }
LABEL_9:
  *a2 = 0LL;
  DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState((PERESOURCE)v9);
  operator delete(v9);
  return a2;
}
