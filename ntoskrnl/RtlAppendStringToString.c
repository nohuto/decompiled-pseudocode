/*
 * XREFs of RtlAppendStringToString @ 0x14078E880
 * Callers:
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x140851A5C (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140A18034 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)v4 + Length <= (unsigned int)Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
