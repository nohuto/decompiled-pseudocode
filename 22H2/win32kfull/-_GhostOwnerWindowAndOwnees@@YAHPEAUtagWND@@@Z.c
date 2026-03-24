/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C00037FC
 * Callers:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 * Callees:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0003880 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     ShouldProcessHungWindow @ 0x1C01273E4 (ShouldProcessHungWindow.c)
 */

__int64 __fastcall _GhostOwnerWindowAndOwnees(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 i; // rbx
  __int64 j; // rax

  v2 = 0;
  if ( ((__int64 (*)(void))ShouldProcessHungWindow)() )
    v2 = _GhostWindow(a1);
  if ( (unsigned int)IsNonImmersiveBand(a1) )
  {
    for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 96) )
    {
      for ( j = *(_QWORD *)(i + 120); j; j = *(_QWORD *)(j + 120) )
      {
        if ( (struct tagWND *)j == a1 )
        {
          if ( ShouldProcessHungWindow(i) == i )
            v2 |= _GhostWindow((struct tagWND *)i);
          break;
        }
      }
    }
  }
  return v2;
}
