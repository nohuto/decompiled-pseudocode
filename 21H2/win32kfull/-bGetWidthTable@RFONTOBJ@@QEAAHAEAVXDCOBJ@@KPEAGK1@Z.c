/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C001A598
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C0019440 (NtGdiGetWidthTable.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C001AEF0 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0124858 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  RFONTOBJ *v6; // rbx
  struct XDCOBJ *v7; // r11
  unsigned int v8; // r15d
  unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r10
  unsigned int v11; // r13d
  bool v12; // zf
  unsigned int v13; // r14d
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v22; // esi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // esi
  unsigned int v30; // r8d
  __int16 v31; // r10
  unsigned __int16 *v32; // rsi
  unsigned int *v33; // r9
  signed __int64 v34; // rdi
  unsigned __int16 v35; // dx
  ULONG_PTR *v36; // rdi
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int16 *v40; // rdi
  unsigned int v41; // [rsp+40h] [rbp-C0h]
  __int16 v42; // [rsp+44h] [rbp-BCh]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  unsigned int *v44; // [rsp+50h] [rbp-B0h]
  unsigned int v45; // [rsp+58h] [rbp-A8h]
  unsigned int v46; // [rsp+5Ch] [rbp-A4h]
  unsigned int v47; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v48; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+78h] [rbp-88h]
  struct _GLYPHPOS v54; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR *v55; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v58[72]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = this;
  v7 = a2;
  v8 = 1;
  v9 = a6;
  v10 = a4;
  v11 = 1;
  v43 = a3;
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 96LL) + 3088LL) == 0LL;
  *(_OWORD *)&v54.hg = 0LL;
  if ( v12 )
  {
    v13 = a5;
    if ( a5 )
    {
      v39 = a5;
      v40 = a6;
      while ( v39 )
      {
        *v40++ = -1;
        --v39;
      }
    }
    v11 = 0;
    goto LABEL_17;
  }
  v13 = a5;
  v14 = a5;
  v46 = a5;
  v48 = a6;
  v49 = a4;
  if ( a5 )
  {
    v15 = a3;
    if ( a3 >= a5 )
      v15 = a5;
    v47 = v15;
    while ( 1 )
    {
      v16 = 70;
      if ( v15 )
      {
        if ( v15 < 0x46 )
          v16 = v15;
        v17 = 0;
      }
      else
      {
        v17 = 2;
        if ( v14 < 0x46 )
          v16 = v14;
      }
      v45 = v17;
      RFONTOBJ::vXlatGlyphArray(v6, v10, v16, v58, v17, 0);
      v18 = *(_QWORD *)v6;
      v19 = *(_QWORD *)(*(_QWORD *)v6 + 128LL);
      v20 = *(_QWORD *)(*(_QWORD *)v6 + 112LL);
      v57 = v19;
      v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v19 + 88) + 3088LL);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v55, (struct PFFOBJ *)&v57);
      v22 = v21(v20, v18, 1LL, v58, v48, v16);
      v50 = v22;
      if ( v56 )
      {
        v36 = v55;
        v37 = v56;
        do
        {
          EngUnmapFontFileFD(*v36++);
          --v37;
        }
        while ( v37 );
      }
      v6 = this;
      v23 = *(_QWORD *)this;
      v24 = *(_DWORD *)(*(_QWORD *)this + 712LL);
      if ( v22 == -1 )
        break;
      if ( (v24 & 0x40) != 0 )
      {
        v30 = 0;
        *(_DWORD *)(v23 + 712) = v24 & 0xFFFFFFBF;
        v41 = 0;
        v31 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
        v42 = v31;
        if ( v16 )
        {
          v32 = v48;
          v33 = v58;
          v34 = (char *)v49 - (char *)v48;
          v44 = v58;
          while ( 1 )
          {
            if ( *v33 == *(_DWORD *)(*(_QWORD *)this + 460LL) )
            {
              v35 = *(unsigned __int16 *)((char *)v32 + v34);
              if ( v35 != v31 )
              {
                if ( v45 != 2 )
                {
                  if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v35)
                    || *(_DWORD *)(*(_QWORD *)this + 708LL)
                    && (v38 = *(unsigned __int16 *)((char *)v32 + v34), (unsigned __int16)v38 >= gqlTTSystem)
                    && (unsigned __int16)v38 <= (unsigned __int16)word_1C0337C8A
                    && (v34 = (char *)v49 - (char *)v48,
                        ((0x80000000 >> ((v38 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0337C90
                                                                                + 4LL * ((v38 - gqlTTSystem) / 32))) != 0) )
                  {
                    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v54, &v49[v41], a2, 0LL) )
                      return 0xFFFFFFFFLL;
                    v30 = v41;
                    v33 = v44;
                    *v32 = WORD2(v54.pgdf[1].ppo);
                    goto LABEL_35;
                  }
                  v33 = v44;
                  v30 = v41;
                }
                v11 = 0;
                *v32 = -1;
              }
            }
LABEL_35:
            v31 = v42;
            ++v30;
            ++v33;
            v41 = v30;
            ++v32;
            v44 = v33;
            if ( v30 >= v16 )
            {
              v22 = v50;
              break;
            }
          }
        }
      }
      v11 &= v22;
      v14 = v46 - v16;
      v25 = 2LL * v16;
      v46 -= v16;
      v48 = (unsigned __int16 *)((char *)v48 + v25);
      v10 = &v49[(unsigned __int64)v25 / 2];
      v49 = (unsigned __int16 *)((char *)v49 + v25);
      v26 = v47 - v16;
      if ( !v47 )
        v26 = 0;
      v47 = v26;
      v15 = v26;
      if ( !v14 )
      {
        a3 = v43;
        if ( !v11 )
        {
          v9 = a6;
          v10 = a4;
          v7 = a2;
LABEL_17:
          v27 = 0LL;
          v28 = a3;
          if ( a3 >= v13 )
            v28 = v13;
          while ( (unsigned int)v27 < v28 )
          {
            if ( v9[v27] == 0xFFFF )
            {
              if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v54, (unsigned __int16 *)&v10[v27], v7, 0LL) )
                return 0xFFFFFFFFLL;
              v9 = a6;
              a6[v27] = WORD2(v54.pgdf[1].ppo);
            }
            v10 = a4;
            v27 = (unsigned int)(v27 + 1);
            v7 = a2;
          }
          a3 = v43;
        }
        goto LABEL_28;
      }
    }
    *(_DWORD *)(v23 + 712) = v24 & 0xFFFFFFBF;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_28:
    if ( v13 == a3 )
    {
      if ( v11 == -1 )
        return (unsigned int)-1;
      return v8;
    }
    else
    {
      return v11;
    }
  }
}
