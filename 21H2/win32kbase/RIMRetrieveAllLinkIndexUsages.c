/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C015F66C
 * Callers:
 *     RIMIsParallelDevice @ 0x1C015F010 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C015FDC8 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01635C4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163618 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 *a4,
        unsigned __int16 *a5,
        __int64 *a6)
{
  unsigned int SpecificValueCaps; // ebx
  unsigned __int16 v11; // ax
  void *v12; // rax
  int v13; // edx
  int v14; // r9d
  unsigned __int16 v15; // ax
  void *v16; // rax

  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1663);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1664);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a1, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1676);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v11 = *a3;
  if ( !*a3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1679);
    v11 = *a3;
  }
  v12 = Win32AllocPoolZInit(72LL * v11, 1668707154LL);
  *a4 = (__int64)v12;
  if ( !v12 )
    goto LABEL_24;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a1, 0, (__int64)v12, (__int64)a3, a2);
  if ( SpecificValueCaps != 1114112 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v14 = 27;
    goto LABEL_23;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, a1, 0, 0LL, (__int64)a5, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1706);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v15 = *a5;
  if ( !*a5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1709);
    v15 = *a5;
  }
  v16 = Win32AllocPoolZInit(72LL * v15, 1668707154LL);
  *a6 = (__int64)v16;
  if ( v16 )
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, a1, 0, (__int64)v16, (__int64)a5, a2);
    if ( SpecificValueCaps == 1114112 )
      return SpecificValueCaps;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 28;
LABEL_23:
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, v14, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  else
  {
LABEL_24:
    SpecificValueCaps = -1073741801;
  }
LABEL_25:
  if ( SpecificValueCaps != 1114112 )
  {
    if ( *a4 )
    {
      Win32FreePool(*a4);
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool(*a6);
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
