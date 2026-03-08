/*
 * XREFs of ?GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1801AF710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800836C0 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRoundedRectangleShape::GetRectangles(_QWORD *a1, _OWORD *a2, int a3)
{
  __int128 v6; // xmm0
  char result; // al
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, 0LL) || a3 != 1 )
    return 0;
  v6 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect(a1[2] + 16LL, (__int64)v8);
  result = 1;
  *a2 = v6;
  return result;
}
