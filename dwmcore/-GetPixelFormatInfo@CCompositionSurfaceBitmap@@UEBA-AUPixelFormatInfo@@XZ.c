/*
 * XREFs of ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C13B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18000D2A8 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  struct IBitmapRealization *RenderingRealization; // rax
  struct IBitmapRealization *v5; // rcx
  int v6; // ecx
  int v7; // ecx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]

  RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(a1 - 72));
  if ( RenderingRealization )
  {
    v5 = (struct IBitmapRealization *)((char *)RenderingRealization
                                     + *(int *)(*((_QWORD *)RenderingRealization + 1) + 8LL)
                                     + 8);
    (**(void (__fastcall ***)(struct IBitmapRealization *, __int64 *))v5)(v5, &v9);
    v6 = HIDWORD(v9);
    if ( *(_BYTE *)(a1 + 120) )
      v6 = 3;
    HIDWORD(v9) = v6;
    v7 = v10;
    *(_QWORD *)a2 = v9;
    *(_DWORD *)(a2 + 8) = v7;
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 4) = *(_BYTE *)(a1 + 120) != 0 ? 3 : 0;
  }
  return a2;
}
