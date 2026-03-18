/*
 * XREFs of RtlAppendStringToString @ 0x1407DD6F0
 * Callers:
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x14085588C (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140A1AD84 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
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
