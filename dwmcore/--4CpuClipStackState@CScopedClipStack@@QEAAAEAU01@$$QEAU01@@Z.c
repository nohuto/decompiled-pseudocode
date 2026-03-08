/*
 * XREFs of ??4CpuClipStackState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801CFDC0
 * Callers:
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801CFA2C (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801D75F0 (--$move_backward@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CScopedClipStack::CpuClipStackState::operator=(__int64 a1, __int64 *a2)
{
  char v2; // di
  __int64 v4; // rbx

  v2 = *((_BYTE *)a2 + 8);
  v4 = *a2;
  CShapePtr::Release((CShapePtr *)a1);
  *(_QWORD *)a1 = v4;
  *(_BYTE *)(a1 + 8) = v2;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_QWORD *)(a1 + 24) = a2[3];
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_BYTE *)(a1 + 36) = *((_BYTE *)a2 + 36);
  return a1;
}
