/*
 * XREFs of BgpConsoleDisplayString @ 0x140AEE870
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     AnFwFadeCompletion @ 0x140AE9FB8 (AnFwFadeCompletion.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140AEE5D4 (BgpConsoleDisplayCharacterEx.c)
 */

__int64 __fastcall BgpConsoleDisplayString(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  unsigned __int16 v5; // cx
  int v6; // eax

  BgpFwAcquireLock();
  v2 = qword_140CF7760;
  if ( qword_140CF7760 )
  {
    if ( a1 )
    {
      if ( *a1 )
      {
        if ( (*(_DWORD *)(qword_140CF7760 + 8) & 0x10000) != 0 )
        {
          AnFwFadeCompletion();
          v2 = qword_140CF7760;
          *(_DWORD *)(qword_140CF7760 + 8) &= ~0x10000u;
        }
        v5 = *a1;
        v3 = 0;
        if ( *a1 )
        {
          while ( 1 )
          {
            v6 = BgpConsoleDisplayCharacterEx(
                   v5,
                   *(_DWORD *)(v2 + 68),
                   *(_DWORD *)(v2 + 72),
                   *(_DWORD *)(v2 + 12),
                   *(_DWORD *)(v2 + 16));
            if ( v6 < 0 && v3 >= 0 )
              v3 = v6;
            v5 = *++a1;
            if ( !*a1 )
              break;
            v2 = qword_140CF7760;
          }
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v3;
}
