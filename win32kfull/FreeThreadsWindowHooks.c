/*
 * XREFs of FreeThreadsWindowHooks @ 0x1C00C92A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHook @ 0x1C0039160 (FreeHook.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C00C9380 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 */

void FreeThreadsWindowHooks()
{
  __int64 v0; // rsi
  __int64 v1; // rbx
  __int64 v2; // rbp

  if ( gptiCurrent && *(_QWORD *)(gptiCurrent + 456LL) )
  {
    HMAssignmentUnlock(gptiCurrent + 688LL);
    v0 = 40LL;
    while ( 1 )
    {
      v1 = *(_QWORD *)(gptiCurrent + v0 + 880);
      if ( v1 )
        break;
      v1 = *(_QWORD *)(v0 + *(_QWORD *)(gptiCurrent + 464LL));
      if ( v1 )
        break;
LABEL_6:
      v0 += 8LL;
      if ( v0 > 160 )
      {
        *(_DWORD *)(gptiCurrent + 680LL) = 0;
        return;
      }
    }
    while ( 1 )
    {
      v2 = *(_QWORD *)(v1 + 40);
      if ( v2 || (*(_DWORD *)(v1 + 64) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v1 + 64) & 1) != 0 )
          goto LABEL_13;
      }
      else
      {
        v2 = *(_QWORD *)(v0 + *(_QWORD *)(gptiCurrent + 464LL));
      }
      UnlinkHook((struct tagHOOK *)v1);
      *(_DWORD *)(v1 + 64) |= 0x80u;
      *(_QWORD *)(v1 + 40) = 0LL;
LABEL_13:
      if ( *(_QWORD *)(v1 + 16) == gptiCurrent )
        FreeHook((struct tagHOOK *)v1);
      v1 = v2;
      if ( !v2 )
        goto LABEL_6;
    }
  }
}
