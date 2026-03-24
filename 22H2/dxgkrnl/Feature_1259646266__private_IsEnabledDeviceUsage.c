/*
 * XREFs of Feature_1259646266__private_IsEnabledDeviceUsage @ 0x1C0027DDC
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028B750 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C02B3360 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     Feature_1259646266__private_IsEnabledFallback @ 0x1C0027E14 (Feature_1259646266__private_IsEnabledFallback.c)
 */

__int64 Feature_1259646266__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1259646266__private_featureState & 0x10) != 0 )
    return Feature_1259646266__private_featureState & 1;
  else
    return Feature_1259646266__private_IsEnabledFallback((unsigned int)Feature_1259646266__private_featureState, 3LL);
}
