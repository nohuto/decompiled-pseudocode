/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C01BA1A0
 * Callers:
 *     RIMIsParallelDevice @ 0x1C01B8C44 (RIMIsParallelDevice.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsButtonCapsEqual @ 0x1C01B8728 (RIMIsButtonCapsEqual.c)
 *     RIMIsValueCapsEqual @ 0x1C01B8F44 (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C01B93B4 (RIMRetrieveAllLinkIndexUsages.c)
 */

__int64 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  unsigned int v10; // esi
  char *v11; // rbx
  _WORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v14; // [rsp+34h] [rbp-1Ch] BYREF
  int v15; // [rsp+38h] [rbp-18h]
  void *v16; // [rsp+40h] [rbp-10h] BYREF
  void *v17; // [rsp+48h] [rbp-8h] BYREF

  v16 = 0LL;
  v13[0] = 0;
  v17 = 0LL;
  v14 = 0;
  v10 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v13, (char **)&v16, &v14, (char **)&v17) == 1114112 )
  {
    if ( !v13[0] )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1817);
    }
    if ( !v16 )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1818);
    }
    if ( !v14 )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1819);
    }
    v11 = (char *)v17;
    if ( !v17 )
    {
      v15 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1820);
    }
    if ( v13[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, (__int64)v16, a2)
      && v14 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, (__int64)v11, a4) )
    {
      v10 = 1;
    }
    if ( v16 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v16);
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
  }
  return v10;
}
