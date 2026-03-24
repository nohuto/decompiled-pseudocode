/*
 * XREFs of ACPIInterruptInitialize @ 0x1C0097F74
 * Callers:
 *     ACPIInitialize @ 0x1C00BED6C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1C00BD980 (OSInterruptVector.c)
 */

__int64 __fastcall ACPIInterruptInitialize(ULONG_PTR a1)
{
  int v1; // ebx

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    return 0;
  }
  else
  {
    v1 = OSInterruptVector(a1);
    if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x27u,
        (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids);
  }
  return (unsigned int)v1;
}
