/*
 * XREFs of GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0291380
 * Callers:
 *     NtGdiEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C02ACD20 (NtGdiEnsureDpiDepDefaultGuiFontForPlateau.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1C03909E0 (hfontInitDefaultGuiFont.c)
 */

void __fastcall GreEnsureDpiDepDefaultGuiFontForPlateau(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // edx
  __int64 v6; // rdi
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( (_DWORD)a1 != (unsigned __int16)DrvGetLogPixels(a1, a2, a3) && v3 != 96 && v3 == 24 * ((int)v3 / 24) )
  {
    v4 = v3 - 120;
    if ( v3 - 120 <= 0x168 )
    {
      v5 = v4 / 24;
      if ( v4 / 24 >= 0 )
      {
        v6 = v5;
        if ( !gahDpiDepDefaultGuiFonts[v5] )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v7, gDpiDepDefaultGuiFontsPushLock);
          if ( !gahDpiDepDefaultGuiFonts[v6] )
            gahDpiDepDefaultGuiFonts[v6] = (void *)hfontInitDefaultGuiFont(v3);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
        }
      }
    }
  }
}
