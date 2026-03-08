/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0060888
 * Callers:
 *     NtUserGetIconInfo @ 0x1C0060FD0 (NtUserGetIconInfo.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C1D64 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0228128 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C003AB10 (GetCursorSizeFromIndex.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v6; // rsi
  unsigned int v7; // r15d
  INT v8; // r12d
  char v9; // al
  unsigned int v10; // eax
  __int64 Bitmap; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  const UNICODE_STRING *v16; // rdx
  unsigned int DpiForSystem; // eax
  int v19; // ecx
  INT CursorSizeFromIndex; // ebx
  struct tagCURSOR **v21; // rsi
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  int v25; // [rsp+70h] [rbp-E8h]
  __int64 v26; // [rsp+88h] [rbp-D0h]
  __int64 v27; // [rsp+90h] [rbp-C8h]

  v6 = a1;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v21 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v21 )
      return 0;
    v6 = *v21;
  }
  v7 = *((_DWORD *)v6 + 35);
  v8 = *((_DWORD *)v6 + 36);
  if ( *((_WORD *)v6 + 37) == 1 || (a1 = (struct tagCURSOR *)atomUSER32, v9 = 0, *((_WORD *)v6 + 36) == atomUSER32) )
    v9 = 1;
  if ( v9 )
  {
    DpiForSystem = GetDpiForSystem((__int64)a1);
    if ( DpiForSystem >= 0x90 )
    {
      if ( DpiForSystem >= 0xC0 )
      {
        if ( DpiForSystem >= 0x120 )
          v19 = 4 - (DpiForSystem < 0x180);
        else
          v19 = 2;
      }
      else
      {
        v19 = 1;
      }
    }
    else
    {
      v19 = 0;
    }
    CursorSizeFromIndex = GetCursorSizeFromIndex(v19);
    v7 = EngMulDiv(v7, CursorSizeFromIndex, *((_DWORD *)v6 + 19));
    v8 = EngMulDiv(v8, CursorSizeFromIndex, *((_DWORD *)v6 + 19));
  }
  v25 = *((_DWORD *)v6 + 35);
  if ( a6 || !*((_QWORD *)v6 + 12) )
    v10 = v8;
  else
    v10 = v8 / 2;
  Bitmap = GreCreateBitmap(v7, v10, 1LL, 1LL, 0LL);
  if ( !Bitmap )
    return 0;
  v12 = 0LL;
  if ( *((_QWORD *)v6 + 12) )
  {
    v13 = *((_DWORD *)v6 + 34) == 32
        ? GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 64LL), 0, 44, 0LL, 0, 0LL, 0, 0LL, 0LL)
        : GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 64LL), v7, v8 / 2, 0, 0LL, 0LL);
    v12 = v13;
    if ( !v13 )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v26 = GreSelectBitmap(ghdcMem2, *((_QWORD *)v6 + 11));
  v27 = GreSelectBitmap(ghdcMem, Bitmap);
  if ( v7 == v25 )
  {
    if ( a6 || !*((_QWORD *)v6 + 12) )
      v14 = v8;
    else
      v14 = v8 / 2;
    NtGdiBitBltInternal(ghdcMem, 0, 0, v7, v14, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    v22 = *((_QWORD *)v6 + 12);
    if ( !v22 || a6 )
      v23 = *((_DWORD *)v6 + 36);
    else
      v23 = *((_DWORD *)v6 + 36) >> 1;
    if ( !v22 || a6 )
      v24 = v8;
    else
      v24 = v8 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v7, v24, ghdcMem2, 0, 0, *((_DWORD *)v6 + 35), v23, 13369376, 0xFFFFFF, 0);
  }
  if ( v12 )
  {
    GreSelectBitmap(ghdcMem2, *((_QWORD *)v6 + 12));
    GreSelectBitmap(ghdcMem, v12);
    if ( v7 == v25 )
      NtGdiBitBltInternal(ghdcMem, 0, 0, v7, v8 / 2, ghdcMem2, 0, 0, 13369376, 0, 0);
    else
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v7,
        v8 / 2,
        ghdcMem2,
        0,
        0,
        *((_DWORD *)v6 + 35),
        *((_DWORD *)v6 + 36) >> 1,
        13369376,
        0,
        0);
  }
  GreSelectBitmap(ghdcMem2, v26);
  GreSelectBitmap(ghdcMem, v27);
  *(_DWORD *)a2 = *((_WORD *)v6 + 37) == 3;
  *((_DWORD *)a2 + 1) = EngMulDiv(*((__int16 *)v6 + 42), v7, *((_DWORD *)v6 + 35));
  *((_DWORD *)a2 + 2) = EngMulDiv(*((__int16 *)v6 + 43), v7, *((_DWORD *)v6 + 35));
  *((_QWORD *)a2 + 2) = Bitmap;
  *((_QWORD *)a2 + 3) = v12;
  if ( a3 )
  {
    v15 = *((unsigned __int16 *)v6 + 36);
    if ( (_WORD)v15 )
      a3->Length = UserGetAtomName(v15, a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( a4 )
  {
    v16 = (const UNICODE_STRING *)((char *)v6 + 56);
    if ( (*((_QWORD *)v6 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(a4, v16);
    else
      *a4 = *v16;
  }
  if ( a5 )
    *a5 = *((_DWORD *)v6 + 34);
  return 1;
}
