/*
 * XREFs of RtlAppendStringToString @ 0x14076DD80
 * Callers:
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x1407CB428 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x14087148C (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140A4628C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
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
