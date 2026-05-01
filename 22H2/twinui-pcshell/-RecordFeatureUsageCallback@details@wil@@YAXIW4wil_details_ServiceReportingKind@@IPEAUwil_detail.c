/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18001E900
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800975F8 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E3AC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18001EB1C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18001EB84 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x1800855C4 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     _invalid_parameter_noinfo @ 0x18009089A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801A8C44 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801A8FE8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(__int64 a1, __int64 a2, __int64 a3, char *a4, _DWORD *a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  _OWORD *v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  size_t v13; // r8
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v15; // r8d
  char *v16[2]; // [rsp+20h] [rbp-18h]

  v6 = a1;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1LL);
  v7 = a5;
  if ( *a5
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnDllShutdownInProgress || !wil::details::g_pfnDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    v9 = (_OWORD *)*(&xmmword_180650180 + 1);
    v10 = xmmword_180650190;
    v11 = xmmword_180650190 - xmmword_180650180;
    LODWORD(v16[0]) = v6;
    v16[1] = a4;
    if ( (unsigned __int64)(*(&xmmword_180650180 + 1) - xmmword_180650180 + 16LL) >= (_QWORD)xmmword_180650190
                                                                                   - xmmword_180650180 )
    {
      v12 = 16LL;
      if ( (unsigned __int64)(2 * v11) > 0x10 )
        v12 = 2 * v11;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_180650180, v12) )
        goto LABEL_24;
      v10 = xmmword_180650190;
      v9 = (_OWORD *)*(&xmmword_180650180 + 1);
    }
    v13 = 0LL;
    if ( (unsigned __int64)v9 < v10 )
      v13 = v10 - (_QWORD)v9;
    if ( v9 )
    {
      if ( v13 >= 0x10 )
      {
        *v9 = *(_OWORD *)v16;
LABEL_23:
        *(&xmmword_180650180 + 1) += 16LL;
LABEL_24:
        if ( !byte_180650168 )
        {
          if ( !qword_180650160 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)&a5);
            ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              (struct _TP_TIMER **)&qword_180650160,
              ThreadpoolTimer);
            wil::last_error_context::~last_error_context((wil::last_error_context *)&a5);
          }
          wil::details::EnsureCoalescedTimer_SetTimer(&qword_180650160, &byte_180650168, 300000LL);
        }
        ReleaseSRWLockExclusive(&SRWLock);
        goto LABEL_29;
      }
      memset_0(v9, 0, v13);
      *(_DWORD *)((__int64 (*)(void))_o__errno)() = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v8, v10, v13) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_23;
  }
LABEL_29:
  v15 = v7[1];
  if ( v15 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, v7[2], v15, 0, v16[0]);
  if ( !v7[4] )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
}
