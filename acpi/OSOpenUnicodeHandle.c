/*
 * XREFs of OSOpenUnicodeHandle @ 0x1C008E3DC
 * Callers:
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 *     OSOpenLargestSubkey @ 0x1C008DFE0 (OSOpenLargestSubkey.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00958FC (ACPIThermalGetOverrideHandle.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AA2F4 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1C00AC2A4 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C00AC39C (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  int v3; // edx
  NTSTATUS v4; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v4 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      11,
      13,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
