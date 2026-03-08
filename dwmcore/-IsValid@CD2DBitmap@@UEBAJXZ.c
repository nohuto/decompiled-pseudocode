/*
 * XREFs of ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x1800D83C4
 * Callers:
 *     ?IsValid@CD2DBitmap@@$4PPPPPPPM@A@EBAJXZ @ 0x18011C0D0 (-IsValid@CD2DBitmap@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CD2DBitmap@@$4PPPPPPPM@CI@EBAJXZ @ 0x18011C3B0 (-IsValid@CD2DBitmap@@$4PPPPPPPM@CI@EBAJXZ.c)
 *     ?IsValid@CD2DBitmap@@$4PPPPPPPM@FI@EBAJXZ @ 0x18011F630 (-IsValid@CD2DBitmap@@$4PPPPPPPM@FI@EBAJXZ.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x18029C4F0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::IsValid(CD2DBitmap *this)
{
  char *v1; // rcx

  if ( !*((_QWORD *)this - 19) )
    return 2291674892LL;
  v1 = (char *)this + *(int *)(*((_QWORD *)this - 32) + 8LL) - 256;
  return *(unsigned int *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))(v1) + 1088);
}
