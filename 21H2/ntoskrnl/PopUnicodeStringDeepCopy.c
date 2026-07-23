/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x140671F50
 * Callers:
 *     PoGetRequester @ 0x1402719A4 (PoGetRequester.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlGetPowerRequestKey @ 0x1406706C4 (PopAvlGetPowerRequestKey.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407726E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1402AB600 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        POOL_TYPE PoolType,
        ULONG Tag)
{
  PVOID *p_Buffer; // rbx
  unsigned int v5; // ebp
  PVOID PoolWithTag; // r14
  NTSTATUS result; // eax

  p_Buffer = (PVOID *)&DestinationString->Buffer;
  v5 = SourceString->Length + 2;
  if ( v5 > 0xFFFF )
  {
    if ( *p_Buffer )
      goto LABEL_7;
    v5 = 0xFFFF;
  }
  if ( !*p_Buffer || DestinationString->MaximumLength < v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PoolType, v5, Tag);
    if ( PoolWithTag )
    {
      if ( *p_Buffer )
        ExFreePoolWithTag(*p_Buffer, 0);
      *p_Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v5;
    }
  }
LABEL_7:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    *((_WORD *)*p_Buffer + ((unsigned __int64)DestinationString->Length >> 1)) = 0;
  return result;
}
