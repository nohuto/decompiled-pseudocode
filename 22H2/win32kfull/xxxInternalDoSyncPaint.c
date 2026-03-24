/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C006D4C0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D4C0 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1C00F4FD4 (xxxDoSyncPaint.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C006D4C0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D7A0 (xxxSimpleDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rdi
  struct tagBWL *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  char *v9; // r14
  __int64 v10; // rcx
  unsigned __int64 i; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int128 v31; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-38h]

  xxxSimpleDoSyncPaint((struct tagWND *)a1);
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 2) != 0 )
  {
    v4 = *(_QWORD **)(a1 + 112);
    v5 = pbwlCache;
    v32 = 0LL;
    v31 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v22 = Win32AllocPool(296LL, 1819767637LL);
      v5 = (struct tagBWL *)v22;
      if ( !v22 )
        return;
      *(_QWORD *)(v22 + 16) = v22 + 280;
    }
    *((_QWORD *)v5 + 3) = 0LL;
    for ( *((_QWORD *)v5 + 1) = (char *)v5 + 32; v4; v4 = (_QWORD *)v4[11] )
    {
      v6 = *((_QWORD *)v5 + 3);
      if ( !v6 || v6 == v4[2] )
      {
        **((_QWORD **)v5 + 1) = *v4;
        *((_QWORD *)v5 + 1) += 8LL;
        v7 = *((_QWORD *)v5 + 1);
        if ( v7 == *((_QWORD *)v5 + 2) )
        {
          v23 = v7 - (_QWORD)v5;
          v24 = UserReAllocPool(v5, (unsigned int)v23 + 8LL, (unsigned int)v23 + 72LL, 1819767637LL);
          if ( !v24 )
            break;
          v25 = v24 + v23;
          v5 = (struct tagBWL *)v24;
          *(_QWORD *)(v24 + 8) = v25;
          *(_QWORD *)(v24 + 16) = v25 + 64;
        }
      }
    }
    v8 = (_QWORD *)*((_QWORD *)v5 + 1);
    if ( (unsigned __int64)v8 >= *((_QWORD *)v5 + 2) )
    {
      Win32FreePool(v5);
    }
    else
    {
      *v8 = 1LL;
      v9 = (char *)v5 + 32;
      *((_QWORD *)v5 + 3) = gptiCurrent;
      v10 = gpbwlList;
      *(_QWORD *)v5 = gpbwlList;
      gpbwlList = v5;
      for ( i = *((_QWORD *)v5 + 4); i != 1; v9 += 8 )
      {
        if ( i )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v10)
            || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            PsGetThreadWin32Thread(CurrentThread);
          }
          v10 = gpsi;
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
          {
            v16 = gSharedInfo[1] + (unsigned int)(unsigned __int16)i * LODWORD(gSharedInfo[2]);
            v17 = i >> 16;
            v18 = (__int64 *)HMPkheFromPhe(v16);
            if ( ((_WORD)v17 == *(_WORD *)(v16 + 26)
               || (_WORD)v17 == 0xFFFF
               || !(_WORD)v17 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10)) != 0)
              && (*(_BYTE *)(v16 + 25) & 1) == 0
              && *(_BYTE *)(v16 + 24) == 1 )
            {
              v19 = *v18;
              if ( *v18 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v19 + 16) )
                {
                  v20 = *v18;
                  *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v31;
                  *((_QWORD *)&v31 + 1) = v19;
                  HMLockObject(v20);
                  xxxInternalDoSyncPaint(v19, a2);
                  ThreadUnlock1(v21);
                }
              }
            }
          }
        }
        i = *((_QWORD *)v9 + 1);
      }
      FreeHwndList(v5);
    }
  }
}
