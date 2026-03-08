/*
 * XREFs of MmSnapTriageDumpInformation @ 0x14062E39C
 * Callers:
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x14054FEF0 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140551A98 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x14062D454 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C1305C = 0;
  qword_140C13078 = 0LL;
  *(_QWORD *)&MiTriageDumpData = qword_140C6CB00;
  dword_140C13048 = dword_140C67BE8;
  dword_140C1304C = dword_140C67BE4;
  dword_140C13050 = dword_140C67C10;
  dword_140C13054 = dword_140C67C14;
  qword_140C13060 = KeFeatureBits;
  xmmword_140C13068 = 0LL;
  dword_140C13058 = dword_140C67BC8 + dword_140C67BCC + dword_140C67BD0;
  LODWORD(xmmword_140C13068) = MEMORY[0xFFFFF78000000240];
  *(_QWORD *)((char *)&xmmword_140C13068 + 4) = MiFlags;
  HvlQueryVsmConnection(&qword_140C13078);
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
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x40);
}
