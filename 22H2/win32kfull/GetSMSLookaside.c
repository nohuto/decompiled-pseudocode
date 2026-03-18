/*
 * XREFs of GetSMSLookaside @ 0x1C00BEBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PAGED_LOOKASIDE_LIST **__fastcall GetSMSLookaside(_QWORD *a1)
{
  struct _PAGED_LOOKASIDE_LIST **result; // rax

  result = &SMSLookaside;
  *a1 = &SMSLookaside;
  return result;
}
