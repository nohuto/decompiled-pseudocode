/*
 * XREFs of ?ProtectWindowBitmap@@YAHPEAUtagWND@@KPEBUtagPROCESSINFO@@@Z @ 0x1C02438F4
 * Callers:
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0243670 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ChangeRedirectionBitmapOwner @ 0x1C01E2418 (ChangeRedirectionBitmapOwner.c)
 *     GreProtectSpriteContent @ 0x1C026D910 (GreProtectSpriteContent.c)
 */

__int64 __fastcall ProtectWindowBitmap(struct tagWND *a1, unsigned int a2, const struct tagPROCESSINFO *a3)
{
  int v5; // esi
  int v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx

  v5 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v6 = *((_DWORD *)a3 + 14);
  else
    v6 = 0;
  v7 = ChangeRedirectionBitmapOwner((__int64)a1, v6);
  if ( v7 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      v8 = IsWindowDesktopComposed(a1);
      v7 = GreProtectSpriteContent(v9, *(_QWORD *)a1, v8, a2);
      if ( !v7 )
      {
        if ( v5 )
          ChangeRedirectionBitmapOwner((__int64)a1, 0);
      }
    }
  }
  return v7;
}
