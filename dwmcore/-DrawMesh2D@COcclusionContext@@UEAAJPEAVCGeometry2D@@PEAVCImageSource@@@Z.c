/*
 * XREFs of ?DrawMesh2D@COcclusionContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801E3FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawMesh2D(
        COcclusionContext *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+40h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 18LL) )
  {
    v5 = *((_QWORD *)this + 1);
    v7[0] = *((_QWORD *)this + 149);
    v8 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v7[1] = a3;
    v9 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 208LL))(v5, v7);
  }
  return 0LL;
}
