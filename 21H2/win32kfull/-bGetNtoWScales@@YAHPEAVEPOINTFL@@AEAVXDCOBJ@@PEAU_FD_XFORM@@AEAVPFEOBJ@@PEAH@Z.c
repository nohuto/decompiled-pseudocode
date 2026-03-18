/*
 * XREFs of ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0015928
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0015908 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C00162C4 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScales(struct EPOINTFL *a1, struct XDCOBJ *a2, __m128 *a3, struct PFEOBJ *a4, int *a5)
{
  unsigned int v6; // edi
  __m128 v7; // xmm0
  __int64 v10; // rax
  _OWORD *v11; // rdx
  __int64 v12; // r9
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // [rsp+28h] [rbp-61h] BYREF
  float v17; // [rsp+2Ch] [rbp-5Dh]
  float v18; // [rsp+30h] [rbp-59h] BYREF
  float v19; // [rsp+34h] [rbp-55h]
  _OWORD *v20; // [rsp+38h] [rbp-51h] BYREF
  int v21; // [rsp+44h] [rbp-45h]
  _BYTE v22[8]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v25[2]; // [rsp+70h] [rbp-19h] BYREF
  int v26; // [rsp+90h] [rbp+7h]

  v25[1] = 0LL;
  v6 = 0;
  v7 = *a3;
  v26 = 0;
  v20 = v25;
  v21 = 0;
  v25[0] = _mm_mul_ps(v7, (__m128)_xmm);
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v20);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v20, 8u);
  v24 = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
  v10 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v24);
  v16 = (float)(int)v10;
  v17 = (float)SHIDWORD(v10);
  if ( (*(_DWORD *)(v24 + 48) & 0x80000) != 0 )
  {
    v19 = (float)(int)v10;
    v18 = (float)-HIDWORD(v10);
  }
  else
  {
    v18 = (float)SHIDWORD(v10);
    v19 = (float)-(int)v10;
  }
  v11 = v20;
  if ( (v20[2] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct VECTORFL *)&v16, (struct VECTORFL *)&v16, 1uLL) )
      return v6;
    v11 = v20;
  }
  if ( (v11[2] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct VECTORFL *)&v18, (struct VECTORFL *)&v18, 1uLL) )
      return v6;
    v11 = v20;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    *a5 = v11[2] & 2;
LABEL_20:
    EFLOAT::eqLength(a1, v22, &v16);
    EFLOAT::eqLength((char *)a1 + 4, v22, &v18);
    return 1;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v23, a2, 0x402u);
  v12 = v23[0];
  if ( v23[0] )
  {
    *a5 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1
      && !(unsigned int)DC::bUseMetaPtoD(*(DC **)a2)
      && (*(_DWORD *)(v24 + 48) & 4) == 0 )
    {
      v14 = v16 * *(float *)v12;
      v17 = v17 * *(float *)v12;
      v16 = v14;
      v15 = *(float *)(v12 + 12);
      v17 = v17 * 16.0;
      v19 = (float)(v19 * v15) * 16.0;
      v16 = v14 * 16.0;
      v18 = (float)(v15 * v18) * 16.0;
      goto LABEL_20;
    }
    if ( (*(_DWORD *)(v12 + 32) & 2) == 0 )
    {
      if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v23, (struct VECTORFL *)&v16, (struct VECTORFL *)&v16, 1uLL) )
        return v6;
      v12 = v23[0];
    }
    if ( (*(_DWORD *)(v12 + 32) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v23, (struct VECTORFL *)&v18, (struct VECTORFL *)&v18, 1uLL) )
    {
      goto LABEL_20;
    }
  }
  return v6;
}
