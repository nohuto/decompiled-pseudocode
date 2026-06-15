/*
 * XREFs of ?GetCharacteristics@CCrossProcessBaseClientEndpoint@@UEAAJPEAK@Z @ 0x140060500
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061E18 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetCharacteristics(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = 1;
  }
  else
  {
    v2 = -2147467261;
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetCharacteristics", 0x4FFu, -2147467261);
  }
  return v2;
}
