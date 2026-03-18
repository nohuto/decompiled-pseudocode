/*
 * XREFs of Feature_856993082__private_IsEnabledDeviceUsage @ 0x1C0026424
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C034BA20 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0366080 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 * Callees:
 *     Feature_856993082__private_IsEnabledFallback @ 0x1C002645C (Feature_856993082__private_IsEnabledFallback.c)
 */

__int64 Feature_856993082__private_IsEnabledDeviceUsage()
{
  if ( (Feature_856993082__private_featureState & 0x10) != 0 )
    return Feature_856993082__private_featureState & 1;
  else
    return Feature_856993082__private_IsEnabledFallback((unsigned int)Feature_856993082__private_featureState, 3LL);
}
