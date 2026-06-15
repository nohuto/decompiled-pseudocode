/*
 * XREFs of WPP_SF_DDD @ 0x140044670
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x1400013B8 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400043C0 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004590 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140019770 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14004A550 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DDD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
