void __fastcall GetKeyEventInputSource(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // di
  int v5; // ebx
  __int16 v7; // bp
  int v8; // r14d

  v4 = 0;
  v5 = 1;
  *a4 = 1;
  v7 = a2;
  v8 = a1;
  if ( (_WORD)a2 != 0xFFFD )
  {
    if ( a3 )
    {
      v4 = *(_DWORD *)(a3 + 8) != 0;
    }
    else if ( UIPrivelegeIsolation::fEnforce && (a1 = *((_QWORD *)gptiCurrent + 53), *(int *)(a1 + 12) < 0)
           || (PVOID)PsGetCurrentProcess(a1, a2, 0LL, a4) == gpepCSRSS )
    {
      v4 = 1;
    }
  }
  if ( v8 )
  {
    if ( !v4 )
    {
      v5 = 4;
      if ( v7 != -3 )
        v5 = 2;
    }
  }
  a4[1] = v5;
}
