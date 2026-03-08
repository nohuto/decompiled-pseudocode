/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C002BBFC
 * Callers:
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C002A290 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C002E7A8 (UpdateSprite.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     GetRedirectionBitmap @ 0x1C0043F00 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C0096CD0 (GetRedirectionFlags.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(__int64 a1, int a2, char a3, int a4)
{
  bool v8; // r14
  int v9; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // esi
  unsigned int updated; // edi
  __int64 v15; // rax
  _DWORD *v16; // r8
  __int64 v17; // rbx
  __int16 v18; // [rsp+60h] [rbp+7h] BYREF
  char v19; // [rsp+62h] [rbp+9h]
  char v20; // [rsp+63h] [rbp+Ah]
  _DWORD v21[2]; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v23; // [rsp+78h] [rbp+1Fh] BYREF

  v8 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *(_DWORD *)(a1 + 320);
    if ( (v9 & 0x8000) != 0 )
      *(_DWORD *)(a1 + 320) = v9 & 0xFFFF7FFF;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow((struct tagWND *)a1);
    if ( (int)result < 0 )
      return result;
    v8 = RedirectionBitmap == 0;
  }
  v18 = 0;
  v13 = a4 & 0xDFFFFFEF | 0x20000000;
  v20 = 0;
  v19 = a3;
  if ( RedirectionBitmap )
  {
    v21[0] = 0;
    v21[1] = 0;
    v23 = 0LL;
    v15 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    v16 = *(_DWORD **)(a1 + 40);
    v17 = v15;
    v22[0] = v16[24] - v16[22];
    v22[1] = v16[25] - v16[23];
    updated = UpdateSprite(
                *(_QWORD *)(gpDispInfo + 40LL),
                a1,
                ghdcMem,
                0LL,
                0LL,
                v22,
                ghdcMem,
                v21,
                a2,
                &v18,
                v13,
                (unsigned __int64)&v23 & -(__int64)v8);
    GreSelectBitmap(ghdcMem, v17);
  }
  else
  {
    return (unsigned int)UpdateSprite(
                           *(_QWORD *)(gpDispInfo + 40LL),
                           a1,
                           v12,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v18,
                           v13,
                           0LL);
  }
  return updated;
}
