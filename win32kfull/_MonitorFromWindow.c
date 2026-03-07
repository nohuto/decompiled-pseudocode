struct tagMONITOR *__fastcall MonitorFromWindow(struct tagWND *a1, unsigned int a2)
{
  return _MonitorFromWindowInternal(a1, a2, 0);
}
