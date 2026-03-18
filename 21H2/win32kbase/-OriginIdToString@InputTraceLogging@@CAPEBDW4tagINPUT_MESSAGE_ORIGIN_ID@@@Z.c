/*
 * XREFs of ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01E9884
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
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
