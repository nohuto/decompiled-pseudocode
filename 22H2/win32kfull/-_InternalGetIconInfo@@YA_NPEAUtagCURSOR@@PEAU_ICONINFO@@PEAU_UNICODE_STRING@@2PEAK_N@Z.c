/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80
 * Callers:
 *     NtUserGetIconInfo @ 0x1C002BFF0 (NtUserGetIconInfo.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C0C04 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0225430 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C0027404 (GetCursorSizeFromIndex.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
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
  HDC v13; // rcx
  __int64 DIBitmapReal; // rax
  int v15; // eax
  __int64 v16; // rcx
  const UNICODE_STRING *v17; // rdx
  unsigned int DpiForSystem; // eax
  int v20; // ecx
  INT CursorSizeFromIndex; // ebx
  struct tagCURSOR **v22; // rsi
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  int v26; // [rsp+70h] [rbp-E8h]
  __int64 v27; // [rsp+88h] [rbp-D0h]
  __int64 v28; // [rsp+90h] [rbp-C8h]
  __int64 v32[3]; // [rsp+B8h] [rbp-A0h] BYREF
  __int16 v33; // [rsp+D0h] [rbp-88h]
  unsigned int v34[3]; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+ECh] [rbp-6Ch]
  int v36; // [rsp+F4h] [rbp-64h]
  __int64 v37; // [rsp+F8h] [rbp-60h]
  int v38; // [rsp+100h] [rbp-58h]
  __int64 v39; // [rsp+104h] [rbp-54h]

  v6 = a1;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v22 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v22 )
      return 0;
    v6 = *v22;
  }
  v7 = *((_DWORD *)v6 + 35);
  v8 = *((_DWORD *)v6 + 36);
  if ( *((_WORD *)v6 + 37) == 1 || (a1 = (struct tagCURSOR *)atomUSER32, v9 = 0, *((_WORD *)v6 + 36) == atomUSER32) )
    v9 = 1;
  if ( v9 )
  {
    DpiForSystem = GetDpiForSystem(a1, a2);
    if ( DpiForSystem >= 0x90 )
    {
      if ( DpiForSystem >= 0xC0 )
      {
        if ( DpiForSystem >= 0x120 )
          v20 = 4 - (DpiForSystem < 0x180);
        else
          v20 = 2;
      }
      else
      {
        v20 = 1;
      }
    }
    else
    {
      v20 = 0;
    }
    CursorSizeFromIndex = GetCursorSizeFromIndex(v20);
    v7 = EngMulDiv(v7, CursorSizeFromIndex, *((_DWORD *)v6 + 19));
    v8 = EngMulDiv(v8, CursorSizeFromIndex, *((_DWORD *)v6 + 19));
  }
  v26 = *((_DWORD *)v6 + 35);
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
    if ( *((_DWORD *)v6 + 34) == 32 )
    {
      v37 = 0LL;
      v39 = 0LL;
      v34[0] = 40;
      v34[1] = v7;
      v34[2] = v8 / 2;
      v35 = 2097153LL;
      v36 = 0;
      v38 = 0;
      v13 = *(HDC *)(gpDispInfo + 64LL);
      memset(v32, 0, sizeof(v32));
      v33 = 0;
      DIBitmapReal = GreCreateDIBitmapReal(v13, 0, v32, v34, 0, 0x2Cu, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 64LL), v7, v8 / 2, 0, 0LL, 0LL);
    }
    v12 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v27 = GreSelectBitmap(ghdcMem2, *((_QWORD *)v6 + 11));
  v28 = GreSelectBitmap(ghdcMem, Bitmap);
  if ( v7 == v26 )
  {
    if ( a6 || !*((_QWORD *)v6 + 12) )
      v15 = v8;
    else
      v15 = v8 / 2;
    NtGdiBitBltInternal(ghdcMem, 0, 0, v7, v15, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    v23 = *((_QWORD *)v6 + 12);
    if ( !v23 || a6 )
      v24 = *((_DWORD *)v6 + 36);
    else
      v24 = *((_DWORD *)v6 + 36) >> 1;
    if ( !v23 || a6 )
      v25 = v8;
    else
      v25 = v8 / 2;
    GreStretchBltInternal(ghdcMem, v25, ghdcMem2, 0, 0, *((_DWORD *)v6 + 35), v24, 13369376, 0xFFFFFF, 0);
  }
  if ( v12 )
  {
    GreSelectBitmap(ghdcMem2, *((_QWORD *)v6 + 12));
    GreSelectBitmap(ghdcMem, v12);
    if ( v7 == v26 )
      NtGdiBitBltInternal(ghdcMem, 0, 0, v7, v8 / 2, ghdcMem2, 0, 0, 13369376, 0, 0);
    else
      GreStretchBltInternal(
        ghdcMem,
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
  GreSelectBitmap(ghdcMem2, v27);
  GreSelectBitmap(ghdcMem, v28);
  *(_DWORD *)a2 = *((_WORD *)v6 + 37) == 3;
  *((_DWORD *)a2 + 1) = EngMulDiv(*((__int16 *)v6 + 42), v7, *((_DWORD *)v6 + 35));
  *((_DWORD *)a2 + 2) = EngMulDiv(*((__int16 *)v6 + 43), v7, *((_DWORD *)v6 + 35));
  *((_QWORD *)a2 + 2) = Bitmap;
  *((_QWORD *)a2 + 3) = v12;
  if ( a3 )
  {
    v16 = *((unsigned __int16 *)v6 + 36);
    if ( (_WORD)v16 )
      a3->Length = UserGetAtomName(v16, a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( a4 )
  {
    v17 = (const UNICODE_STRING *)((char *)v6 + 56);
    if ( (*((_QWORD *)v6 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(a4, v17);
    else
      *a4 = *v17;
  }
  if ( a5 )
    *a5 = *((_DWORD *)v6 + 34);
  return 1;
}
