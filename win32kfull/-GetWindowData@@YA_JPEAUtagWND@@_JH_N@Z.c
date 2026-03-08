/*
 * XREFs of ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x1C01CD150
 * Callers:
 *     NtUserfnGETWINDOWDATA @ 0x1C01E1840 (NtUserfnGETWINDOWDATA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowData(struct tagWND *a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v4 = *((_QWORD *)a1 + 5);
  v5 = 0LL;
  v7 = a3 - *(_DWORD *)(v4 + 248);
  if ( v7 < 0 )
    return v5;
  if ( (*(_DWORD *)(v4 + 232) & 0x10) != 0 )
    v8 = *(_QWORD *)(v4 + 296) + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL);
  else
    v8 = *(_QWORD *)(v4 + 296);
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v5;
      v10 = *(unsigned int *)(v4 + 200);
      v11 = (unsigned int)v7;
      if ( !a4 )
      {
        if ( (unsigned __int64)(unsigned int)v7 + 8 <= v10 )
          return *(_QWORD *)(v7 + v8);
        return v5;
      }
    }
    else
    {
      v10 = *(unsigned int *)(v4 + 200);
      v11 = (unsigned int)v7;
    }
    if ( v11 + 4 <= v10 )
      return *(unsigned int *)(v7 + v8);
  }
  else if ( (unsigned __int64)(unsigned int)v7 + 2 <= *(unsigned int *)(v4 + 200) )
  {
    return *(unsigned __int16 *)(v7 + v8);
  }
  return v5;
}
