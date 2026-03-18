/*
 * XREFs of KdpQuickMoveMemory @ 0x140AB2880
 * Callers:
 *     KdpGetContextEx @ 0x140393BA4 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x140393C88 (KdpSetContextEx.c)
 *     KdpCopyContext @ 0x140AB15FC (KdpCopyContext.c)
 *     KdpReportExceptionStateChange @ 0x140AB25A4 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140AB5634 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140AB6358 (KdpPrint.c)
 *     KdpPrompt @ 0x140AB64D8 (KdpPrompt.c)
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
