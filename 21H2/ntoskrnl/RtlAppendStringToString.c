/*
 * XREFs of RtlAppendStringToString @ 0x1406E24E0
 * Callers:
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x140858690 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140917E18 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140B0B630 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
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
