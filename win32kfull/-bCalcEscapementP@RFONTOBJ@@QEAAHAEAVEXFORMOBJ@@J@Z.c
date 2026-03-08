/*
 * XREFs of ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02B8CC0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bCalcEscapementP(RFONTOBJ *this, struct EXFORMOBJ *a2, int a3)
{
  __int64 v5; // r8
  unsigned int v6; // ecx
  _DWORD *v7; // rax
  __int64 v9; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-10h] BYREF
  float v11; // [rsp+50h] [rbp+10h] BYREF
  float v12; // [rsp+68h] [rbp+28h] BYREF

  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(*(_QWORD *)this + 392LL);
  if ( v6 < 0xE10 && (a3 == v6 || a3 == v6 + 1800 || a3 == v6 - 1800) )
  {
    *(_DWORD *)(v5 + 432) = a3;
    *(_QWORD *)(*(_QWORD *)this + 436LL) = *(_QWORD *)(*(_QWORD *)this + 396LL);
    *(_DWORD *)(*(_QWORD *)this + 444LL) = *(_DWORD *)(*(_QWORD *)this + 404LL);
    *(_DWORD *)(*(_QWORD *)this + 448LL) = *(_DWORD *)(*(_QWORD *)this + 408LL);
    v7 = *(_DWORD **)this;
    v7[113] = 1065353216;
    v7[114] = 0;
    if ( a3 != v7[98] )
    {
      v7[109] ^= _xmm;
      v7[110] ^= _xmm;
      v7[113] = -1082130432;
    }
    return 1LL;
  }
  *(_DWORD *)(v5 + 432) = -1;
  if ( EXFORMOBJ::bComputeUnits(
         a2,
         a3,
         (struct POINTFL *)(*(_QWORD *)this + 436LL),
         (struct EFLOAT *)(*(_QWORD *)this + 444LL),
         (struct EFLOAT *)(*(_QWORD *)this + 448LL)) )
  {
    v9 = *(_QWORD *)this;
    v11 = 0.0;
    v12 = 0.0;
    EFLOAT::eqCross(&v12, v10, v9 + 416, v9 + 396);
    if ( !EFLOAT::bIsZero((EFLOAT *)&v12) )
    {
      EFLOAT::eqCross(&v11, v10, *(_QWORD *)this + 416LL, *(_QWORD *)this + 436LL);
      *(float *)(*(_QWORD *)this + 452LL) = v11 / v12;
      EFLOAT::eqCross(&v11, v10, *(_QWORD *)this + 436LL, *(_QWORD *)this + 396LL);
      *(float *)(*(_QWORD *)this + 456LL) = v11 / v12;
      *(_DWORD *)(*(_QWORD *)this + 432LL) = a3;
      return 1LL;
    }
  }
  return 0LL;
}
