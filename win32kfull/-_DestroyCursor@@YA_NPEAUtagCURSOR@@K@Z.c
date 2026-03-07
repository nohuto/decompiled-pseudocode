// write access to const memory has been detected, the output may be wrong!
bool __fastcall _DestroyCursor(struct tagCURSOR *a1, unsigned int a2)
{
  int v3; // r15d
  int v4; // r13d
  char v5; // bl
  struct _HANDLEENTRY *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r14
  unsigned int i; // esi
  int v14; // esi
  __int64 v15; // rax
  struct tagCURSOR *v16; // rcx
  bool result; // al
  __int64 ProcessWin32Process; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct tagCURSOR *v23; // rax
  __int64 v24; // rcx
  struct tagCURSOR *v26; // [rsp+88h] [rbp+20h]

  v26 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v3 = 0;
  v4 = 0;
  if ( gbInDestroyHandleTableObjects )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 964LL);
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  v5 = 0;
  v6 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(a1);
  v7 = SGDGetUserSessionState(gbInDestroyHandleTableObjects);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 8)) == 1 )
  {
    if ( gphePrimaryDestroyTarget )
    {
      if ( v6 != gphePrimaryDestroyTarget )
        ++gcSecondaryDestroyTargets;
    }
    else
    {
      v5 = 1;
      MEMORY[0] = v6;
    }
  }
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v8 + 1272) & 0x8000000) != 0 )
    v8 = *(_QWORD *)(v8 + 1520);
  v10 = *(_QWORD *)(v8 + 424);
  v11 = 0LL;
  v12 = *((_QWORD *)a1 + 3);
  for ( i = 0; i < 5; ++i )
  {
    if ( *(struct tagCURSOR **)(gcachedCaptions[0] + v11) == a1 && !HMAssignmentUnlock(&gcachedCaptions[2 * i]) )
    {
      if ( v5 )
        gphePrimaryDestroyTarget = 0LL;
      return 1;
    }
    v11 += 16LL;
  }
  if ( !a2 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
    v19 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v19 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
    if ( *(_QWORD *)(_HMPkheFromObject(a1) + 8) == v19 && PsGetCurrentProcess(v21, v20, v22) == gpepCSRSS )
      FixupGlobalCursor(a1, v10);
    goto LABEL_22;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 && !v12 )
      goto LABEL_47;
LABEL_22:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      v14 = 1;
      *((_DWORD *)a1 + 20) |= 0x2000u;
      goto LABEL_24;
    }
    goto LABEL_55;
  }
  if ( !v12 )
  {
    v3 = 1;
    v14 = *((_DWORD *)a1 + 20) & 1;
    goto LABEL_24;
  }
  if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
  {
LABEL_47:
    v14 = 1;
    v3 = 1;
    goto LABEL_24;
  }
  if ( v12 == v10 )
    goto LABEL_22;
  UserSetLastError(1435);
LABEL_55:
  v14 = 0;
  v3 = 1;
LABEL_24:
  if ( v26 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v4 = 1;
  if ( v3 )
  {
    if ( v4 )
    {
      v23 = a1;
      do
      {
        *((_QWORD *)v23 + 6) = a1;
        v23 = (struct tagCURSOR *)*((_QWORD *)v23 + 5);
      }
      while ( v23 );
    }
  }
  else
  {
    v15 = *((_QWORD *)a1 + 6);
    if ( gpcurLogCurrent == (struct tagCURSOR *)v15 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
    }
    if ( v26 == a1 || v4 )
    {
      v16 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v16 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v16, a2);
      }
    }
    else
    {
      while ( v15 )
      {
        v24 = v15;
        v15 = *(_QWORD *)(v15 + 40);
        if ( (struct tagCURSOR *)v15 == a1 )
        {
          *(_QWORD *)(v24 + 40) = *((_QWORD *)a1 + 5);
          break;
        }
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    CleanupCursorObject(a1);
    if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 && !gbInDestroyHandleTableObjects )
      UnlinkCursor(a1);
    HMFreeObject(a1);
  }
  result = v14 != 0;
  if ( v5 )
    gphePrimaryDestroyTarget = 0LL;
  return result;
}
