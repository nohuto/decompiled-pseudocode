/*
 * XREFs of ?GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AD8EC
 * Callers:
 *     ?GetTransform@CGDISubSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011DF10 (-GetTransform@CGDISubSectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180090CB0 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 */

char __fastcall CGDISubSectionBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  __int128 v3; // xmm0
  int v4; // r9d
  bool v6; // zf
  int v8; // ecx
  int v9; // ebp
  int v10; // r8d
  int v11; // r14d
  unsigned int v12; // esi
  unsigned int v13; // edi
  float v14; // xmm1_4
  float v15; // xmm2_4
  char v16; // dl
  CMILMatrix *v17; // rcx
  float v18; // xmm2_4
  float v19; // xmm1_4

  v3 = *(_OWORD *)(a1 - 96);
  v4 = *(_DWORD *)(a1 - 96);
  v6 = v4 == *(_DWORD *)(a1 - 80);
  v8 = *(_DWORD *)(a1 - 112);
  v9 = v3;
  if ( v6 )
    v9 = v8 + v3;
  v10 = *(_DWORD *)(a1 - 92);
  v11 = DWORD1(v3);
  if ( v10 == *(_DWORD *)(a1 - 76) )
    v11 = *(_DWORD *)(a1 - 104) + DWORD1(v3);
  v12 = DWORD2(v3);
  if ( *(_DWORD *)(a1 - 88) == *(_DWORD *)(a1 - 72) )
    v12 = DWORD2(v3) - *(_DWORD *)(a1 - 108);
  v13 = HIDWORD(v3);
  if ( *(_DWORD *)(a1 - 84) == *(_DWORD *)(a1 - 68) )
    v13 = HIDWORD(v3) - *(_DWORD *)(a1 - 100);
  if ( v12 < v9 )
    v12 = v9;
  if ( v13 < v11 )
    v13 = v11;
  v14 = (float)v4 - (float)v8;
  v15 = (float)v10 - (float)*(int *)(a1 - 104);
  CMILMatrix::SetToIdentity(a2);
  if ( v14 != 0.0 || v15 != 0.0 )
  {
    CMILMatrix::Translate(v17, v14, v15);
    v16 = 1;
  }
  if ( a3 )
  {
    v18 = (float)v9 - (float)*(int *)(a1 - 96);
    *a3 = v18;
    v19 = (float)v11 - (float)*(int *)(a1 - 92);
    a3[1] = v19;
    a3[2] = (float)(int)(v12 - v9) + v18;
    a3[3] = (float)(int)(v13 - v11) + v19;
  }
  return v16;
}
