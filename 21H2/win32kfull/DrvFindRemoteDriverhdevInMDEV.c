/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x1C0271650
 * Callers:
 *     GetRemoteHDEV @ 0x1C021FBE4 (GetRemoteHDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r14
  _DWORD *DisplayDriverNames; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // r11d
  int v12; // r8d
  unsigned __int16 *v13; // rax
  __int64 v14; // r10
  int v15; // r9d
  int v16; // ecx

  v5 = 0LL;
  WdLogSingleEntry1(4LL, a1);
  if ( (unsigned int)UserIsDisconnectConnection(v6) || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    WdLogSingleEntry1(5LL, v5);
  }
  else
  {
    GreAcquireSemaphore(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
    v7 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(56LL * v7 + a1 + 40) + 2552LL);
        DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v8);
        v10 = DisplayDriverNames;
        if ( DisplayDriverNames )
        {
          v11 = *DisplayDriverNames;
          v12 = 0;
          if ( *DisplayDriverNames )
          {
            while ( 1 )
            {
              v13 = *(unsigned __int16 **)&v10[4 * v12 + 4];
              v14 = a3 - (_QWORD)v13;
              do
              {
                v15 = *(unsigned __int16 *)((char *)v13 + v14);
                v16 = *v13 - v15;
                if ( v16 )
                  break;
                ++v13;
              }
              while ( v15 );
              if ( !v16 && (*(_DWORD *)(v8 + 160) & 0x4000004) == 0x4000004 )
                break;
              if ( ++v12 >= v11 )
                goto LABEL_13;
            }
            v5 = *(_QWORD *)(56LL * v7 + a1 + 40);
            goto LABEL_16;
          }
LABEL_13:
          Win32FreePool(v10);
          v10 = 0LL;
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(a1 + 20) );
      v5 = 0LL;
      if ( !v10 )
        goto LABEL_17;
LABEL_16:
      Win32FreePool(v10);
    }
LABEL_17:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    WdLogSingleEntry1(5LL, v5);
  }
  return v5;
}
