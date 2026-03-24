/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C30EC
 * Callers:
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@$4PPPPPPPM@A@EAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800F5ED0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@$4PPPPPPPM@A@EAAJPEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1800332C4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2)
{
  unsigned int v2; // ebx
  CGdiSpriteBitmap *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int Bitmap; // eax
  __int64 v11; // rcx

  v2 = 0;
  v3 = (CGdiSpriteBitmap *)((char *)this - 536);
  *a2 = 0LL;
  if ( *((_QWORD *)this - 7) )
    goto LABEL_2;
  Bitmap = CGdiSpriteBitmap::CreateBitmap(v3, (enum DXGI_FORMAT)*((_DWORD *)v3 + 24));
  if ( Bitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Bitmap, 0xE7u, 0LL);
  if ( *((_QWORD *)v3 + 60) )
  {
LABEL_2:
    v6 = *((_QWORD *)this - 7);
    if ( v6 )
      v7 = *(int *)(*(_QWORD *)(v6 + 8) + 12LL) + v6 + 8;
    else
      v7 = 0LL;
    *a2 = (struct IBitmapRealization *)v7;
    v8 = v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v2;
}
