/*
 * XREFs of ACPIEnableInitializeACPI @ 0x1C00368F0
 * Callers:
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 * Callees:
 *     ACPIGpeClearRegisters @ 0x1C002C240 (ACPIGpeClearRegisters.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C002C29C (ACPIGpeEnableDisableEvents.c)
 *     ACPIEnableEnterACPIMode @ 0x1C0036798 (ACPIEnableEnterACPIMode.c)
 *     CLEAR_PM1_STATUS_REGISTER @ 0x1C0038C14 (CLEAR_PM1_STATUS_REGISTER.c)
 *     READ_PM1_CONTROL @ 0x1C0038D00 (READ_PM1_CONTROL.c)
 *     READ_PM1_STATUS @ 0x1C0038E70 (READ_PM1_STATUS.c)
 *     WRITE_PM1_CONTROL @ 0x1C0038F24 (WRITE_PM1_CONTROL.c)
 *     WRITE_PM1_ENABLE @ 0x1C0039094 (WRITE_PM1_ENABLE.c)
 */

void *__fastcall ACPIEnableInitializeACPI(__int64 a1, __int64 a2)
{
  void *result; // rax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  __int64 v8; // rdx

  result = AcpiInformation;
  v3 = a1;
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    if ( (READ_PM1_CONTROL(a1, a2) & 1) != 0 )
    {
      if ( (_DWORD)AcpiKsrContext == 1481917259 )
        *((_BYTE *)AcpiInformation + 84) = BYTE8(AcpiKsrContext) & 1;
    }
    else
    {
      *((_BYTE *)AcpiInformation + 84) = 0;
      ACPIEnableEnterACPIMode(v3);
    }
    CLEAR_PM1_STATUS_REGISTER();
    if ( (READ_PM1_STATUS() & 0xFBEF) != 0 )
    {
      CLEAR_PM1_STATUS_REGISTER();
      READ_PM1_STATUS();
    }
    WRITE_PM1_ENABLE(*((unsigned __int16 *)AcpiInformation + 56));
    if ( v3 )
    {
      ACPIGpeClearRegisters();
      ACPIGpeEnableDisableEvents(1, v6);
    }
    v7 = READ_PM1_CONTROL(v5, v4);
    LOBYTE(v8) = 1;
    return (void *)WRITE_PM1_CONTROL(v7 & 0xDFFD, v8);
  }
  return result;
}
