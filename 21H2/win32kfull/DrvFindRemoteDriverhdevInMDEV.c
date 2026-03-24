/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x1C02739AC
 * Callers:
 *     GetRemoteHDEV @ 0x1C0226328 (GetRemoteHDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r15
  _DWORD *DisplayDriverNames; // rax
  void *v11; // rdx
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  unsigned __int16 *v14; // rax
  __int64 v15; // r10
  int v16; // r9d
  int v17; // ecx
  __int64 v18; // rax
  __int64 v20; // rbx
  __int64 v21; // rax

  v5 = 0LL;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = a1;
  WdLogEvent5_WdEvent(v6);
  if ( (unsigned int)UserIsDisconnectConnection(v7) || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v20 = *(_QWORD *)(a1 + 40);
    v21 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdTrace(v21);
    return v20;
  }
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  v8 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_19;
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(56LL * v8 + a1 + 40) + 2576LL);
    DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v9);
    v11 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    if ( ++v8 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_17;
  }
  v12 = *DisplayDriverNames;
  v13 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool(v11);
    v11 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v14 = (unsigned __int16 *)*((_QWORD *)v11 + 2 * v13 + 2);
    v15 = a3 - (_QWORD)v14;
    do
    {
      v16 = *(unsigned __int16 *)((char *)v14 + v15);
      v17 = *v14 - v16;
      if ( v17 )
        break;
      ++v14;
    }
    while ( v16 );
    if ( !v17 && (*(_DWORD *)(v9 + 160) & 0x4000004) == 0x4000004 )
      break;
    if ( ++v13 >= v12 )
      goto LABEL_13;
  }
  v5 = *(_QWORD *)(56LL * v8 + a1 + 40);
LABEL_17:
  if ( v11 )
    Win32FreePool(v11);
LABEL_19:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  v18 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v18 + 24) = v5;
  WdLogEvent5_WdTrace(v18);
  return v5;
}
