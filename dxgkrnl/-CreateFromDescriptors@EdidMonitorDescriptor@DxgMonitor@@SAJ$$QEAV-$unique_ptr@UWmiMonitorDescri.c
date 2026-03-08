/*
 * XREFs of ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C01FEB78 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03C7540 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001ED38 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C001F1E0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C001F290 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     MonitorLogBadEDID @ 0x1C03BFCE4 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(void ****a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned __int8 *v7; // r11
  __int64 v8; // r14
  int IsEDIDBaseBlock; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  char *v16; // rcx
  void **v17; // rdi
  __int64 v18; // rdx
  void ***v19; // rax
  void **v20; // rbx
  void **v21; // rbx
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  char *v24; // rdi

  v4 = operator new[](0x20uLL, 0x4D677844u, 256LL);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    v6 = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)v4 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
    *(_QWORD *)(v4 + 8) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
    v7 = (unsigned __int8 *)*a1;
    if ( *a1 )
    {
      v8 = v4;
      do
      {
        if ( !*(_QWORD *)v7 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v7 + 24);
          v10 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            MonitorLogBadEDID(v10);
            goto LABEL_31;
          }
        }
        v7 = *(unsigned __int8 **)v7;
        ++v6;
      }
      while ( v7 );
      if ( !v6 )
        goto LABEL_36;
      v11 = 8LL * v6;
      if ( !is_mul_ok(v6, 8uLL) )
        v11 = -1LL;
      v12 = __CFADD__(v11, 8LL);
      v13 = v11 + 8;
      if ( v12 )
        v13 = -1LL;
      v14 = operator new[](v13, 0x4D677844u, 256LL);
      if ( v14 )
      {
        v15 = v14 + 8;
        *(_QWORD *)v14 = v6;
        `vector constructor iterator'(
          (char *)(v14 + 8),
          8LL,
          v6,
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
      }
      else
      {
        v15 = 0LL;
      }
      v16 = *(char **)(v5 + 24);
      *(_QWORD *)(v5 + 24) = v15;
      if ( v16 )
      {
        v24 = v16 - 8;
        `vector destructor iterator'(
          v16,
          8LL,
          *((_QWORD *)v16 - 1),
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        operator delete(v24);
      }
      if ( *(_QWORD *)(v5 + 24) )
      {
        *(_DWORD *)(v5 + 16) = v6;
        do
        {
          if ( !*a1 )
            WdLogSingleEntry0(1LL);
          v17 = **a1;
          **a1 = 0LL;
          v18 = *(_QWORD *)(v8 + 24);
          --v6;
          v19 = *a1;
          *a1 = 0LL;
          v20 = *(void ***)(v18 + 8LL * v6);
          *(_QWORD *)(v18 + 8LL * v6) = v19;
          if ( v20 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v20);
            operator delete(v20);
          }
          v21 = (void **)*a1;
          *a1 = (void ***)v17;
          if ( v21 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v21);
            operator delete(v21);
            v17 = (void **)*a1;
          }
        }
        while ( v6 );
        if ( v17 )
          WdLogSingleEntry0(1LL);
        v22 = (void (__fastcall ***)(_QWORD, __int64))*a2;
        *a2 = v8;
        if ( v22 )
          (**v22)(v22, 1LL);
        return 0;
      }
      v10 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
    }
    else
    {
LABEL_36:
      v10 = -1071841279;
    }
  }
  else
  {
    v5 = 0LL;
    WdLogSingleEntry0(2LL);
    v10 = -1073741801;
  }
LABEL_31:
  if ( v5 )
    DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v5, 1);
  return v10;
}
