char __fastcall bExtendGlyphSet(struct _FD_GLYPHSET **a1, struct _FD_GLYPHSET **a2)
{
  __int64 v2; // r14
  char v3; // bl
  __int64 v4; // rbp
  unsigned int v5; // r13d
  __int16 *v6; // rdi
  unsigned int v7; // edx
  _WORD *i; // r8
  ULONG v10; // r15d
  struct _FD_GLYPHSET *v11; // rsi
  unsigned int v12; // r11d
  __int64 v13; // r10
  __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned int v16; // edx
  __int16 v17; // r12
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  USHORT v20; // cx
  unsigned int v21; // eax
  int v22; // edx
  unsigned int v23; // r13d
  char *v24; // rdi
  WCRUN *awcrun; // r12
  __int64 v26; // r15
  WCHAR v27; // ax
  __int64 v28; // rax
  __int64 v29; // r15
  int v30; // r11d
  unsigned __int16 *v31; // r8
  __int64 v32; // r10
  unsigned int j; // r9d
  __int64 v34; // rcx
  char *v35; // rdi
  unsigned __int16 *v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rbp
  __int64 v39; // rax
  USHORT AnsiCodePage[2]; // [rsp+30h] [rbp-358h] BYREF
  USHORT OemCodePage; // [rsp+34h] [rbp-354h] BYREF
  struct _FD_GLYPHSET **v42; // [rsp+38h] [rbp-350h]
  char v43[256]; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int16 v44[256]; // [rsp+140h] [rbp-248h] BYREF

  v2 = (__int64)*a1;
  v3 = 0;
  AnsiCodePage[0] = 0;
  OemCodePage = 0;
  v42 = a2;
  v4 = *(unsigned int *)(v2 + 12);
  if ( !(_DWORD)v4 )
    return 0;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 > 0x100 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 16)
                        + *(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 18)
                        - 1) < 0xF020u
    || (v6 = (__int16 *)(v2 + 16), *(_WORD *)(v2 + 16) > 0xF0FFu) )
  {
    v6 = (__int16 *)(v2 + 16);
  }
  else
  {
    v7 = 0;
    if ( (_DWORD)v4 == 1 )
      return 0;
    for ( i = (_WORD *)(v2 + 16); ; i += 8 )
    {
      ++v7;
      if ( (unsigned __int16)(*i + i[1] - 1) < 0xF020u && *(_WORD *)(v2 + 16 * (v7 + 1LL)) > 0xF0FFu )
        break;
      if ( v7 >= (int)v4 - 1 )
        return 0;
    }
  }
  v10 = 4 * (v5 + 4 * v4 + 232);
  if ( v10 )
  {
    v11 = (struct _FD_GLYPHSET *)Win32AllocPoolZInit(v10, 1936484167LL);
    if ( v11 )
    {
      memset_0(v43, 0, sizeof(v43));
      v12 = 0;
      v13 = v4;
      v14 = v2 - (_QWORD)v6;
      do
      {
        v15 = *(unsigned __int16 *)((char *)v6 + v14 + 18);
        v16 = 0;
        if ( *(__int16 *)((char *)v6 + v14 + 18) )
        {
          v17 = *v6;
          do
          {
            v18 = v12;
            v19 = v16 + v17;
            ++v12;
            ++v16;
            v44[v18] = v19;
          }
          while ( v16 < v15 );
        }
        v6 += 8;
        --v13;
      }
      while ( v13 );
      RtlGetDefaultCodePage(AnsiCodePage, &OemCodePage);
      v20 = AnsiCodePage[0];
      v21 = AnsiCodePage[0];
      if ( (unsigned __int16)(AnsiCodePage[0] - 932) <= 0x12u )
      {
        v22 = 393233;
        LOWORD(v21) = AnsiCodePage[0] - 932;
        if ( _bittest(&v22, v21) )
        {
          v20 = 1252;
          AnsiCodePage[0] = 1252;
        }
      }
      if ( (unsigned int)ConvertToAndFromWideChar(v20, v44, 2 * v5, v43, 0x100u, 0) == -1 )
      {
        Win32FreePool(v11);
        return 0;
      }
      v11->cjThis = v10;
      v11->flAccel = *(_DWORD *)(v2 + 4) | 0x10;
      v11->cGlyphsSupported = v5 + 224;
      v23 = 0;
      v11->cRuns = v4 + 1;
      v24 = (char *)&v11->awcrun[(unsigned int)(v4 + 1)];
      awcrun = v11->awcrun;
      v26 = v2 - (_QWORD)v11;
      do
      {
        v27 = *(WCHAR *)((char *)&awcrun->wcLow + v26);
        if ( v27 >= 0xF020u )
          break;
        awcrun->wcLow = v27;
        awcrun->cGlyphs = *(USHORT *)((char *)&awcrun->cGlyphs + v26);
        awcrun->phg = (HGLYPH *)v24;
        memmove(
          v24,
          *(const void **)((char *)&awcrun->phg + v26),
          4LL * *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v26));
        v28 = *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v26);
        ++v23;
        ++awcrun;
        v24 += 4 * v28;
      }
      while ( v23 < (unsigned int)v4 );
      v29 = v23;
      *(_DWORD *)&v11->awcrun[v29].wcLow = 14741536;
      v11->awcrun[v29].phg = (HGLYPH *)v24;
      memset_0(v24, 0, 0x380uLL);
      v30 = 0;
      v31 = (unsigned __int16 *)(v2 + 18);
      v32 = v4;
      do
      {
        for ( j = 0; j < *v31; ++j )
        {
          v34 = (unsigned __int8)v43[v30];
          if ( (unsigned __int8)v34 >= 0x20u )
            *(_DWORD *)&v24[4 * v34 - 128] = *(_DWORD *)(*(_QWORD *)(v31 + 3) + 4LL * j);
          ++v30;
        }
        v31 += 8;
        --v32;
      }
      while ( v32 );
      v35 = v24 + 896;
      if ( v23 < (unsigned int)v4 )
      {
        v36 = (unsigned __int16 *)(v29 * 16 + v2 + 18);
        v37 = (__int64)&v11[1].cjThis + 16 * v23 + 2;
        v38 = (unsigned int)v4 - v23;
        do
        {
          *(_WORD *)(v37 - 2) = *(v36 - 1);
          *(_WORD *)v37 = *v36;
          *(_QWORD *)(v37 + 6) = v35;
          memmove(v35, *(const void **)(v36 + 3), 4LL * *v36);
          v39 = *v36;
          v37 += 16LL;
          v36 += 8;
          v35 += 4 * v39;
          --v38;
        }
        while ( v38 );
      }
      v3 = 1;
      *v42 = v11;
    }
  }
  return v3;
}
