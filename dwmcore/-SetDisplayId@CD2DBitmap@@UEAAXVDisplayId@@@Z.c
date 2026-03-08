/*
 * XREFs of ?SetDisplayId@CD2DBitmap@@UEAAXVDisplayId@@@Z @ 0x180107B30
 * Callers:
 *     ?SetDisplayId@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXVDisplayId@@@Z @ 0x18011C4B0 (-SetDisplayId@CDeviceTextureTarget@@$4PPPPPPPM@BEI@EAAXVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::SetDisplayId(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 156) = a2;
}
