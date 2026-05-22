/*
 * XREFs of ?StaticNodesChangeIdTimerCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180165130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::StaticNodesChangeIdTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        PTP_TIMER Timer)
{
  Windows::Internal::Holographic::SpatialGraphDriverClient::InvokePropertiesUpdatedCallback(Context, 2u);
}
