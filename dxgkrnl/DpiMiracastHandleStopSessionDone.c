/*
 * XREFs of DpiMiracastHandleStopSessionDone @ 0x1C039AF44
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C039B7B8 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C005F36C (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastHandleStopSessionDone(char *P, __int64 a2, __int64 a3)
{
  DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 0, a3);
  if ( *(int *)(a2 + 4) >= 0 )
    *((_DWORD *)P + 169) = *(_DWORD *)(a2 + 24);
  else
    WdLogSingleEntry1(2LL, *(int *)(a2 + 4));
  DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) == 0 ? 0x80 : 0, 0);
}
