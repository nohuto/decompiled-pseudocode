/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0071E00
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxInternalDoSyncPaint @ 0x1C0071E00 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1C00C9754 (xxxDoSyncPaint.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C0071E00 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalDoSyncPaint(struct tagWND *a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  struct tagBWL *v6; // rbx
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 *ThreadWin32Thread; // rax
  char *v10; // r14
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]

  result = xxxSimpleDoSyncPaint(a1);
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (result = *((_QWORD *)a1 + 5), (*(_BYTE *)(result + 31) & 2) != 0) )
  {
    v5 = (_QWORD *)*((_QWORD *)a1 + 14);
    v6 = pbwlCache;
    v7 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      result = Win32AllocPoolZInit(296LL, 1819767637LL);
      v6 = (struct tagBWL *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 16) = result + 280;
    }
    *((_QWORD *)v6 + 1) = (char *)v6 + 32;
    for ( *((_QWORD *)v6 + 3) = 0LL; v5; v5 = (_QWORD *)v5[11] )
    {
      v12 = *((_QWORD *)v6 + 3);
      if ( !v12 || v12 == v5[2] )
      {
        **((_QWORD **)v6 + 1) = *v5;
        *((_QWORD *)v6 + 1) += 8LL;
        v13 = *((_QWORD *)v6 + 1);
        if ( v13 == *((_QWORD *)v6 + 2) )
        {
          v22 = v13 - (_QWORD)v6;
          v23 = UserReAllocPool(v6, (unsigned int)v22 + 8LL, (unsigned int)v22 + 72LL, 1819767637LL);
          if ( !v23 )
            break;
          v24 = v23 + v22;
          v6 = (struct tagBWL *)v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v23 + 16) = v24 + 64;
        }
      }
    }
    v8 = (_QWORD *)*((_QWORD *)v6 + 1);
    if ( (unsigned __int64)v8 >= *((_QWORD *)v6 + 2) )
    {
      return Win32FreePool(v6);
    }
    else
    {
      *v8 = 1LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v7 = *ThreadWin32Thread;
      *((_QWORD *)v6 + 3) = v7;
      v10 = (char *)v6 + 32;
      *((_QWORD *)v6 + 3) = gptiCurrent;
      *(_QWORD *)v6 = gpbwlList;
      gpbwlList = v6;
      for ( i = *((_QWORD *)v6 + 4); i != 1; v10 += 8 )
      {
        if ( i )
        {
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
          {
            v14 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)i * *((_DWORD *)&gSharedInfo + 4);
            v16 = (__int64 *)HMPkheFromPhe(v14);
            LOWORD(i) = WORD1(i) & 0x7FFF;
            if ( ((WORD1(i) & 0x7FFF) == *(_WORD *)(v14 + 26)
               || (_WORD)i == 0x7FFF
               || !(_WORD)i && PsGetCurrentProcessWow64Process(v15))
              && (*(_BYTE *)(v14 + 25) & 1) == 0
              && *(_BYTE *)(v14 + 24) == 1 )
            {
              v17 = *v16;
              if ( *v16 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v17 + 16) )
                {
                  v18 = *v16;
                  *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v25;
                  *((_QWORD *)&v25 + 1) = v17;
                  HMLockObject(v18);
                  xxxInternalDoSyncPaint(v17, a2);
                  ThreadUnlock1(v20, v19, v21);
                }
              }
            }
          }
        }
        i = *((_QWORD *)v10 + 1);
      }
      return FreeHwndList(v6);
    }
  }
  return result;
}
