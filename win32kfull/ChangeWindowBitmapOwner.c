/*
 * XREFs of ChangeWindowBitmapOwner @ 0x1C01BDDD4
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C022FA64 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0043F00 (GetRedirectionBitmap.c)
 *     GreSetBitmapContentOwner @ 0x1C00DFBB4 (GreSetBitmapContentOwner.c)
 *     GreSetLWContentOwner @ 0x1C02D71EC (GreSetLWContentOwner.c)
 */

__int64 __fastcall ChangeWindowBitmapOwner(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  char v5; // r9
  __int64 RedirectionBitmap; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v5 = *(_BYTE *)(v2 + 26);
  if ( (*(_BYTE *)(v2 + 27) & 0x20) == 0 )
  {
    if ( (v5 & 8) == 0 )
      return v3;
    return (unsigned int)GreSetLWContentOwner(*(HWND *)a1);
  }
  if ( (v5 & 0x20) == 0 )
  {
    RedirectionBitmap = GetRedirectionBitmap(a1);
    if ( !RedirectionBitmap )
      return v3;
    return (unsigned int)GreSetBitmapContentOwner(RedirectionBitmap, -1LL, a2);
  }
  return 1;
}
