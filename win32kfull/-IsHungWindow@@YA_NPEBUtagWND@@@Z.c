bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHungTimeCheck(a1[2], gdwHungAppTimeout) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
