/*
 * XREFs of MiInsertVmAccessedEntry @ 0x140463768
 * Callers:
 *     MiResetAccessBitPte @ 0x140325D60 (MiResetAccessBitPte.c)
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 *     MiTrimPte @ 0x140349060 (MiTrimPte.c)
 *     MiUpdateOldPte @ 0x140463D20 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x140632C70 (MiSimpleAgePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertVmAccessedEntry(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a1;
  if ( (_DWORD)v2 == a1[1] )
    return 1LL;
  *(_QWORD *)&a1[2 * v2 + 2] = a2 & 0xFFFFFFFFFFFFF000uLL;
  result = 0LL;
  ++*a1;
  return result;
}
