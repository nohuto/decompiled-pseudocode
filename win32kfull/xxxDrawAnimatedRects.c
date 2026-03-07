__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  struct tagRECT v6; // xmm0
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // rcx
  __int64 *DCEx; // r14
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v17; // rax
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v20; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a3;
  v19 = 0LL;
  v6 = *a4;
  v20 = v5;
  v21 = v6;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  v8 = *((_QWORD *)a1 + 13);
  if ( !v8 || v8 == GetDesktopWindow(*((_QWORD *)a1 + 13)) )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    v19 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v17 = GreCreateRectRgnIndirect(&v19);
    if ( !v17 )
      v17 = 1LL;
    DCEx = (__int64 *)_GetDCEx(ThreadDesktopWindow, v17, 1155LL);
  }
  else
  {
    v9 = _GetDCEx(v8, 1LL, 65665LL);
    v10 = *(_DWORD **)(v8 + 40);
    DCEx = (__int64 *)v9;
    v12 = v10[26];
    v13 = v10[22];
    v14 = v10[27];
    v15 = v10[23];
    do
    {
      *(&v20.left + 2 * v7) += v12 - v13;
      *(&v20.top + 2 * v7++) += v14 - v15;
    }
    while ( v7 < 4 );
  }
  xxxAnimateCaption(a1, DCEx, &v20, &v21);
  _ReleaseDC(DCEx);
  return 1LL;
}
