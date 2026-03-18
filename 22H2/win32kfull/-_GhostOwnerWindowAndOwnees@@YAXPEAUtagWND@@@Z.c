/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F3FCC
 * Callers:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3C68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3E38 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4044 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall _GhostOwnerWindowAndOwnees(struct tagWND **a1)
{
  struct tagWND *i; // rbx
  struct tagWND *j; // rax

  if ( ShouldProcessHungWindow((struct tagWND *)a1) )
    _GhostWindow((struct tagWND *)a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = a1[12]; i; i = (struct tagWND *)*((_QWORD *)i + 12) )
    {
      for ( j = (struct tagWND *)*((_QWORD *)i + 15); j; j = (struct tagWND *)*((_QWORD *)j + 15) )
      {
        if ( j == (struct tagWND *)a1 )
        {
          if ( ShouldProcessHungWindow(i) == i )
            _GhostWindow(i);
          break;
        }
      }
    }
  }
}
