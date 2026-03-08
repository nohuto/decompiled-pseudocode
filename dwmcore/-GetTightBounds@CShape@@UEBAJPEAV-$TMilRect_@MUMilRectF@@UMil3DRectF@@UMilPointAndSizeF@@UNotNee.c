/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180048B00
 * Callers:
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180057EB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800622C0 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180048C50 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180048C74 (-HasValidValues@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x1800B4B7C (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, CMILMatrix *a3)
{
  _DWORD *v3; // rsi
  CMILMatrix *v4; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v20[6]; // [rsp+48h] [rbp-28h] BYREF

  v18 = 0LL;
  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
    goto LABEL_2;
  if ( CMILMatrix::Is2DAffineOrNaN(a3, a2) )
  {
    v3 = v20;
    v13 = *((_DWORD *)v4 + 1);
    v20[0] = *(_DWORD *)v4;
    v14 = *((_DWORD *)v4 + 4);
    v20[1] = v13;
    v15 = *((_DWORD *)v4 + 5);
    v20[2] = v14;
    v16 = *((_DWORD *)v4 + 12);
    v20[3] = v15;
    v17 = *((_DWORD *)v4 + 13);
    v20[4] = v16;
    v20[5] = v17;
LABEL_2:
    v4 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, CMILMatrix *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, v4, &v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3FBu, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int128 *))(*(_QWORD *)v18 + 32LL))(v18, v3, &v19);
    *(_OWORD *)a2 = v19;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
    {
      v11 = -2003304438;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304438, 0x407u, 0LL);
      goto LABEL_10;
    }
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v10) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  if ( v9 == -2003238895 )
    v9 = -2003304438;
  v11 = v9;
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v11;
}
