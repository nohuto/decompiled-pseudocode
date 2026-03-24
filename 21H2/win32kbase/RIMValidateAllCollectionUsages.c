/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C015FDC8
 * Callers:
 *     RIMIsParallelDevice @ 0x1C015F010 (RIMIsParallelDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsButtonCapsEqual @ 0x1C015ED08 (RIMIsButtonCapsEqual.c)
 *     RIMIsValueCapsEqual @ 0x1C015F2D8 (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C015F66C (RIMRetrieveAllLinkIndexUsages.c)
 */

__int64 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  unsigned __int16 v12[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v13; // [rsp+34h] [rbp-1Ch] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  v15 = 0LL;
  v12[0] = 0;
  v16 = 0LL;
  v13 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v12, &v15, &v13, &v16) == 1114112 )
  {
    if ( !v12[0] )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1854);
    }
    if ( !v15 )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1855);
    }
    if ( !v13 )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1856);
    }
    if ( !v16 )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1857);
    }
    if ( v12[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, v15, a2)
      && v13 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, v16, a4) )
    {
      v6 = 1;
    }
    Win32FreePool(v15);
    Win32FreePool(v16);
  }
  return v6;
}
