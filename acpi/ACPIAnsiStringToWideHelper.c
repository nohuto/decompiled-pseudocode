/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C00438EC
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00298A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0029D20 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C002A12C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002A404 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C002A650 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C002A974 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C002AA64 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetProcessorIDWide @ 0x1C002ABD0 (ACPIGetProcessorIDWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C830 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}
