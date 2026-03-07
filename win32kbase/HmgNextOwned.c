__int64 __fastcall HmgNextOwned(PEPROCESS a1, int a2, struct HOBJ__ **a3)
{
  void *v3; // r12
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v7; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r10
  __int64 v13; // rsi
  unsigned int v14; // ebp
  unsigned int v15; // r14d
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  struct HOBJ__ *v22; // rax
  PEPROCESS Process; // [rsp+78h] [rbp+20h] BYREF

  v3 = (void *)a2;
  v4 = (unsigned int)a1;
  if ( !a2 || a2 == -2147483630 )
    goto LABEL_14;
  Process = 0LL;
  if ( a2 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( !CurrentProcessWin32Process )
      goto LABEL_35;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
  }
  else
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_35;
    CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
    if ( !CurrentProcessWin32Process )
      goto LABEL_35;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
  }
  if ( CurrentProcessWin32Process && !*(_DWORD *)(CurrentProcessWin32Process + 64) )
  {
    v7 = 0;
    goto LABEL_10;
  }
LABEL_35:
  v7 = 1;
LABEL_10:
  a1 = Process;
  if ( Process )
    ObfDereferenceObject(Process);
  if ( !v7 )
    return 0LL;
LABEL_14:
  GreAcquireHmgrSemaphore((__int64)a1);
  v11 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 8008);
    while ( 1 )
    {
      if ( ++v4 >= *(_DWORD *)v12 )
        goto LABEL_36;
      v13 = *(_QWORD *)(v12 + 16);
      v14 = *(_DWORD *)(v13 + 2056);
      v15 = v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16);
      if ( v4 < v15 )
      {
        if ( v4 >= v14 )
        {
          v10 = ((v4 - v14) >> 16) + 1;
          v16 = *(_QWORD *)(v13 + 8 * v10 + 8);
          v17 = v4 + -65536 * ((v4 - v14) >> 16) - v14;
        }
        else
        {
          v16 = *(_QWORD *)(v13 + 8);
          v17 = v4;
        }
        v18 = 0LL;
        if ( v17 < *(_DWORD *)(v16 + 20) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                          + 16LL * (unsigned __int8)v17
                          + 8);
          if ( v10 )
          {
            v10 = 3LL * v17;
            v18 = *(_QWORD *)v16 + 24LL * v17;
          }
        }
        if ( v18 )
          break;
      }
    }
    if ( !v4 )
    {
LABEL_36:
      v4 = 0;
      break;
    }
    if ( *(_BYTE *)(v18 + 14) && ((*(_DWORD *)(v18 + 8) ^ (unsigned int)v3 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
      v19 = GdiHandleManager::DecodeIndex(*(GdiHandleEntryDirectory ***)(v11 + 8008), v4);
      v20 = v19;
      if ( v19 >= v15
        || (v19 >= v14
          ? (v21 = *(_QWORD *)(v13 + 8LL * (((v19 - v14) >> 16) + 1) + 8), v20 = -65536 * ((v19 - v14) >> 16)
                                                                               - v14
                                                                               + v19)
          : (v21 = *(_QWORD *)(v13 + 8)),
            (unsigned int)v20 >= *(_DWORD *)(v21 + 20)) )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
      }
      if ( (*(_BYTE *)(v18 + 15) & 0x40) == 0
        || *(_WORD *)(v10 + 12) && *(struct _KTHREAD **)(v10 + 16) == KeGetCurrentThread() )
      {
        v22 = HmgpComputeHandleValue((const struct OBJECT *)v10, v4, (struct ENTRYOBJ *const)v18);
        v10 = (__int64)a3;
        *a3 = v22;
        if ( v22 )
          break;
      }
    }
  }
  GreReleaseHmgrSemaphore(v10);
  return v4;
}
