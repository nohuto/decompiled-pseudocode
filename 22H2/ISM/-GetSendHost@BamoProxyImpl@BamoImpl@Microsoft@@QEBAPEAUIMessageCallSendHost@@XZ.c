/*
 * XREFs of ?GetSendHost@BamoProxyImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180040A60
 * Callers:
 *     ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18000A8B0 (-UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x18010C260 (-UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct IMessageCallSendHost *__fastcall Microsoft::BamoImpl::BamoProxyImpl::GetSendHost(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this)
{
  return Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(this[2]);
}
