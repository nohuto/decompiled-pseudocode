/*
 * XREFs of GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C029B210
 * Callers:
 *     NtGdiEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C02C4A70 (NtGdiEnsureDpiDepDefaultGuiFontForPlateau.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     hfontInitDefaultGuiFont @ 0x1C03B6C5C (hfontInitDefaultGuiFont.c)
 */

void __fastcall GreEnsureDpiDepDefaultGuiFontForPlateau(Gre::Base *a1)
{
  unsigned int v1; // ebx
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ecx
  int v7; // edx
  __int64 v8; // rsi
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  v2 = Gre::Base::Globals(a1);
  if ( v1 != (unsigned __int16)DrvGetLogPixels(v4, v3, v5) && v1 != 96 && v1 == 24 * ((int)v1 / 24) )
  {
    v6 = v1 - 120;
    if ( v1 - 120 <= 0x168 )
    {
      v7 = v6 / 24;
      if ( v6 / 24 >= 0 )
      {
        v8 = v7;
        if ( !*(_QWORD *)(*((_QWORD *)v2 + 398) + 8LL * v7) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct Gre::Base::SESSION_GLOBALS *)((char *)v2 + 2328));
          if ( !*(_QWORD *)(*((_QWORD *)v2 + 398) + 8 * v8) )
            *(_QWORD *)(*((_QWORD *)v2 + 398) + 8 * v8) = hfontInitDefaultGuiFont(v1);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
        }
      }
    }
  }
}
