/*
 * XREFs of MiCreatePteCopyList @ 0x1402F54C0
 * Callers:
 *     MiGetPteMappingSet @ 0x14032E050 (MiGetPteMappingSet.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned int a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  *(_WORD *)(a2 + 8) = 17;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = MiReservePtes(&qword_140C695C0, a1);
  *(_QWORD *)(a2 + 16) = v4;
  result = v4 != 0 ? a1 : 0;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
