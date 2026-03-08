/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x1C026E9E8
 * Callers:
 *     GetRemoteHDEV @ 0x1C0205C54 (GetRemoteHDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r15
  _DWORD *DisplayDriverNames; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  unsigned __int16 *v16; // rax
  __int64 v17; // r10
  int v18; // r9d
  int v19; // ecx

  v5 = 0LL;
  WdLogSingleEntry1(4LL, a1);
  if ( (unsigned int)UserIsDisconnectConnection(v6) || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    WdLogSingleEntry1(5LL, v5);
  }
  else
  {
    v8 = Gre::Base::Globals(v7);
    GreAcquireSemaphore(*((_QWORD *)v8 + 10));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v8 + 10), 1LL);
    v9 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v10 = 56LL * v9;
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + a1 + 40) + 2552LL);
        DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v11);
        v13 = DisplayDriverNames;
        if ( DisplayDriverNames )
        {
          v14 = *DisplayDriverNames;
          v15 = 0;
          if ( *DisplayDriverNames )
          {
            while ( 1 )
            {
              v16 = (unsigned __int16 *)v13[2 * v15 + 2];
              v17 = a3 - (_QWORD)v16;
              do
              {
                v18 = *(unsigned __int16 *)((char *)v16 + v17);
                v19 = *v16 - v18;
                if ( v19 )
                  break;
                ++v16;
              }
              while ( v18 );
              if ( !v19 && (*(_DWORD *)(v11 + 160) & 0x4000004) == 0x4000004 )
                break;
              if ( ++v15 >= v14 )
                goto LABEL_13;
            }
            v5 = *(_QWORD *)(v10 + a1 + 40);
            goto LABEL_16;
          }
LABEL_13:
          Win32FreePool(v13);
          v13 = 0LL;
        }
        ++v9;
      }
      while ( v9 < *(_DWORD *)(a1 + 20) );
      v5 = 0LL;
      if ( !v13 )
        goto LABEL_17;
LABEL_16:
      Win32FreePool(v13);
    }
LABEL_17:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 10));
    WdLogSingleEntry1(5LL, v5);
  }
  return v5;
}
