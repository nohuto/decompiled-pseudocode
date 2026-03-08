/*
 * XREFs of MiQueryPfn @ 0x1402A4110
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 */

char __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int PfnPriority; // eax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  char result; // al

  v2 = 48 * a1 - 0x220000000000LL;
  if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(48 * a1 - 0x220000000000LL) )
    *(_QWORD *)(a2 + 8) |= 0x80000000uLL;
  PfnPriority = MiGetPfnPriority(v2);
  *(_QWORD *)(v4 + 8) ^= (*(_DWORD *)(v4 + 8) ^ (PfnPriority << 24)) & 0x7000000;
  result = *(_BYTE *)(v6 + 34) & 7;
  if ( result == 3 )
    v5 = 0x8000000LL;
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFF77FFFFFuLL | v5 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
