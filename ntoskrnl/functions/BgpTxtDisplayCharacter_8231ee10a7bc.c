__int64 __fastcall BgpTxtDisplayCharacter(__int64 a1, __int64 a2, char a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v6; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  unsigned int *v10; // r8
  _DWORD *v11; // r12
  char v12; // r15
  int v13; // edi
  int v14; // r13d
  char v15; // r14
  __int64 CacheEntry; // rax
  __int64 result; // rax
  __int64 v18; // r14
  int v19; // ecx
  int v20; // eax
  unsigned int BitsPerPixel; // eax
  __int64 v22; // r10
  int v23; // eax
  int v24; // [rsp+58h] [rbp-51h]
  __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  int v26; // [rsp+68h] [rbp-41h] BYREF
  __int64 v27; // [rsp+70h] [rbp-39h]
  int v28; // [rsp+78h] [rbp-31h]
  int v29; // [rsp+7Ch] [rbp-2Dh]
  _DWORD *v30; // [rsp+80h] [rbp-29h] BYREF
  __int64 v31; // [rsp+88h] [rbp-21h] BYREF
  _DWORD *v32; // [rsp+90h] [rbp-19h] BYREF
  __int64 v33; // [rsp+98h] [rbp-11h]
  __int64 v34; // [rsp+A0h] [rbp-9h]
  unsigned __int16 v36; // [rsp+100h] [rbp+57h]
  char v40; // [rsp+120h] [rbp+77h]

  v36 = a2;
  v6 = 0LL;
  v34 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  v8 = 0LL;
  v31 = 0LL;
  v9 = *(_DWORD **)(a1 + 32);
  v10 = (unsigned int *)(a1 + 40);
  v11 = 0LL;
  v12 = *(_BYTE *)(a1 + 60) & 1;
  v24 = 0;
  v25 = 0LL;
  v13 = 0;
  v28 = 0;
  v14 = 0;
  v29 = 0;
  v32 = 0LL;
  v40 = 0;
  v26 = 0;
  v15 = v12;
  v27 = 0LL;
  v30 = 0LL;
  v33 = a1 + 40;
  if ( (unsigned __int16)a2 < 0x20u )
    goto LABEL_12;
  if ( v12 )
  {
    CacheEntry = TxtpGetCacheEntry(&TxtpTextCache, a2, v10, 0LL);
    v27 = CacheEntry;
    if ( CacheEntry )
    {
      v6 = *(_DWORD **)(CacheEntry + 48);
      v15 = 0;
      goto LABEL_5;
    }
  }
  BgpGxFillRectangle(v9, *v10);
  v18 = v33;
  v29 = v9[1];
  v28 = *v9;
  v20 = BgpRasPrintGlyph(v19, v33, v36, v25, HIDWORD(v25), 1, (__int64)&v26);
  v13 = v20;
  if ( v20 < 0 )
  {
    DbgPrintEx(0x65u, 0, "BGFX internal font error %x char %x!\n", v20, v36);
    v14 = v26;
    v7 = 0;
    v15 = v12;
    goto LABEL_11;
  }
  v14 = v26;
  if ( !v12 )
  {
    result = BgpFoGetTextMetrics(v18, &v31);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v24 = HIDWORD(v31);
    *v9 = HIDWORD(v31);
    v9[1] = v14;
    v40 = 1;
  }
  if ( v34 )
  {
    TxtpJustifyRectangle(a1, a1 + 8, &v25);
    v23 = BgpGxBlendRectangle(v22, v9, &v25, &v30);
    v6 = v30;
    v13 = v23;
    v15 = v12;
    if ( v23 < 0 )
      goto LABEL_10;
  }
  else
  {
    v6 = v9;
  }
  v15 = v12;
  if ( !v12 )
    goto LABEL_5;
  BitsPerPixel = BgpGetBitsPerPixel();
  if ( v6 != v9 && BitsPerPixel == v6[2] )
  {
    v11 = v6;
LABEL_5:
    HIDWORD(v25) = *(_DWORD *)(a1 + 4);
    LODWORD(v25) = *(_DWORD *)a1 + v25;
    if ( (a3 & 1) != 0 || (dword_140C0E3B0 & 0x1000000) != 0 || (v13 = BgpGxDrawRectangle(v6, &v25), v13 >= 0) )
    {
      if ( v15 )
        v13 = TxtpAddCacheEntry(&TxtpTextCache, v36, v33, v11);
    }
    goto LABEL_10;
  }
  v13 = BgpGxConvertRectangleEx(v6, BitsPerPixel, &v32, 0LL);
  if ( v13 >= 0 )
  {
    if ( v6 != v9 )
      BgpGxRectangleDestroy(v6);
    v11 = v32;
    v6 = v32;
    goto LABEL_5;
  }
LABEL_10:
  v7 = v24;
LABEL_11:
  v8 = v27;
LABEL_12:
  if ( a4 )
    *a4 = v14;
  if ( a5 )
    *a5 = v7;
  if ( v6 != v9 && !v8 && (!v15 || v13 < 0) && v6 )
    BgpGxRectangleDestroy(v6);
  if ( v40 )
  {
    *v9 = v28;
    v9[1] = v29;
  }
  return (unsigned int)v13;
}
