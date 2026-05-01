/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18006A340
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x1800225BC (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180022A98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800560D8 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005C0B0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180088728 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801BDB48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CImmersiveApp::SetMonitorInternal(__int64 *a1, struct IUnknown *a2, struct IUnknown **a3, char a4)
{
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // edi
  void (__fastcall *v12)(__int64 *, struct IUnknown **); // rdi
  BOOL v13; // r15d
  void (__fastcall *v14)(__int64 *, GUID *, struct IUnknown **); // rdi
  char IsReportingEnabled; // al
  void (__fastcall *v16)(__int64 *, struct IUnknown **); // rdi
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-40h]
  struct IUnknown *v24; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v25; // [rsp+38h] [rbp-28h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v27; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknown *v30; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+58h] BYREF

  v31 = 0;
  v8 = a4 & 8;
  v9 = 0LL;
  v28 = 0LL;
  if ( (a4 & 8) != 0 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v28, a1 + 84);
    v9 = v28;
  }
  else
  {
    v10 = a1[83];
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(a1[83]);
      v9 = v10;
      v28 = v10;
    }
  }
  if ( !a2 || !v9 )
    goto LABEL_37;
  if ( a2 != (struct IUnknown *)v9 )
  {
    v27 = 0LL;
    v30 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v27) < 0 )
      goto LABEL_37;
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v9)(
            v9,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v30);
    if ( v11 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
    if ( v11 < 0 || v27 != v30 )
    {
LABEL_37:
      if ( (a4 & 1) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) )
      {
        v27 = 0LL;
        v12 = *(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        v12(a1, &v27);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(
          (__int64 *)((char *)a1 + (v8 != 0 ? 672LL : 664LL)),
          (__int64)a2);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) && (a4 & 6) != 0 )
        {
          v13 = (a4 & 2) == 0;
          v30 = 0LL;
          if ( a3 )
          {
            v30 = *a3;
          }
          else
          {
            v26[0] = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
            v25 = 0LL;
            v31 = 2;
            v14 = *(void (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(*(a1 - 8) + 32);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
            v14(a1 - 8, &GUID_00000000_0000_0000_c000_000000000046, &v25);
            IAMPrivate_QueryObject(
              v25,
              (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              v26);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
            (*(void (__fastcall **)(void *, struct IUnknown **))(*(_QWORD *)v26[0] + 120LL))(v26[0], &v30);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
          }
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 a2,
                                 0LL);
          v23 = v13;
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*a1 + 264))(
            a1,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            (unsigned int)v30,
            HIDWORD(v30));
        }
        v24 = 0LL;
        v16 = *(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        v16(a1, &v24);
        if ( (unsigned int)SHIsSameObject(v27, v24) )
          goto LABEL_34;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
          1u,
          v17);
        v18 = a1[85];
        if ( v18 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, unsigned int *))(*(_QWORD *)v18 + 80LL))(
                  v18,
                  v24,
                  &v31);
          v20 = retaddr;
          if ( v19 >= 0 )
          {
            v22 = v31;
            if ( *((_DWORD *)a1 + 172) == v31 )
              goto LABEL_33;
            *((_DWORD *)a1 + 172) = v31;
            v19 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
                    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 23),
                    v22);
            v20 = retaddr;
            if ( v19 >= 0 )
              goto LABEL_33;
            v21 = 1969LL;
          }
          else
          {
            v21 = 1965LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v20,
            (void *)v21,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)(unsigned int)v19);
        }
        else
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x7B7,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)0x8000FFFFLL,
            v23);
        }
LABEL_33:
        LODWORD(v26[0]) = 17;
        v26[1] = 0LL;
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 14),
          (const struct APP_CHANGE_INFO *const)v26,
          1uLL);
LABEL_34:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      }
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
