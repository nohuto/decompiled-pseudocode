/*
 * XREFs of MiReadFromMemoryPagefile @ 0x14065E368
 * Callers:
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiPfExecuteReadList @ 0x1406A3F98 (MiPfExecuteReadList.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiTransferMemoryPagefileData @ 0x14065E4C8 (MiTransferMemoryPagefileData.c)
 */

LONG __fastcall MiReadFromMemoryPagefile(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  MiTransferMemoryPagefileData(a1, a2 + 272, *(_QWORD *)(a2 + 96) >> 12, 1LL);
  v3 = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 88) = v3;
  return KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
}
