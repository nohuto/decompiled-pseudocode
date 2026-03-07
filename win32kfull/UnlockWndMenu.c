struct tagWND **__fastcall UnlockWndMenu(struct tagWND *a1)
{
  return UnlockWndMenuWorker(a1, 0);
}
