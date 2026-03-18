/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C013BCC4
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C013BFF0 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C013C010 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H4(
        __int64 a1,
        __int64 a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        float a7,
        float a8)
{
  struct _GLYPHPOS *v8; // r13
  struct XDCOBJ *v12; // rdx
  unsigned __int16 *v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r15d
  int v18; // r12d
  POINTL *p_ptl; // r13
  int v20; // esi
  int v21; // r14d
  int v22; // r9d
  int v23; // r10d
  int v24; // edi
  int v25; // r8d
  unsigned int v26; // r11d
  int v27; // ebx
  POINTL v28; // rdx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // r9d
  bool v34; // zf
  int v35; // r8d
  int v36; // esi
  int v37; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-2Ch]
  int v39; // [rsp+48h] [rbp-28h]
  int v40; // [rsp+4Ch] [rbp-24h]
  int v41; // [rsp+50h] [rbp-20h]
  int v42; // [rsp+54h] [rbp-1Ch]
  int v43; // [rsp+58h] [rbp-18h]
  struct _GLYPHPOS *v44; // [rsp+60h] [rbp-10h]
  int v48; // [rsp+C8h] [rbp+58h]

  v44 = *(struct _GLYPHPOS **)(a1 + 64);
  v8 = v44;
  v41 = EFLOAT::bIs16((EFLOAT *)&a7);
  v37 = 0;
  v42 = EFLOAT::bIs16((EFLOAT *)&a8);
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, *(_DWORD *)a1, v44, v13, &v37, v12, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    if ( v37 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 232) |= 2u;
      *(_QWORD *)(a1 + 32) = v15;
    }
    v16 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
    {
      v17 = -*(_DWORD *)(v16 + 320);
      v18 = -*(_DWORD *)(v16 + 316);
    }
    else
    {
      v17 = *(_DWORD *)(v16 + 316);
      v18 = *(_DWORD *)(v16 + 320);
    }
    v39 = 0;
    p_ptl = &v8->ptl;
    v43 = a5 + 8;
    v48 = a4 + 8;
    v20 = 0;
    v21 = 0;
    p_ptl->x = v48 >> 4;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v44->ptl.y = (a5 + 8) >> 4;
    v26 = *(_DWORD *)a1;
    v27 = 0;
    v38 = v26;
    while ( 1 )
    {
      v28 = p_ptl[-1];
      v29 = v17 + v25;
      v30 = v24 + *(_DWORD *)(*(_QWORD *)&v28 + 16LL);
      if ( v30 >= v39 )
        v30 = v39;
      v39 = v30;
      v31 = v24 + *(_DWORD *)(*(_QWORD *)&v28 + 20LL);
      if ( v31 <= v27 )
        v31 = v27;
      v27 = v31;
      if ( v29 <= v21 )
        v29 = v21;
      v21 = v29;
      v32 = v18 + v25;
      if ( v18 + v25 >= v20 )
        v32 = v20;
      v20 = v32;
      v33 = *a6 + v22;
      v23 += a6[1];
      LODWORD(v44) = v33;
      v40 = v23;
      a6 += 2;
      if ( v41 )
      {
        v24 = 16 * v33;
      }
      else
      {
        v37 = 0;
        bFToL((float)v33 * a7, &v37, 0);
        v23 = v40;
        v26 = v38;
        v24 = v37;
      }
      if ( v42 )
      {
        v25 = 16 * v23;
      }
      else
      {
        v37 = 0;
        bFToL((float)v23 * a8, &v37, 0);
        v23 = v40;
        v26 = v38;
        v25 = v37;
      }
      v34 = v26-- == 1;
      v38 = v26;
      if ( v34 )
        break;
      p_ptl += 3;
      v22 = (int)v44;
      p_ptl->x = (v24 + v48) >> 4;
      p_ptl->y = (v43 - v25) >> 4;
    }
    v35 = -v25;
    v37 = v27;
    *(_DWORD *)(a1 + 96) = v39;
    *(_DWORD *)(a1 + 80) = v24;
    if ( v24 <= v27 )
      v24 = v37;
    *(_DWORD *)(a1 + 84) = v35;
    *(_DWORD *)(a1 + 104) = v24;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
    {
      result = (unsigned int)-v21;
      v36 = -v20;
    }
    else
    {
      result = (unsigned int)v20;
      v36 = v21;
    }
    *(_DWORD *)(a1 + 100) = v36;
    *(_DWORD *)(a1 + 108) = result;
    *(_DWORD *)(a1 + 232) |= 4u;
  }
  return result;
}
