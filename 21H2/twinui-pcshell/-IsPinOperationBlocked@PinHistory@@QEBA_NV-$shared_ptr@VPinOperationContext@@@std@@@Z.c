/*
 * XREFs of ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013B730
 * Callers:
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B660 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18002158C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$PinHistoryOperationBlockedChecked@W4PinHistoryOperationBlockedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAX$$QEAW4PinHistoryOperationBlockedCheckResult@0@@Z @ 0x180132150 (--$PinHistoryOperationBlockedChecked@W4PinHistoryOperationBlockedCheckResult@PinManagerTelemetry.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x180137620 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1801376D0 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8F04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8F04.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD3E8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

char __fastcall PinHistory::IsPinOperationBlocked(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD **v10; // r8
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF

  v17 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1, &v17);
  if ( *std::chrono::steady_clock::now(&v14) >= a1[1] )
  {
    v4 = (_QWORD *)a1[2];
    v5 = (_QWORD *)a1[3];
    while ( v4 != v5 )
    {
      if ( *std::chrono::steady_clock::now(&v14) < v4[2] )
      {
        std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v15, *a2);
        v6 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v16, v4);
        if ( AreEquivalentPinSources((__int64)v6, v15) )
        {
          LODWORD(v14) = 3;
          goto LABEL_15;
        }
      }
      v4 += 3;
    }
    v7 = (_QWORD *)a1[5];
    v8 = (_QWORD *)a1[6];
    while ( v7 != v8 )
    {
      if ( *std::chrono::steady_clock::now(&v14) < v7[2] )
      {
        std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v16, a2);
        v9 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v15, v7);
        if ( AreEquivalentPinOperations((_QWORD **)v9, v10) )
        {
          LODWORD(v14) = 2;
          goto LABEL_15;
        }
      }
      v7 += 3;
    }
    LODWORD(v14) = 0;
    PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>((int *)&v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
    v13 = (std::_Ref_count_base *)a2[1];
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    return 0;
  }
  else
  {
    LODWORD(v14) = 1;
LABEL_15:
    PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>((int *)&v14);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 1;
  }
}
