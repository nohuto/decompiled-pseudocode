/*
 * XREFs of KsepStringTransform @ 0x140801918
 * Callers:
 *     KsepDbQueryRegistryDeviceData @ 0x14080187C (KsepDbQueryRegistryDeviceData.c)
 *     KseSetDeviceFlags @ 0x140973B40 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140973D58 (KsepDbQueryRegistryDeviceDataList.c)
 * Callees:
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepStringTransform(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  unsigned __int16 i; // ax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( !a1 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 197405;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("TargetString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x31Du, 0LL);
  }
  if ( !a2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 197406;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("SourceString != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x31Eu, 0LL);
  }
  result = KsepStringDuplicate(a1, a2);
  if ( (int)result >= 0 )
  {
    for ( i = *(_WORD *)a1 & 0xFFFE; v2 < i; i = *(_WORD *)a1 >> 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_WORD *)(v7 + 2LL * v2) == 92 )
        *(_WORD *)(v7 + 2LL * v2) = 33;
      ++v2;
    }
    return 0LL;
  }
  return result;
}
