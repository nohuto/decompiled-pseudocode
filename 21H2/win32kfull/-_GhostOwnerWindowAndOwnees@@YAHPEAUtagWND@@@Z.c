/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0144890
 * Callers:
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144914 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall _GhostOwnerWindowAndOwnees(struct tagWND **a1)
{
  unsigned int v2; // esi
  struct tagWND *i; // rbx
  struct tagWND *j; // rax

  v2 = 0;
  if ( ShouldProcessHungWindow((struct tagWND *)a1) )
    v2 = _GhostWindow((struct tagWND *)a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = a1[12]; i; i = (struct tagWND *)*((_QWORD *)i + 12) )
    {
      for ( j = (struct tagWND *)*((_QWORD *)i + 15); j; j = (struct tagWND *)*((_QWORD *)j + 15) )
      {
        if ( j == (struct tagWND *)a1 )
        {
          if ( ShouldProcessHungWindow(i) == i )
            v2 |= _GhostWindow(i);
          break;
        }
      }
    }
  }
  return v2;
}
