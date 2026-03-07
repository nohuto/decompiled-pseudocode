__int64 __fastcall xxxDesktopWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)a1 + 13) )
  {
    v6 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 40);
      if ( v7 )
      {
        v4 = *(_QWORD *)(v7 + 56);
        v8 = *(_DWORD *)(v4 + 32);
        if ( v8 >= 0x20 )
          return 0LL;
        v5 = 1;
        *(_DWORD *)(v4 + 32) = v8 + 1;
      }
    }
  }
  result = xxxDesktopWndProcWorker(a1, a2, a3, a4);
  if ( v5 )
    --*(_DWORD *)(v4 + 32);
  return result;
}
