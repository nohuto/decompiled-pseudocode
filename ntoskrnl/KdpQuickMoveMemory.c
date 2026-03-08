/*
 * XREFs of KdpQuickMoveMemory @ 0x140AAE918
 * Callers:
 *     KdpGetContextEx @ 0x140391F24 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x140392008 (KdpSetContextEx.c)
 *     KdpCopyContext @ 0x140AAD658 (KdpCopyContext.c)
 *     KdpReportExceptionStateChange @ 0x140AAE63C (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140AB1644 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140AB2368 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB24E8 (KdpPrompt.c)
 * Callees:
 *     <none>
 */

char __fastcall KdpQuickMoveMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
