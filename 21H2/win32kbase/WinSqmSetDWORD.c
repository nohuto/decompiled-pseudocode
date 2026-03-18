/*
 * XREFs of WinSqmSetDWORD @ 0x1C00B74E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00B7538 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 */

void __fastcall WinSqmSetDWORD(struct _GUID *a1, unsigned int a2, unsigned int a3)
{
  _WinSqmDWORDEvent(&SQM_SET_DWORD, a1, a2, a3);
}
