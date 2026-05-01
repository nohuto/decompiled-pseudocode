/*
 * XREFs of ?_RenderBackground@CGlyphButtonElement@@AEAAXXZ @ 0x1804229B4
 * Callers:
 *     ?Repaint@CGlyphButtonElement@@UEAAXXZ @ 0x180422790 (-Repaint@CGlyphButtonElement@@UEAAXXZ.c)
 *     ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x1804228EC (-_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x180422C70 (-v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlyphButtonElement::_RenderBackground(CGlyphButtonElement *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  CGlyphButtonElement *v6; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 49) )
  {
    v2 = *((_QWORD *)this + 48);
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8,
           &v5) >= 0 )
    {
      if ( (*((_BYTE *)this + 364) & 1) != 0 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
          *((_QWORD *)this + 49),
          v3,
          0LL,
          0LL);
        v4 = *((_QWORD *)this + 49);
        v6 = this;
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, _QWORD *, __int64), CGlyphButtonElement **))(*(_QWORD *)v4 + 80LL))(
          v4,
          LambdaCustomPaintProc<_lambda_3620ca84e17db7610b457f2d5c27bd2d_,ID2D1DeviceContext *>,
          &v6);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
          *((_QWORD *)this + 49),
          v3,
          0LL,
          0LL);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
