/*
 * XREFs of ??1?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180152A04
 * Callers:
 *     ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180152DD4 (--1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18015F0D0 (-reset@-$shared_object@V-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsP_ea_18015F0D0.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801D64CC (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18020E540 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = TaskbarLogging::Provider();
    _tlgWriteActivityAutoStop<70368744177664,5>(v2, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
