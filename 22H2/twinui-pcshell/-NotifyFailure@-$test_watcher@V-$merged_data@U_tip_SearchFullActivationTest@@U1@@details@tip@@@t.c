/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A8050
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB8B0 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC118 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800ADA9C (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1801A8B84 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 */

char __fastcall tip::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::NotifyFailure(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // rdi
  bool v4; // bl
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF
  volatile signed __int32 *v7; // [rsp+B0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int8)tip::details::shared_data<1,0,0>::begin_update(v2 + 8) )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v4 = (unsigned __int8)tip::vector_nothrow<wil::StoredFailureInfo>::push_back(v2 + 80, v6) == 0;
    wil::details::shared_buffer::reset(&v7);
    if ( v4 )
      *(_DWORD *)(v2 + 72) |= 0x100000u;
  }
  tip::details::shared_data<1,0,0>::end_update(v2 + 8);
  return 0;
}
