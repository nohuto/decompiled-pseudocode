void __fastcall UserDisableImeForThread(struct tagTHREADINFO *a1, char a2)
{
  unsigned __int64 *v2; // rax

  *((_DWORD *)a1 + 122) |= 0x2000000u;
  v2 = (unsigned __int64 *)*((_QWORD *)a1 + 98);
  if ( v2 )
  {
    if ( a2 )
      xxxDestroyWindow(*((__int64 **)a1 + 98));
    else
      PostEventMessageEx(a1, *((struct tagQ **)a1 + 54), 8u, 0LL, 0, *v2, 0LL, 0LL);
  }
}
