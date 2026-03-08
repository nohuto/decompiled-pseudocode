/*
 * XREFs of _GetKeyNameText @ 0x1C00114E0
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00115C4 (wcsncpycch.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C0081970 (InternalMapVirtualKeyEx.c)
 */

__int64 __fastcall GetKeyNameText(unsigned int a1, _WORD *a2, int a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  char v13; // cl
  unsigned int v14; // eax
  int v15; // eax
  _WORD **v16; // rcx
  _WORD *v17; // rdx

  v5 = a1;
  v6 = (unsigned __int64)a1 >> 16;
  v7 = PtiCurrentShared();
  if ( a3 < 1 )
    return 0LL;
  if ( (v5 & 0x2000000) != 0 )
  {
    v13 = v6;
    if ( (_BYTE)v6 == 54 )
      v13 = 42;
    LOBYTE(v6) = v13;
    if ( (v5 & 0x1000000) != 0 && (v13 == 29 || v13 == 56) )
      v5 &= ~0x1000000u;
    v5 &= ~0x2000000u;
  }
  v8 = *((_QWORD *)v7 + 55);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD **)(*(_QWORD *)(v8 + 48) + 32LL);
  if ( (v5 & 0x1000000) != 0 )
    v10 = v9[4];
  else
    v10 = v9[3];
  if ( v10 )
  {
    while ( *(_BYTE *)v10 )
    {
      if ( (_BYTE)v6 == *(_BYTE *)v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          result = (unsigned int)wcsncpycch(a2, v11, (unsigned int)a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
      }
      v10 += 16LL;
    }
  }
  v14 = InternalMapVirtualKeyEx((unsigned __int8)v6, 1LL, v9);
  if ( !v14 )
    return 0LL;
  v15 = InternalMapVirtualKeyEx(v14, 2LL, v9);
  if ( !v15 )
    return 0LL;
  if ( v15 < 0 )
  {
    v16 = (_WORD **)v9[5];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !*v16 )
          break;
        if ( *v17 == (_WORD)v15 )
        {
          result = (unsigned int)wcsncpycch(a2, v17 + 1, (unsigned int)a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
        ++v16;
      }
    }
  }
  *a2 = v15;
  if ( a3 >= 2 )
    a2[1] = 0;
  return 1LL;
}
