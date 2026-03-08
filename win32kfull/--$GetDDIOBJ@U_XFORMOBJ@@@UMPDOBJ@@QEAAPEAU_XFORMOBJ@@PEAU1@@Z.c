/*
 * XREFs of ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02C94F8
 * Callers:
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CDA40 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CDD70 (NtGdiEngStrokePath.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02CFEE0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02D00A0 (NtGdiXFORMOBJ_iGetXform.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 == *(_QWORD *)(a1 + 280) )
  {
    result = *(_QWORD *)(a1 + 272);
  }
  else if ( a2 == *(_QWORD *)(a1 + 296) )
  {
    result = *(_QWORD *)(a1 + 288);
  }
  else
  {
    result = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && result && result < (unsigned __int64)MmSystemRangeStart )
    return 0LL;
  return result;
}
