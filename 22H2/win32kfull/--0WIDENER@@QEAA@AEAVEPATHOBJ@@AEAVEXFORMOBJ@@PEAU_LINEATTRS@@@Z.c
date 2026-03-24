/*
 * XREFs of ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01400E8
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013F1FC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013F34C (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0140328 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C01408C0 (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0141678 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

WIDENER *__fastcall WIDENER::WIDENER(WIDENER *this, __m128i **a2, struct MATRIX **a3, struct _LINEATTRS *a4)
{
  ULONG iEndCap; // ecx
  ULONG iJoin; // eax
  BOOL v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  FLOAT_LONG v14; // xmm1_4
  float v16; // xmm1_4
  __m128i *v17; // rcx
  __m128i v18; // xmm1
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int32 v21; // [rsp+24h] [rbp-24h]
  int v22; // [rsp+28h] [rbp-20h]
  __int32 v23; // [rsp+2Ch] [rbp-1Ch]
  int v24; // [rsp+50h] [rbp+8h] BYREF

  STYLER::STYLER(this, (struct EPATHOBJ *)a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 824));
  *((_DWORD *)this + 236) = 0;
  *((_DWORD *)this + 244) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 984));
  *((_DWORD *)this + 276) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 1136));
  *((_DWORD *)this + 314) = 0;
  if ( !(unsigned int)WIDENER::bValid(this) )
    return this;
  iEndCap = a4->iEndCap;
  *((_DWORD *)this + 323) = iEndCap;
  iJoin = a4->iJoin;
  *((_DWORD *)this + 322) = iJoin;
  v10 = !iJoin && iEndCap <= 1;
  v11 = *((_DWORD *)this + 10);
  v12 = v11 | 0x10;
  v13 = v11 & 0xFFFFFFEF;
  if ( !v10 )
    v12 = v13;
  v24 = 0;
  *((_DWORD *)this + 10) = v12;
  LODWORD(v14.e) = a4->elWidth;
  bFToL(v14.e, &v24, 6u);
  *((FLOAT_LONG *)this + 325) = v14;
  *((float *)this + 325) = *((float *)this + 325) * 0.5;
  if ( *((_DWORD *)this + 322) == 2 )
  {
    v16 = *((float *)this + 325) * a4->eMiterLimit;
    *((float *)this + 324) = v16;
    *((float *)this + 324) = v16 * *((float *)this + 324);
  }
  else if ( !a4->pstyle && *((_DWORD *)this + 323) != 1 )
  {
    goto LABEL_11;
  }
  if ( !EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
  {
    EngSetLastError(0x216u);
LABEL_20:
    *((_DWORD *)this + 314) = 1;
    goto LABEL_11;
  }
  v17 = a2[1];
  v20 = _mm_cvtsi128_si32(_mm_srli_si128(v17[3], 8)) - v17[3].m128i_i32[0];
  v18 = v17[3];
  v19 = v17[3].m128i_i64[0];
  v22 = -v20;
  v21 = _mm_srli_si128(v18, 8).m128i_i32[1] - HIDWORD(v19);
  v23 = v21;
  if ( !EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v20, (struct _VECTORL *)&v20, 2uLL) )
    goto LABEL_20;
LABEL_11:
  if ( (unsigned int)WIDENER::bValid(this)
    && (!(unsigned int)WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), (struct EXFORMOBJ *)a3, v24)
     || !(unsigned int)WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 314) = 1;
  }
  return this;
}
