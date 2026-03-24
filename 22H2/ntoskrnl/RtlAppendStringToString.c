/*
 * XREFs of RtlAppendStringToString @ 0x14076D290
 * Callers:
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     MiFormFullImageName @ 0x1407CB1D8 (MiFormFullImageName.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x14087137C (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
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
