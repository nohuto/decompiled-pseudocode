struct _KEVENT *InitializeFeedbackData()
{
  struct _KEVENT *result; // rax

  result = (struct _KEVENT *)CreateKernelEvent(1LL);
  Feedback::gpevtPointerCursorOperation = result;
  return result;
}
