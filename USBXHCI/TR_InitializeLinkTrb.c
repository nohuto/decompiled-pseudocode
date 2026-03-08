/*
 * XREFs of TR_InitializeLinkTrb @ 0x1C0007F3C
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C00062A0 (Control_Transfer_MapIntoRing.c)
 *     Bulk_InsertLinkTrb @ 0x1C00227FE (Bulk_InsertLinkTrb.c)
 *     Isoch_InsertLinkTrb @ 0x1C00445F4 (Isoch_InsertLinkTrb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_InitializeLinkTrb(__int64 a1, int a2, __int64 a3, char a4)
{
  int v4; // r10d
  int v5; // edx
  int v6; // eax
  __int64 result; // rax

  *(_OWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 12) = 6144;
  if ( a4 )
    v4 = 6145 - (*(_DWORD *)(a1 + 200) != 0);
  else
    v4 = *(_DWORD *)(a1 + 200) & 1 | 0x1800;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x800LL) != 0
    || !a4 && ((v5 = a2 - 5) == 0 || (unsigned int)(v5 - 1) <= 1) )
  {
    v4 |= 0x10u;
  }
  v6 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 12) = v4;
  result = v6 & 0x3FFFFF;
  *(_DWORD *)(a3 + 8) = result | (*(unsigned __int16 *)(a1 + 112) << 22);
  return result;
}
