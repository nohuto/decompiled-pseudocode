/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C001A064
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1C0016300 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0019F70 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00C4794 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     GreGetCharWidthW @ 0x1C013B81C (GreGetCharWidthW.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C00152D0 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0015908 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C013067C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 v5; // r8
  int v6; // r9d
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // [rsp+20h] [rbp-60h] BYREF
  int v13; // [rsp+24h] [rbp-5Ch] BYREF
  float v14[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+70h] [rbp-10h]

  v1 = *(_DWORD **)this;
  v2 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  v6 = *(_DWORD *)(v5 + 48);
  if ( (v6 & 6) == 0 || v1[23] )
    return v4;
  v8 = v1[3];
  if ( (v8 & 0x4000) != 0 )
    v4 = (v1[89] - 1) / 2;
  if ( (v8 & 0x2000) == 0 )
    return v4;
  v16 = v5;
  if ( (v6 & 4) == 0 )
    return ++v4;
  v18 = 0;
  memset(v17, 0, sizeof(v17));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v15, (struct MATRIX *)v17, 8u);
  if ( v15[0] )
  {
    RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v15);
    v9 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v16);
    v14[0] = (float)(int)v9;
    v14[1] = (float)SHIDWORD(v9);
    if ( (*(_DWORD *)(v15[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v15, (struct VECTORFL *)v14, (struct VECTORFL *)v14, 1uLL) )
    {
      v13 = 0;
      EFLOAT::eqLength(&v13, &v12, v14);
      v12 = 0;
      bFToL(v10, &v12, 0LL);
      v11 = v12;
      if ( !v12 )
        v11 = 1;
      v4 += v11;
      return v4;
    }
    return 1;
  }
  return v2;
}
