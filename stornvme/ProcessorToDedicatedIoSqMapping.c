/*
 * XREFs of ProcessorToDedicatedIoSqMapping @ 0x1C0010C00
 * Callers:
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x1C000F870 (NVMeInitializeProcessorIoQueueMapping.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x1C0010C84 (ProcessorToIoSqMappingBase.c)
 */

__int64 __fastcall ProcessorToDedicatedIoSqMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int16 v4; // bp
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = (unsigned int)a2;
  v4 = a3;
  ProcessorToIoSqMappingBase(a1, a2, a3, 1LL);
  result = *(_QWORD *)(a1 + 272);
  if ( !*(_QWORD *)(result + 72 * v3 + 64) )
  {
    if ( !*(_QWORD *)(result + 72 * v3 + 56) )
      ProcessorToIoSqMappingBase(a1, (unsigned int)v3, v4, 0LL);
    v7 = *(_QWORD *)(a1 + 272);
    result = *(_QWORD *)(v7 + 72 * v3 + 56);
    *(_QWORD *)(v7 + 72 * v3 + 64) = result;
  }
  return result;
}
