/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x14069CDA4
 * Callers:
 *     NtAllocateUuids @ 0x14069CBF0 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x14071FC80 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407CF714 (ExpUuidSaveSequenceNumber.c)
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
