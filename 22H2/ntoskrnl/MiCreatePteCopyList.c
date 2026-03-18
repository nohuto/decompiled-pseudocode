/*
 * XREFs of MiCreatePteCopyList @ 0x140360260
 * Callers:
 *     MiGetPteMappingSet @ 0x1402840D0 (MiGetPteMappingSet.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned int a1, __int64 a2)
{
  ULONG_PTR v4; // rax
  __int64 result; // rax

  *(_WORD *)(a2 + 8) = 17;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = MiReservePtes((__int64)&qword_140C69A40, a1);
  *(_QWORD *)(a2 + 16) = v4;
  result = v4 != 0 ? a1 : 0;
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
