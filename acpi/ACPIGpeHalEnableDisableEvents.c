/*
 * XREFs of ACPIGpeHalEnableDisableEvents @ 0x1C002C300
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C002C29C (ACPIGpeEnableDisableEvents.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0038A4C (ACPIReadGpeStatusRegister.c)
 *     READ_PM1_STATUS @ 0x1C0038E70 (READ_PM1_STATUS.c)
 */

void *__fastcall ACPIGpeHalEnableDisableEvents(char a1)
{
  void *result; // rax
  __int64 v2; // rbx
  __int64 v4; // rdx
  PVOID v5; // rcx

  result = AcpiInformation;
  v2 = 0LL;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( a1 )
    {
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        do
        {
          *((_BYTE *)GpeSavedWakeStatus + v2) = ACPIReadGpeStatusRegister((unsigned int)v2);
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *((unsigned __int16 *)AcpiInformation + 51) );
      }
      *((_WORD *)AcpiInformation + 58) = READ_PM1_STATUS();
      AcpiPowerSavedGpeBitsValid = 1;
    }
    else
    {
      v5 = GpeSavedWakeMask;
      *((_WORD *)AcpiInformation + 57) = 0;
      memset(v5, 0, *((unsigned __int16 *)AcpiInformation + 51));
    }
    return ACPIGpeEnableDisableEvents(a1, v4);
  }
  return result;
}
