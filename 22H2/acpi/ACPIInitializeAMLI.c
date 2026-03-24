/*
 * XREFs of ACPIInitializeAMLI @ 0x1C00BCC5C
 * Callers:
 *     ACPIInitialize @ 0x1C00BED6C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     OSReadRegValue @ 0x1C0097444 (OSReadRegValue.c)
 *     ACPIInitGlobalHeapSize @ 0x1C00977FC (ACPIInitGlobalHeapSize.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BC3BC (OSReadAcpiConfigurationData.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     OSInitializeCallbacks @ 0x1C00BF128 (OSInitializeCallbacks.c)
 */

__int64 ACPIInitializeAMLI()
{
  int v0; // edi
  int v1; // ebx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  int v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 4;
  if ( (int)OSReadRegValue("AMLIInitFlags", 0LL, &gAMLIInitFlags, &v7) < 0 )
    gAMLIInitFlags = 0;
  v7 = 4;
  if ( (int)OSReadRegValue("AMLIMaxCTObjs", 0LL, &AMLIMaxCTObjs, &v7) < 0 )
    AMLIMaxCTObjs = 0;
  v0 = ACPIInitGlobalHeapSize();
  v1 = OSReadAcpiConfigurationData(&v8);
  if ( v1 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v1;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x24u,
        (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
        v6);
    }
  }
  else
  {
    E820Info = (ULONG_PTR)v8 + 44;
    OSInitializeCallbacks();
    return (unsigned int)AMLIInitialize(v2, v0, v3, v4);
  }
  return (unsigned int)v1;
}
