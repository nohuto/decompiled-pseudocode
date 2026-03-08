/*
 * XREFs of ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C021A3B0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::OriginIdToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Unavailable";
  v1 = a1 - 1;
  if ( !v1 )
    return "Hardware";
  v2 = v1 - 1;
  if ( !v2 )
    return "Injected";
  if ( v2 == 2 )
    return "System";
  return "UNKNOWN";
}
