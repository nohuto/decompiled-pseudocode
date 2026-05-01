/*
 * XREFs of ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1800AD85C
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A80F0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@de.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB9A4 (-begin_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800ADABC (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1801A8D34 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 */

void __fastcall tip::details::shared_data<0,0,0>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  bool v5; // bl
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF
  volatile signed __int32 *v7; // [rsp+B0h] [rbp-18h] BYREF

  if ( tip::details::shared_data<0,0,0>::begin_update(a1) )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v5 = (unsigned __int8)tip::vector_nothrow<wil::StoredFailureInfo>::push_back(a1 + 72, v6) == 0;
    wil::details::shared_buffer::reset(&v7);
    if ( v5 )
      *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  tip::details::shared_data<0,0,0>::end_update(a1, v4);
}
