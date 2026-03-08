/*
 * XREFs of PopDispatchCallout @ 0x140861820
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403B127C (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
