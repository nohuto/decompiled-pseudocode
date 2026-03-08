/*
 * XREFs of ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F2FFC
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C0150DA6 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bValid@WIDENER@@QEBAHXZ @ 0x1C0150D64 (-bValid@WIDENER@@QEBAHXZ.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F2F10 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02F38EC (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

WIDENER *__fastcall WIDENER::WIDENER(WIDENER *this, __m128i **a2, struct MATRIX **a3, const struct _LINEATTRS *a4)
{
  ULONG iEndCap; // ebp
  ULONG iJoin; // ebx
  BOOL v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  FLOAT_LONG v14; // xmm1_4
  float v15; // xmm1_4
  __m128i *v16; // rcx
  __m128i v17; // xmm1
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-38h] BYREF
  __int32 v21; // [rsp+24h] [rbp-34h]
  int v22; // [rsp+28h] [rbp-30h]
  __int32 v23; // [rsp+2Ch] [rbp-2Ch]
  int v24; // [rsp+60h] [rbp+8h] BYREF

  STYLER::STYLER(this, (struct EPATHOBJ *)a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 824));
  *((_DWORD *)this + 236) = 0;
  *((_DWORD *)this + 244) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 984));
  *((_DWORD *)this + 276) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 1136));
  *((_DWORD *)this + 314) = 0;
  if ( !WIDENER::bValid(this) )
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
  *((_DWORD *)this + 10) = v12;
  LODWORD(v14.e) = a4->elWidth;
  v24 = 0;
  bFToL(v14.e, &v24, 6u);
  *((FLOAT_LONG *)this + 325) = v14;
  *((float *)this + 325) = *((float *)this + 325) * 0.5;
  if ( iJoin == 2 )
  {
    v15 = *((float *)this + 325) * a4->eMiterLimit;
    *((float *)this + 324) = v15;
    *((float *)this + 324) = v15 * *((float *)this + 324);
  }
  if ( a4->pstyle || iEndCap == 1 || iJoin == 2 )
  {
    if ( !EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
    {
      EngSetLastError(0x216u);
LABEL_17:
      *((_DWORD *)this + 314) = 1;
      goto LABEL_18;
    }
    v16 = a2[1];
    v20 = _mm_cvtsi128_si32(_mm_srli_si128(v16[3], 8)) - v16[3].m128i_i32[0];
    v17 = v16[3];
    v18 = v16[3].m128i_i64[0];
    v22 = -v20;
    v21 = _mm_srli_si128(v17, 8).m128i_i32[1] - HIDWORD(v18);
    v23 = v21;
    if ( !EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v20, (struct _VECTORL *)&v20, 2uLL) )
      goto LABEL_17;
  }
LABEL_18:
  if ( WIDENER::bValid(this)
    && (!(unsigned int)WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), (struct EXFORMOBJ *)a3, v24)
     || !WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 314) = 1;
  }
  return this;
}
