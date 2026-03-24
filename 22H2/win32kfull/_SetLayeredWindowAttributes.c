/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C00BD1E8
 * Callers:
 *     ComposeWindow @ 0x1C003531C (ComposeWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C00BBD10 (NtUserSetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C00EEE28 (UnsetLayeredWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     SetRedirectedWindow @ 0x1C00BCE5C (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C00BE6C4 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C00BEBC0 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C00F20E0 (GetRedirectionFlags.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, BYTE a3, int a4)
{
  bool v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  unsigned int v15; // esi
  unsigned int updated; // edi
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // rbx
  struct _BLENDFUNCTION v20; // [rsp+60h] [rbp+7h] BYREF
  struct tagPOINT v21; // [rsp+68h] [rbp+Fh] BYREF
  struct tagSIZE v22; // [rsp+70h] [rbp+17h] BYREF
  __int128 v23; // [rsp+78h] [rbp+1Fh] BYREF

  v8 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v11 = *((_QWORD *)a1 + 5);
    v12 = *(_DWORD *)(v11 + 232);
    if ( (v12 & 0x40) != 0 )
      *(_DWORD *)(v11 + 232) = v12 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL, v9, v10);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1u);
    if ( (int)result < 0 )
      return result;
    v8 = RedirectionBitmap == 0;
  }
  *(_WORD *)&v20.BlendOp = 0;
  v15 = a4 & 0xDFFFFFEF | 0x20000000;
  v20.AlphaFormat = 0;
  v20.SourceConstantAlpha = a3;
  if ( RedirectionBitmap )
  {
    v21.x = 0;
    v21.y = 0;
    v23 = 0LL;
    v17 = GreSelectBitmap(*(_QWORD *)ghdcMem, RedirectionBitmap);
    v18 = (_DWORD *)*((_QWORD *)a1 + 5);
    v19 = v17;
    v22.cx = v18[24] - v18[22];
    v22.cy = v18[25] - v18[23];
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 40LL),
                a1,
                0LL,
                &v22,
                *(HDC *)ghdcMem,
                &v21,
                a2,
                &v20,
                v15,
                (struct tagRECT *)((unsigned __int64)&v23 & -(__int64)v8));
    GreSelectBitmap(*(_QWORD *)ghdcMem, v19);
  }
  else
  {
    return (unsigned int)UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, 0LL, 0LL, 0LL, a2, &v20, v15, 0LL);
  }
  return updated;
}
