/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C006407C
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0063708 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00642C4 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     GreGetCharWidthW @ 0x1C00A28E4 (GreGetCharWidthW.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00E3A64 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C009A1D0 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C01151E0 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C014047C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 v5; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-60h] BYREF
  int v12; // [rsp+24h] [rbp-5Ch] BYREF
  float v13[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+70h] [rbp-10h]

  v1 = *(_DWORD **)this;
  v2 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  if ( (*(_DWORD *)(v5 + 48) & 6) == 0 || v1[23] )
    return v4;
  v7 = v1[3];
  if ( (v7 & 0x4000) != 0 )
    v4 = (v1[89] - 1) / 2;
  if ( (v7 & 0x2000) == 0 )
    return v4;
  v15 = v5;
  if ( (*(_DWORD *)(v5 + 48) & 4) == 0 )
    return ++v4;
  v17 = 0;
  memset(v16, 0, sizeof(v16));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v14, (struct MATRIX *)v16, 8u);
  if ( v14[0] )
  {
    RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v14);
    v8 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v15);
    v13[0] = (float)(int)v8;
    v13[1] = (float)SHIDWORD(v8);
    if ( (*(_DWORD *)(v14[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct VECTORFL *)v13, (struct VECTORFL *)v13, 1uLL) )
    {
      v12 = 0;
      EFLOAT::eqLength(&v12, &v11, v13);
      v11 = 0;
      bFToL(v9, &v11, 0LL);
      v10 = v11;
      if ( !v11 )
        v10 = 1;
      v4 += v10;
      return v4;
    }
    return 1;
  }
  return v2;
}
