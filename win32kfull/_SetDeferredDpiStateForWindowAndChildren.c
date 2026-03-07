// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(struct tagWND *a1, int a2, int a3)
{
  __int64 v4; // rcx
  struct tagBWL *v7; // rax
  struct tagBWL *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  _DWORD *v19; // rax
  _DWORD *v21; // rax
  _DWORD *v22; // rcx
  __int16 v23; // [rsp+60h] [rbp+8h]

  v4 = *((_QWORD *)a1 + 5);
  if ( a2 == (*(_WORD *)(v4 + 286) != 0) || (*((_DWORD *)a1 + 80) & 0x40) != 0 && !a3 )
    return 0LL;
  if ( a2 )
    v23 = *(_WORD *)(v4 + 284);
  else
    v23 = 0;
  v7 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v7 = (struct tagBWL *)Win32AllocPoolZInit(296LL, 1819767637LL);
    if ( !v7 )
      return 0LL;
    *((_QWORD *)v7 + 2) = (char *)v7 + 280;
  }
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 1) = (char *)v7 + 32;
  v8 = InternalBuildHwndList(v7, a1, 1u);
  v9 = (_QWORD *)*((_QWORD *)v8 + 1);
  if ( (unsigned __int64)v9 >= *((_QWORD *)v8 + 2) )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  *v9 = 1LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  v12 = (_QWORD *)((char *)v8 + 32);
  *((_QWORD *)v8 + 3) = v10;
  *((_QWORD *)v8 + 3) = gptiCurrent;
  *(_QWORD *)v8 = gpbwlList;
  gpbwlList = v8;
  v13 = *((_QWORD *)v8 + 4);
  if ( v13 != 1 )
  {
    do
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
      {
        v14 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v13;
        v16 = (__int64 *)HMPkheFromPhe(v14);
        LOWORD(v13) = WORD1(v13) & 0x7FFF;
        if ( ((WORD1(v13) & 0x7FFF) == *(_WORD *)(v14 + 26)
           || (_WORD)v13 == 0x7FFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(v15))
          && (*(_BYTE *)(v14 + 25) & 1) == 0
          && *(_BYTE *)(v14 + 24) == 1 )
        {
          v17 = *v16;
          if ( *v16 )
          {
            if ( (*(_DWORD *)(v17 + 320) & 0x40) == 0 || a3 || a2 )
            {
              *(_WORD *)(*(_QWORD *)(v17 + 40) + 286LL) = v23;
              v18 = *(_QWORD *)(v17 + 296);
              if ( a2 )
              {
                if ( v18 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2784LL);
                v19 = (_DWORD *)*((_QWORD *)a1 + 36);
                *(_QWORD *)(v17 + 296) = v19;
                ++*v19;
              }
              else
              {
                if ( !v18 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2788LL);
                v21 = *(_DWORD **)(v17 + 296);
                if ( v21 )
                {
                  --*v21;
                  v22 = *(_DWORD **)(v17 + 296);
                  if ( !*v22 )
                    Win32FreePool(v22);
                  *(_QWORD *)(v17 + 296) = 0LL;
                }
              }
            }
          }
        }
      }
      v13 = *++v12;
    }
    while ( *v12 != 1LL );
  }
  if ( a3 && a2 )
    *((_DWORD *)a1 + 80) |= 0x40u;
  else
    *((_DWORD *)a1 + 80) &= ~0x40u;
  FreeHwndList(v8);
  return 1LL;
}
