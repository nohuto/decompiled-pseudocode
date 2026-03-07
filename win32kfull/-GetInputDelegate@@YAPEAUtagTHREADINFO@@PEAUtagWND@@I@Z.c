struct tagTHREADINFO *__fastcall GetInputDelegate(struct tagWND *a1, int a2)
{
  __int64 v2; // r8
  int v4; // eax

  v2 = 0LL;
  if ( a1 )
  {
    if ( (a2 & 0x1000) != 0 )
    {
      v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1336LL);
      if ( v2 )
      {
        if ( (*(_DWORD *)(v2 + 488) & 1) == 0 )
          return (struct tagTHREADINFO *)v2;
        v2 = 0LL;
      }
    }
    v4 = *((_DWORD *)a1 + 65);
    if ( v4 && (v4 & a2) != 0 )
      return (struct tagTHREADINFO *)*((_QWORD *)a1 + 33);
  }
  return (struct tagTHREADINFO *)v2;
}
