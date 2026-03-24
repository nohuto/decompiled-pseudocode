/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x1406A44F0
 * Callers:
 *     PoGetRequester @ 0x14034C7C4 (PoGetRequester.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406F5C6C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlGetPowerRequestKey @ 0x1406F5D74 (PopAvlGetPowerRequestKey.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407721E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140206C90 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
