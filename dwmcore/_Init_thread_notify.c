int Init_thread_notify()
{
  if ( qword_1803E26C8 )
    return qword_1803E26C8(&unk_1803E2688);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
