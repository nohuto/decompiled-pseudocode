bool __fastcall PostEventMessageWindow(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  return (unsigned int)PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 54), a2, (struct tagWND *)a1, 0, a3, a4, 0LL) != 0;
}
