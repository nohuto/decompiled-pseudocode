__int64 __fastcall _ShowWindowAsync(struct tagTHREADINFO **a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  return PostEventMessageEx(
           a1[2],
           *((struct tagQ **)a1[2] + 54),
           1u,
           (struct tagWND *)a1,
           a2,
           a4,
           a3 | (unsigned __int64)(gdwPUDFlags & 0x10000),
           0LL);
}
