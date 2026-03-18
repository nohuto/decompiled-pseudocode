/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C0195A6C
 * Callers:
 *     RIMIsParallelDevice @ 0x1C0194800 (RIMIsParallelDevice.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMIsButtonCapsEqual @ 0x1C0194378 (RIMIsButtonCapsEqual.c)
 *     RIMIsValueCapsEqual @ 0x1C0194AFC (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0194F6C (RIMRetrieveAllLinkIndexUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        struct _HIDP_PREPARSED_DATA *a6)
{
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v14; // rbx
  unsigned __int16 v16[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v17; // [rsp+34h] [rbp-1Ch] BYREF
  void *v18; // [rsp+38h] [rbp-18h] BYREF
  void *v19; // [rsp+40h] [rbp-10h] BYREF

  v18 = 0LL;
  v16[0] = 0;
  v19 = 0LL;
  v17 = 0;
  v10 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v16, (char **)&v18, &v17, (char **)&v19) == 1114112 )
  {
    if ( !v16[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( !v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( !v17 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = (char *)v19;
    if ( !v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( v16[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, (__int64)v18, a2)
      && v17 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, (__int64)v14, a4) )
    {
      v10 = 1;
    }
    if ( v18 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v18);
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v14);
  }
  return v10;
}
