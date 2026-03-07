__int64 __fastcall EditionPostUpdateKeyStateEvent(struct tagTHREADINFO **a1, unsigned __int64 a2)
{
  return PostEventMessageEx(a1[13], (struct tagQ *)a1, 4u, 0LL, 0, a2, 0LL, 0LL);
}
