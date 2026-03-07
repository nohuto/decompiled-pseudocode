__int64 __fastcall ACPIEvaluateOscMethodOnRootBus(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+64h] [rbp+1Ch]

  v6 = a2;
  v7 = AcpiRootFeaturesSupported;
  v3 = *(_QWORD **)(RootDeviceExtension + 760);
  v5 = SB_OSC_UUID;
  result = ACPIAmliEvaluateOsc(v3, (__int64)&v5, a3, 2u, &v6);
  if ( (int)result >= 0 )
    AcpiRootFeaturesSupported = v7;
  return result;
}
