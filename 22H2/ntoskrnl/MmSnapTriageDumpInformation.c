/*
 * XREFs of MmSnapTriageDumpInformation @ 0x14063081C
 * Callers:
 *     IoWriteCrashDump @ 0x1405513A0 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x140552390 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140553F38 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14033FE98 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x14062F8D4 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C1317C = 0;
  qword_140C13198 = 0LL;
  *(_QWORD *)&MiTriageDumpData = qword_140C6CF40;
  dword_140C13168 = dword_140C68068;
  dword_140C1316C = dword_140C68064;
  dword_140C13170 = dword_140C68090;
  dword_140C13174 = dword_140C68094;
  qword_140C13180 = KeFeatureBits;
  xmmword_140C13188 = 0LL;
  dword_140C13178 = dword_140C68048 + dword_140C6804C + dword_140C68050;
  LODWORD(xmmword_140C13188) = MEMORY[0xFFFFF78000000240];
  *(_QWORD *)((char *)&xmmword_140C13188 + 4) = MiFlags;
  HvlQueryVsmConnection(&qword_140C13198);
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
