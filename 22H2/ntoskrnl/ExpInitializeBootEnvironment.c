/*
 * XREFs of ExpInitializeBootEnvironment @ 0x140B6DD60
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403AC964 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall ExpInitializeBootEnvironment(__int64 a1)
{
  dword_140C31AF0 = ((*(_BYTE *)(a1 + 264) & 1) != 0) + 1;
  *(_OWORD *)&ExpBootEnvironmentInformation = *(_OWORD *)(*(_QWORD *)(a1 + 240) + 256LL);
  qword_140C31AF8 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2648LL);
  return IoAddTriageDumpDataBlock((ULONG)&ExpBootEnvironmentInformation, (PVOID)0x20);
}
