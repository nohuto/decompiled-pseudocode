/*
 * XREFs of ??1?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BAC1C
 * Callers:
 *     ??1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ @ 0x1800BAE28 (--1ShowFlyoutActivity@MeetNowTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetNowTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800BE940 (-reset@-$shared_object@V-$ActivityData@VMeetNowTelemetryLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BD564 (-Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801D667C (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<MeetNowTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetNowTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MeetNowTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = MeetNowTelemetryLogging::Provider();
    _tlgWriteActivityAutoStop<70368744177664,5>(v2, a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
