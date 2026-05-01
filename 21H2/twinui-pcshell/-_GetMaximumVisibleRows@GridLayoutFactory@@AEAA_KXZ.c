/*
 * XREFs of ?_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ @ 0x180428544
 * Callers:
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804284AC (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 * Callees:
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804099A0 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 */

__int64 __fastcall GridLayoutFactory::_GetMaximumVisibleRows(GridLayoutFactory *this)
{
  unsigned int v1; // r15d
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // ebp
  int v6; // r14d
  int v7; // eax
  int v8; // r10d
  ThumbnailHeight *v9; // r11
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r9d

  v1 = *((_DWORD *)this + 13) + *((_DWORD *)this + 133) - *((_DWORD *)this + 131);
  v2 = *((_DWORD *)this + 43);
  v3 = *((_DWORD *)this + 42);
  v4 = *((_DWORD *)this + 39);
  v5 = *((_DWORD *)this + 38);
  v6 = *((_DWORD *)this + 29);
  v7 = ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129));
  v11 = 1LL;
  if ( v1 / (v10 + v2 + v3 + v4 + v5 + v6 + v7) )
  {
    v12 = ThumbnailHeight::GetForScreenHeight(v9, v8);
    return v1 / (v13 + v2 + v3 + v4 + v5 + v6 + v12);
  }
  return v11;
}
