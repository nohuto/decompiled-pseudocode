/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140B48420
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  dword_140C316F0 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  *(_OWORD *)&ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  qword_140C316F8 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2648LL);
  return IoAddTriageDumpDataBlock((ULONG)&ExpBootEnvironmentInformation, (PVOID)0x20);
}
