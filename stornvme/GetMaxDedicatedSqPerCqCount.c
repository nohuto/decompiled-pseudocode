/*
 * XREFs of GetMaxDedicatedSqPerCqCount @ 0x1C0009CF4
 * Callers:
 *     IoQueuesInitialize @ 0x1C000B04C (IoQueuesInitialize.c)
 *     NVMeCleanUpSqCqMapping @ 0x1C000C4EC (NVMeCleanUpSqCqMapping.c)
 *     NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x1C000C96C (NVMeCompletionQueuesDedicatedSubmissionQueuesInit.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall GetMaxDedicatedSqPerCqCount(unsigned __int16 *a1)
{
  int v1; // edx
  __int16 result; // ax
  int v3; // r8d

  v1 = a1[168];
  result = 0;
  v3 = a1[121];
  if ( (unsigned __int16)v1 > (unsigned __int16)v3 )
    return (v1 - v3 - 1) / a1[169] + 1;
  return result;
}
