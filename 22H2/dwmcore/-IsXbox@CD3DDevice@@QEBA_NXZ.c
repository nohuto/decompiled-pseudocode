/*
 * XREFs of ?IsXbox@CD3DDevice@@QEBA_NXZ @ 0x180038FD4
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180025178 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180038F28 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDevice::IsXbox(const wchar_t *this)
{
  return wcsstr(this + 320, L"SraKmd") != 0LL;
}
