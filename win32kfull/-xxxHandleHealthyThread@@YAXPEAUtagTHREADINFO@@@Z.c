void __fastcall xxxHandleHealthyThread(struct tagTHREADINFO *a1)
{
  int i; // eax
  __int64 v3; // rbx
  struct tagTHREADINFO **v4; // rsi

  for ( i = *((_DWORD *)a1 + 122); i < 0; i = *((_DWORD *)a1 + 122) )
  {
    *((_DWORD *)a1 + 122) = i & 0x7FFFFFFF;
    v3 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v3 + gSharedInfo[1] + 24) == 1 )
      {
        v4 = *(struct tagTHREADINFO ***)(gpKernelHandleTable + 24 * v3);
        if ( v4[2] == a1 )
        {
          if ( IsWindowGhosted(*(const struct tagWND **)(gpKernelHandleTable + 24 * v3)) )
            xxxHandleHealthyWindow((struct tagWND *)v4);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 <= giheLast );
  }
}
