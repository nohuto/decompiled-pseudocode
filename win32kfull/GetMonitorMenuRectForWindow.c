struct tagRECT *__fastcall GetMonitorMenuRectForWindow(struct tagRECT *retstr, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  const struct tagMONITOR *v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorMenuRectForDpi(retstr, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return retstr;
}
