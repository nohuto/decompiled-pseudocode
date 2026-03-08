/*
 * XREFs of ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C01FEB78
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C001F290 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     Feature_PreferDisplayIdOverEdid__private_ReportDeviceUsage @ 0x1C0026A64 (Feature_PreferDisplayIdOverEdid__private_ReportDeviceUsage.c)
 *     Feature_SupportDisplayId2InsideEdid__private_ReportDeviceUsage @ 0x1C0026AC8 (Feature_SupportDisplayId2InsideEdid__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x1C006C0DC (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FD710 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C01FF6CC (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1C01FFCB8 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03CB8C0 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  void **v2; // rbx
  unsigned int v3; // r12d
  __int64 v4; // rax
  size_t v5; // r15
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  void **v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  __int64 v29; // rcx
  int v30; // eax
  void *v31; // rcx
  __int64 v32; // rcx
  DxgMonitor::MultiMonitorDescriptor *v33; // rax
  DxgMonitor::MultiMonitorDescriptor *v34; // rax
  void (__fastcall ***v35)(_QWORD, __int64); // rcx
  __int64 v36; // rax
  size_t Size; // [rsp+70h] [rbp+40h] BYREF
  void *v39; // [rsp+78h] [rbp+48h] BYREF
  void *v40; // [rsp+80h] [rbp+50h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
    WdLogSingleEntry0(1LL);
  v2 = 0LL;
  v3 = 0;
  Size = 0LL;
  while ( 1 )
  {
    v4 = operator new[](0x98uLL, 0x4D677844u, 256LL);
    v5 = v4;
    if ( !v4 )
    {
      WdLogSingleEntry0(2LL);
      LODWORD(v12) = -1073741801;
      goto LABEL_70;
    }
    memset((void *)(v4 + 24), 0, 0x80uLL);
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 128LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, size_t))(*(_QWORD *)v6 + 8LL))(
           v6,
           v3 << 7,
           128LL,
           v5 + 24);
    LODWORD(v12) = v7;
    if ( v7 == -1071841279 || v7 == -1071774719 )
      break;
    if ( v7 == -1071841272 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v3;
      goto LABEL_18;
    }
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      goto LABEL_18;
    }
    *(_DWORD *)(v5 + 8) = 2;
    *(_DWORD *)(v5 + 12) = v3 != 0 ? 255 : 1;
    v13 = *(void ***)v5;
    *(_QWORD *)v5 = v2;
    if ( v13 )
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v13);
      operator delete(v13);
    }
    ++v3;
    v2 = (void **)v5;
    Size = v5;
    if ( v3 > 0xFE )
      goto LABEL_19;
  }
  if ( v3 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry1(3LL, this);
LABEL_18:
  LODWORD(v12) = 0;
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>((void **)v5);
  operator delete((void *)v5);
LABEL_19:
  if ( v2 )
  {
    if ( !v3 )
      WdLogSingleEntry0(1LL);
    v14 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors((void ****)&Size, (__int64 *)this + 16);
    v12 = v14;
    if ( v14 != -1073741801 )
    {
      v19 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
      v2 = (void **)Size;
      *(_QWORD *)(v19 + 24) = v12;
      LODWORD(v12) = 0;
      goto LABEL_26;
    }
    v2 = (void **)Size;
  }
  if ( (int)v12 < 0 )
    goto LABEL_70;
LABEL_26:
  v20 = *((_QWORD *)this + 14);
  LODWORD(Size) = 0;
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
  if ( (*(unsigned int (__fastcall **)(__int64, size_t *, _QWORD))(*(_QWORD *)v21 + 16LL))(v21, &Size, 0LL) == -1073741789 )
  {
    if ( (unsigned int)(Size - 1) > 0xFFFF )
    {
      WdLogSingleEntry1(3LL, (unsigned int)Size);
    }
    else
    {
      v22 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL);
      v39 = v22;
      v23 = v22;
      if ( v22 )
      {
        memset(v22, 0, (unsigned int)Size);
        v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
        v25 = (*(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v24 + 16LL))(v24, &Size, v23);
        if ( v25 < 0 )
        {
          WdLogSingleEntry1(2LL, v25);
        }
        else
        {
          v26 = operator new[](0x30uLL, 0x4D677844u, 256LL);
          if ( v26 )
          {
            v27 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v26, &v39, (unsigned int)Size);
            v23 = v39;
          }
          else
          {
            v27 = 0LL;
          }
          v28 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
          *((_QWORD *)this + 17) = v27;
          if ( v28 )
            (**v28)(v28, 1LL);
          if ( !*((_QWORD *)this + 17) )
            WdLogSingleEntry0(2LL);
          *((_BYTE *)this + 152) = 0;
          if ( !*((_QWORD *)this + 16) )
            WdLogSingleEntry0(3LL);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        LODWORD(v12) = -1073741801;
      }
      if ( v23 )
        operator delete(v23);
      if ( (int)v12 < 0 )
        goto LABEL_70;
    }
  }
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_70;
  if ( *((_QWORD *)this + 17) )
    goto LABEL_59;
  Feature_SupportDisplayId2InsideEdid__private_ReportDeviceUsage();
  v29 = *((_QWORD *)this + 16);
  LODWORD(Size) = 0;
  (*(void (__fastcall **)(__int64, void **, size_t *))(*(_QWORD *)v29 + 232LL))(v29, &v40, &Size);
  if ( !v40 )
  {
    LODWORD(v12) = -1073741801;
    v30 = -1073741801;
LABEL_55:
    WdLogSingleEntry1(2LL, v30);
    goto LABEL_56;
  }
  v30 = DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(&v40, (unsigned int)Size, (char *)this + 136);
  if ( *((_QWORD *)this + 17) )
    *((_BYTE *)this + 152) = 1;
  if ( v30 < 0 && v30 != -1073741275 )
    goto LABEL_55;
LABEL_56:
  v31 = v40;
  v40 = 0LL;
  if ( v31 )
    operator delete(v31);
  if ( (int)v12 >= 0 )
  {
LABEL_59:
    if ( *((_QWORD *)this + 16) )
    {
      v32 = *((_QWORD *)this + 17);
      if ( v32 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32) == 2 )
        {
          v33 = (DxgMonitor::MultiMonitorDescriptor *)operator new[](0x28uLL, 0x4D677844u, 256LL);
          if ( v33 )
            v34 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
                    v33,
                    *((struct DxgMonitor::IMonitorDescriptor **)this + 16),
                    *((struct DxgMonitor::IMonitorDescriptor **)this + 17));
          else
            v34 = 0LL;
          v35 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 18);
          *((_QWORD *)this + 18) = v34;
          if ( v35 )
            (**v35)(v35, 1LL);
          if ( !*((_QWORD *)this + 18) )
            LODWORD(v12) = -1073741801;
        }
      }
    }
  }
LABEL_70:
  Feature_PreferDisplayIdOverEdid__private_ReportDeviceUsage();
  v36 = *((_QWORD *)this + 18);
  if ( v36 || (v36 = *((_QWORD *)this + 16)) != 0 || (v36 = *((_QWORD *)this + 17)) != 0 )
    *((_QWORD *)this + 20) = v36;
  DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(this);
  if ( v2 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v2);
    operator delete(v2);
  }
  return (unsigned int)v12;
}
