/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406F6ECC
 * Callers:
 *     NtAllocateUuids @ 0x14067EB00 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x1406F7EF0 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x14085B300 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
