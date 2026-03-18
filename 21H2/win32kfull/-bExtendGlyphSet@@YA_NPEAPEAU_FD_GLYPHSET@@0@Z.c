/*
 * XREFs of ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B9ED0
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C000B310 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BA244 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00E7F50 (ConvertToAndFromWideChar.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

char __fastcall bExtendGlyphSet(struct _FD_GLYPHSET **a1, struct _FD_GLYPHSET **a2)
{
  __int64 v2; // r14
  char v3; // bl
  __int64 v4; // rbp
  unsigned int v5; // r15d
  _WORD *v6; // rdx
  unsigned int v7; // r8d
  ULONG v9; // edi
  struct _FD_GLYPHSET *v10; // rsi
  unsigned int v11; // r12d
  __int16 *v12; // rdx
  __int64 v13; // r11
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  __int16 v16; // r13
  __int64 v17; // rax
  WCHAR v18; // cx
  USHORT v19; // cx
  unsigned int v20; // eax
  int v21; // edx
  unsigned int v22; // r13d
  char *v23; // rdi
  WCRUN *awcrun; // r12
  __int64 v25; // r15
  WCHAR v26; // ax
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // r11d
  unsigned __int16 *v30; // r8
  __int64 v31; // r10
  unsigned int i; // r9d
  __int64 v33; // rcx
  char *v34; // rdi
  unsigned __int16 *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rbp
  __int64 v38; // rax
  USHORT AnsiCodePage[2]; // [rsp+30h] [rbp-358h] BYREF
  USHORT OemCodePage; // [rsp+34h] [rbp-354h] BYREF
  struct _FD_GLYPHSET **v41; // [rsp+38h] [rbp-350h]
  CHAR v42[256]; // [rsp+40h] [rbp-348h] BYREF
  WCHAR v43[256]; // [rsp+140h] [rbp-248h] BYREF

  v2 = (__int64)*a1;
  v3 = 0;
  AnsiCodePage[0] = 0;
  OemCodePage = 0;
  v41 = a2;
  v4 = *(unsigned int *)(v2 + 12);
  if ( !(_DWORD)v4 )
    return 0;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 > 0x100 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 16)
                        + *(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 18)
                        - 1) >= 0xF020u )
  {
    v6 = (_WORD *)(v2 + 16);
    if ( *(_WORD *)(v2 + 16) <= 0xF0FFu )
    {
      v7 = 0;
      if ( (_DWORD)v4 == 1 )
        return 0;
      while ( (unsigned __int16)(*v6 + v6[1] - 1) >= 0xF020u || *(_WORD *)(v2 + 16 * (v7 + 1 + 1LL)) <= 0xF0FFu )
      {
        ++v7;
        v6 += 8;
        if ( v7 >= (int)v4 - 1 )
          return 0;
      }
    }
  }
  v9 = 4 * (v5 + 4 * (v4 + 58));
  if ( v9 )
  {
    v10 = (struct _FD_GLYPHSET *)Win32AllocPoolZInit(v9, 1936484167LL);
    if ( v10 )
    {
      memset(v42, 0, sizeof(v42));
      v11 = 0;
      v12 = (__int16 *)(v2 + 16);
      v13 = v4;
      do
      {
        v14 = (unsigned __int16)v12[1];
        v15 = 0;
        if ( v12[1] )
        {
          v16 = *v12;
          do
          {
            v17 = v11;
            v18 = v15 + v16;
            ++v11;
            ++v15;
            v43[v17] = v18;
          }
          while ( v15 < v14 );
        }
        v12 += 8;
        --v13;
      }
      while ( v13 );
      RtlGetDefaultCodePage(AnsiCodePage, &OemCodePage);
      v19 = AnsiCodePage[0];
      v20 = AnsiCodePage[0];
      if ( (unsigned __int16)(AnsiCodePage[0] - 932) <= 0x12u )
      {
        v21 = 393233;
        LOWORD(v20) = AnsiCodePage[0] - 932;
        if ( _bittest(&v21, v20) )
        {
          v19 = 1252;
          AnsiCodePage[0] = 1252;
        }
      }
      if ( (unsigned int)ConvertToAndFromWideChar(v19, v43, 2 * v5, v42, 0x100u, 0) == -1 )
      {
        Win32FreePool(v10);
        return 0;
      }
      v10->cjThis = v9;
      v10->flAccel = *(_DWORD *)(v2 + 4) | 0x10;
      v10->cGlyphsSupported = v5 + 224;
      v10->cRuns = v4 + 1;
      v22 = 0;
      v23 = (char *)&v10->awcrun[(unsigned int)(v4 + 1)];
      awcrun = v10->awcrun;
      v25 = v2 - (_QWORD)v10;
      do
      {
        v26 = *(WCHAR *)((char *)&awcrun->wcLow + v25);
        if ( v26 >= 0xF020u )
          break;
        awcrun->wcLow = v26;
        awcrun->cGlyphs = *(USHORT *)((char *)&awcrun->cGlyphs + v25);
        awcrun->phg = (HGLYPH *)v23;
        memmove(
          v23,
          *(const void **)((char *)&awcrun->phg + v25),
          4LL * *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v25));
        v27 = *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v25);
        ++v22;
        ++awcrun;
        v23 += 4 * v27;
      }
      while ( v22 < (unsigned int)v4 );
      v28 = v22;
      *(_DWORD *)&v10->awcrun[v28].wcLow = 14741536;
      v10->awcrun[v28].phg = (HGLYPH *)v23;
      memset(v23, 0, 0x380uLL);
      v29 = 0;
      v30 = (unsigned __int16 *)(v2 + 18);
      v31 = v4;
      do
      {
        for ( i = 0; i < *v30; ++i )
        {
          v33 = (unsigned __int8)v42[v29];
          if ( (unsigned __int8)v33 >= 0x20u )
            *(_DWORD *)&v23[4 * v33 - 128] = *(_DWORD *)(*(_QWORD *)(v30 + 3) + 4LL * i);
          ++v29;
        }
        v30 += 8;
        --v31;
      }
      while ( v31 );
      v34 = v23 + 896;
      if ( v22 < (unsigned int)v4 )
      {
        v35 = (unsigned __int16 *)(v28 * 16 + v2 + 18);
        v36 = (__int64)&v10[1].cjThis + 16 * v22 + 2;
        v37 = (unsigned int)v4 - v22;
        do
        {
          *(_WORD *)(v36 - 2) = *(v35 - 1);
          *(_WORD *)v36 = *v35;
          *(_QWORD *)(v36 + 6) = v34;
          memmove(v34, *(const void **)(v35 + 3), 4LL * *v35);
          v38 = *v35;
          v36 += 16LL;
          v35 += 8;
          v34 += 4 * v38;
          --v37;
        }
        while ( v37 );
      }
      v3 = 1;
      *v41 = v10;
    }
  }
  return v3;
}
