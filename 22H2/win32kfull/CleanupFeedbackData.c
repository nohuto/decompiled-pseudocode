/*
 * XREFs of CleanupFeedbackData @ 0x1C0137110
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
