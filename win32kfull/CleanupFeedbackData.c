/*
 * XREFs of CleanupFeedbackData @ 0x1C00F64A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CleanupFeedbackData()
{
  if ( Feedback::gpevtPointerCursorOperation )
  {
    Win32FreePool(Feedback::gpevtPointerCursorOperation);
    Feedback::gpevtPointerCursorOperation = 0LL;
  }
}
