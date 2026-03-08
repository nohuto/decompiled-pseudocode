/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DF00
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011E270 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMi.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011E950 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011EBD0 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 * Callees:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18000E02C (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18000E098 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  _DWORD *v6; // r8
  int *v7; // rax
  int *v8; // r14
  int *v9; // rdi
  UINT32 v10; // eax
  _BYTE v12[64]; // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+60h] [rbp-28h]
  D2D_SIZE_U v14; // [rsp+90h] [rbp+8h] BYREF

  CMILMatrix::SetToIdentity(a2);
  if ( *(_QWORD *)(a1 - 88) )
  {
    v7 = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 104) + 48LL))(a1 - 104);
    v8 = v7;
    v9 = v7 + 1;
    if ( *v7 || *v9 )
      CMILMatrix::Translate(
        a2,
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v7) ^ _xmm),
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v9) ^ _xmm));
    v14.width = v8[2] - *v8;
    v10 = v8[3] - *v9;
    v13 = 0;
    v14.height = v10;
    if ( CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 464), &v14, (struct CMILMatrix *)v12) )
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v12);
    if ( CBitmapRealization::CalcImageTransform((CBitmapRealization *)(a1 - 464), (struct CMILMatrix *)v12) )
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v12);
    if ( a3 )
    {
      *a3 = (float)*v8;
      a3[1] = (float)*v9;
      a3[2] = (float)v8[2];
      a3[3] = (float)v8[3];
    }
  }
  else if ( a3 )
  {
    v6[3] = 0;
    v6[2] = 0;
    v6[1] = 0;
    *v6 = 0;
  }
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
