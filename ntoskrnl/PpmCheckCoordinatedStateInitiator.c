/*
 * XREFs of PpmCheckCoordinatedStateInitiator @ 0x140581A80
 * Callers:
 *     PpmCheckCoordinatedStateInitiator @ 0x140581A80 (PpmCheckCoordinatedStateInitiator.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14097EDD0 (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     PpmCheckCoordinatedStateInitiator @ 0x140581A80 (PpmCheckCoordinatedStateInitiator.c)
 */

char __fastcall PpmCheckCoordinatedStateInitiator(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 i; // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax

  LOBYTE(a4) = 0;
  v4 = 0;
  if ( a2 )
  {
    for ( i = a3 + 8; ; i += 24LL )
    {
      v8 = *(_DWORD *)(i - 8);
      if ( v8 == -1 || v8 == a1 )
      {
        v9 = 0LL;
        if ( *(_DWORD *)i )
          break;
      }
LABEL_10:
      if ( ++v4 >= a2 )
        return a4;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(i + 8);
      if ( *(_BYTE *)(v10 + 24 * v9 + 1) )
      {
        if ( *(_DWORD *)(i - 8) != -1 )
        {
          LOBYTE(a4) = 1;
          return a4;
        }
        LOBYTE(a4) = PpmCheckCoordinatedStateInitiator(
                       a1,
                       *(unsigned int *)(v10 + 24 * v9 + 8),
                       *(_QWORD *)(v10 + 24 * v9 + 16),
                       a4);
        if ( (_BYTE)a4 )
          return a4;
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)i )
        goto LABEL_10;
    }
  }
  return a4;
}
