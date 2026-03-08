/*
 * XREFs of ?GetTransform@CBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802ACB3C
 * Callers:
 *     ?GetTransform@CBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011DAF0 (-GetTransform@CBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetTransform@CBitmapRealization@@$4PPPPPPPM@FA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011DB10 (-GetTransform@CBitmapRealization@@$4PPPPPPPM@FA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, __int64 a3)
{
  __int64 v4; // r8
  void (__fastcall ***v5)(_QWORD, int *); // rcx
  int v6; // eax
  float v7; // xmm1_4
  int v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+44h] [rbp+1Ch]

  CMILMatrix::SetToIdentity(a2);
  if ( a3 )
  {
    v5 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(v4 - 360) + 16LL) + v4 - 360);
    (**v5)(v5, &v9);
    v6 = v9;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    v7 = (float)v10;
    *(float *)(a3 + 8) = (float)v6;
    *(float *)(a3 + 12) = v7;
  }
  return 0;
}
