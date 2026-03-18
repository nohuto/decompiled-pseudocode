/*
 * XREFs of ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C022CD44
 * Callers:
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C022CB18 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ChangeWindowBitmapOwner @ 0x1C01BCC34 (ChangeWindowBitmapOwner.c)
 *     GreProtectSpriteContent @ 0x1C0267E68 (GreProtectSpriteContent.c)
 */

__int64 __fastcall ProtectWindowBitmap(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  __int64 v7; // rdx
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    a3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    v7 = *(unsigned int *)(a3 + 56);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = ChangeWindowBitmapOwner((__int64)a1, v7, a3, a4);
  if ( v8 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    {
      v9 = IsWindowDesktopComposed(a1);
      v8 = GreProtectSpriteContent(v10, *(_QWORD *)a1, v9, a2);
      if ( !v8 )
      {
        if ( v6 )
          ChangeWindowBitmapOwner((__int64)a1, 0LL, v11, v12);
      }
    }
  }
  return v8;
}
