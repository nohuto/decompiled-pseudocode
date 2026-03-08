/*
 * XREFs of NVMeInitializeProcessorIoQueueMapping @ 0x1C000F870
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 * Callees:
 *     ProcessorToDedicatedIoSqMapping @ 0x1C0010C00 (ProcessorToDedicatedIoSqMapping.c)
 *     ProcessorToIoSqMappingBase @ 0x1C0010C84 (ProcessorToIoSqMappingBase.c)
 */

__int64 __fastcall NVMeInitializeProcessorIoQueueMapping(__int64 a1)
{
  unsigned int i; // esi
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_WORD *)(a1 + 280) )
    return 1LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 242); ++i )
  {
    v4 = 0;
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * i), &v4)
      && (*(_WORD *)(a1 + 280) == 1 || v4) )
    {
      ProcessorToIoSqMappingBase(a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * i), (unsigned __int16)v4, 0LL);
      ProcessorToDedicatedIoSqMapping(a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * i), (unsigned __int16)v4);
    }
  }
  return 0LL;
}
