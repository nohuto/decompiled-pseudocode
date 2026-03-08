/*
 * XREFs of ?Get3DBounds@CSceneWorld@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180260558
 * Callers:
 *     ?Get3DContentBounds@CSceneVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180216F3C (-Get3DContentBounds@CSceneVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006D880 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0D18 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSceneWorld::Get3DBounds(_QWORD **a1, __int64 a2, __int64 a3)
{
  _BYTE v6[64]; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+80h] [rbp+7h]
  _DWORD v8[4]; // [rsp+90h] [rbp+17h] BYREF
  _DWORD v9[4]; // [rsp+A0h] [rbp+27h] BYREF
  float v10[6]; // [rsp+B0h] [rbp+37h] BYREF

  if ( ((unsigned __int8 (__fastcall *)(_QWORD **))(*a1)[24])(a1) )
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _DWORD *, _DWORD *))(*a1[11] + 48LL))(a1[11], v8, v9);
    v7 = 0;
    v10[0] = *(float *)v8;
    v10[1] = *(float *)&v8[1];
    v10[4] = *(float *)&v8[2];
    v10[2] = *(float *)v9;
    v10[3] = *(float *)&v9[1];
    v10[5] = *(float *)&v9[2];
    CMILMatrix::SetScale((CMILMatrix *)v6, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v6, v10, (float *)a3);
  }
  return 0LL;
}
