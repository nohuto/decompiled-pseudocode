/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140538BF4
 * Callers:
 *     IoWriteCrashDump @ 0x140502950 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14050488C (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140340478 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC128 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x1405381AC (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C2A41C = 0;
  *(_QWORD *)&MiTriageDumpData = qword_140C51D80;
  dword_140C2A408 = dword_140C4E7D4;
  dword_140C2A40C = dword_140C4E7D0;
  dword_140C2A410 = dword_140C4E7D8;
  dword_140C2A414 = dword_140C4E7DC;
  dword_140C2A418 = dword_140C4E7C8;
  qword_140C2A420 = KeFeatureBits;
  xmmword_140C2A428 = 0LL;
  LODWORD(xmmword_140C2A428) = MEMORY[0xFFFFF78000000240];
  DWORD1(xmmword_140C2A428) = MiFlags;
  HvlQueryVsmConnection((_QWORD *)&xmmword_140C2A428 + 1);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = &IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*(unsigned __int16 *)v5 + a1));
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x38);
}
