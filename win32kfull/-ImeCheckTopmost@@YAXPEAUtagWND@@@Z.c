/*
 * XREFs of ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C0026C08
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0026AC0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00A0A28 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0026C68 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 */

void __fastcall ImeCheckTopmost(struct tagWND *a1)
{
  int v2; // r9d
  struct tagWND *v3; // rcx
  struct tagWND *v4; // r8

  v2 = 0;
  v3 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v3 )
  {
    v4 = v3;
    if ( *((_QWORD *)a1 + 2) == gptiForeground )
      v4 = 0LL;
    if ( (*(_BYTE *)(*((_QWORD *)v3 + 5) + 24LL) & 8) != 0 || *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != 1 )
      v2 = 1;
    ImeSetTopmost(a1, v2, v4);
  }
}
