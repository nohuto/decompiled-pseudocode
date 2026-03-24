/*
 * XREFs of ACPIEvaluateOscMethodOnRootBus @ 0x1C00B4F44
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 * Callees:
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIEvaluateOscMethodOnRootBus(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 *v3; // rcx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+64h] [rbp+1Ch]

  v6 = a2;
  v7 = AcpiRootFeaturesSupported;
  v3 = *(__int64 **)(RootDeviceExtension + 720);
  v5 = SB_OSC_UUID;
  return ACPIAmliEvaluateOsc(v3, (__int64)&v5, a3, 2u, &v6);
}
