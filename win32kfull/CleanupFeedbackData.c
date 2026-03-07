void CleanupFeedbackData()
{
  if ( Feedback::gpevtPointerCursorOperation )
  {
    Win32FreePool(Feedback::gpevtPointerCursorOperation);
    Feedback::gpevtPointerCursorOperation = 0LL;
  }
}
