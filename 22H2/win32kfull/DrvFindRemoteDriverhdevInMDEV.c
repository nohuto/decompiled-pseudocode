/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x1C026BF38
 * Callers:
 *     GetRemoteHDEV @ 0x1C0203084 (GetRemoteHDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // r15
  _DWORD *DisplayDriverNames; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // r11d
  unsigned int v18; // r8d
  unsigned __int16 *v19; // rax
  __int64 v20; // r10
  int v21; // r9d
  int v22; // ecx

  v5 = 0LL;
  WdLogSingleEntry1(4LL, a1);
  if ( (unsigned int)UserIsDisconnectConnection(v7, v6, v8, v9) || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    WdLogSingleEntry1(5LL, v5);
  }
  else
  {
    v11 = Gre::Base::Globals(v10);
    GreAcquireSemaphore(*((_QWORD *)v11 + 10));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v11 + 10), 1LL);
    v12 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      do
      {
        v13 = 56LL * v12;
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + a1 + 40) + 2552LL);
        DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v14);
        v16 = DisplayDriverNames;
        if ( DisplayDriverNames )
        {
          v17 = *DisplayDriverNames;
          v18 = 0;
          if ( *DisplayDriverNames )
          {
            while ( 1 )
            {
              v19 = (unsigned __int16 *)v16[2 * v18 + 2];
              v20 = a3 - (_QWORD)v19;
              do
              {
                v21 = *(unsigned __int16 *)((char *)v19 + v20);
                v22 = *v19 - v21;
                if ( v22 )
                  break;
                ++v19;
              }
              while ( v21 );
              if ( !v22 && (*(_DWORD *)(v14 + 160) & 0x4000004) == 0x4000004 )
                break;
              if ( ++v18 >= v17 )
                goto LABEL_13;
            }
            v5 = *(_QWORD *)(v13 + a1 + 40);
            goto LABEL_16;
          }
LABEL_13:
          Win32FreePool(v16);
          v16 = 0LL;
        }
        ++v12;
      }
      while ( v12 < *(_DWORD *)(a1 + 20) );
      v5 = 0LL;
      if ( !v16 )
        goto LABEL_17;
LABEL_16:
      Win32FreePool(v16);
    }
LABEL_17:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 10));
    WdLogSingleEntry1(5LL, v5);
  }
  return v5;
}
