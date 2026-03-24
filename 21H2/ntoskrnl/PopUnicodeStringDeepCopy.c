/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x1406C1BA0
 * Callers:
 *     PoGetRequester @ 0x140283794 (PoGetRequester.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14062B9E4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlGetPowerRequestKey @ 0x14062BAEC (PopAvlGetPowerRequestKey.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x140772520 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140206CD0 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
