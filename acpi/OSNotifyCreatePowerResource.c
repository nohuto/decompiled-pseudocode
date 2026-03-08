/*
 * XREFs of OSNotifyCreatePowerResource @ 0x1C0032A14
 * Callers:
 *     OSNotifyCreate @ 0x1C00325E0 (OSNotifyCreate.c)
 * Callees:
 *     ACPIBuildPowerResourceExtension @ 0x1C000DFDC (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C000E0EC (ACPIBuildPowerResourceRequest.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(volatile signed __int32 *a1)
{
  char v1; // di
  int v2; // edx
  int v3; // ebx
  int v4; // r9d
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = (char)a1;
  v3 = ACPIBuildPowerResourceExtension(a1, &v6);
  if ( v3 >= 0 )
  {
    v1 = v6;
    v3 = ACPIBuildPowerResourceRequest(v6);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 16;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 15;
LABEL_7:
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      v4,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      v1,
      v3);
  }
  return (unsigned int)v3;
}
