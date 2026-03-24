/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C0181FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 14, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
}
