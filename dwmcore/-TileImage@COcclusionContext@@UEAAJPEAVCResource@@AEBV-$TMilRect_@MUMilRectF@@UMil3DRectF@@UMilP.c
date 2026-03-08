/*
 * XREFs of ?TileImage@COcclusionContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800FA6A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::TileImage(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+40h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 18LL) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v6[0] = *(_QWORD *)(a1 + 1192);
    v7 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v6[1] = a2;
    v8 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 208LL))(v4, v6);
  }
  return 0LL;
}
