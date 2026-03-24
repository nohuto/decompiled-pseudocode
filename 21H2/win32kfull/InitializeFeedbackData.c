/*
 * XREFs of InitializeFeedbackData @ 0x1C01375D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KEVENT *InitializeFeedbackData()
{
  struct _KEVENT *result; // rax

  result = (struct _KEVENT *)CreateKernelEvent(1LL);
  Feedback::gpevtPointerCursorOperation = result;
  return result;
}
