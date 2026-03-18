/*
 * XREFs of WinSqmAddToAverageDWORD @ 0x1C0167670
 * Callers:
 *     <none>
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00B7538 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 */

void __fastcall WinSqmAddToAverageDWORD(struct _GUID *a1, int a2, int a3)
{
  _WinSqmDWORDEvent(&SQM_ADDTOAVERAGE_DWORD, a1, a2, a3);
}
