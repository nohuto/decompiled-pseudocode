/*
 * XREFs of NestAsyncEvalObject @ 0x1C00683FC
 * Callers:
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 * Callees:
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     ReadObject @ 0x1C000B4C0 (ReadObject.c)
 *     PushCall @ 0x1C00219CC (PushCall.c)
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     GetObjectPath @ 0x1C0023A98 (GetObjectPath.c)
 *     GetThreadCurrentContext @ 0x1C0023FAC (GetThreadCurrentContext.c)
 *     LogSchedEvent @ 0x1C002A1C0 (LogSchedEvent.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     PrintObject @ 0x1C0066934 (PrintObject.c)
 *     PushPost @ 0x1C0068278 (PushPost.c)
 */

__int64 __fastcall NestAsyncEvalObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *ObjectPath; // rax
  char *v17; // rdx
  void *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx

  v7 = a3;
  byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  LogSchedEvent(1312904025, ThreadCurrentContext, a1, (__int64)EvalMethodComplete, ThreadCurrentContext);
  if ( ThreadCurrentContext )
  {
    a5 = 0LL;
    v12 = PushFrame((struct _SLIST_ENTRY *)ThreadCurrentContext, 1481917262, 0x80u, (__int64)ParseNestedContext, &a5);
    if ( !v12 )
    {
      v13 = a5;
      *(_QWORD *)(a5 + 32) = a1;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        v13 = a5;
      }
      *(_QWORD *)(v13 + 40) = a1;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        v13 = a5;
      }
      *(_QWORD *)(v13 + 88) = EvalMethodComplete;
      v14 = a6;
      *(_QWORD *)(v13 + 96) = a2;
      *(_QWORD *)(v13 + 104) = v14;
      *(_QWORD *)(v13 + 120) = *(_QWORD *)(ThreadCurrentContext + 104);
      *(_DWORD *)(v13 + 112) = *(_DWORD *)(ThreadCurrentContext + 64);
      LODWORD(v14) = *(_DWORD *)(ThreadCurrentContext + 64);
      *(_QWORD *)(ThreadCurrentContext + 104) = v13;
      *(_DWORD *)(ThreadCurrentContext + 64) = v14 & 0xFFFFFE7F | 0x80;
      if ( *(_WORD *)(a1 + 66) == 8 )
      {
        if ( !(unsigned int)PushCall((struct _SLIST_ENTRY *)ThreadCurrentContext, a1, v13 + 48) )
        {
          v15 = *(_QWORD *)(ThreadCurrentContext + 416);
          if ( (_DWORD)v7 == *(_DWORD *)(v15 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              ObjectPath = GetObjectPath(a1);
              v17 = byte_1C00701BA;
              v18 = ObjectPath;
              if ( ObjectPath )
                v17 = (char *)ObjectPath;
              ConPrintf("\nAMLI: %s(", v17);
              if ( v18 )
                ExFreePoolWithTag(v18, 0);
            }
            *(_DWORD *)(v15 + 56) = 0;
            if ( (_DWORD)v7 )
            {
              v19 = 0LL;
              while ( !(unsigned int)DupObjData(
                                       *(struct _SLIST_ENTRY **)(ThreadCurrentContext + 320),
                                       *(_QWORD *)(v15 + 64) + 40 * v19,
                                       a4 + 40 * v19) )
              {
                if ( (gDebugger & 0xD0) != 0 )
                {
                  PrintObject(a4 + 40LL * *(unsigned int *)(v15 + 56));
                  if ( *(_DWORD *)(v15 + 56) + 1 < (unsigned int)v7 )
                    ConPrintf(",");
                }
                v19 = (unsigned int)(*(_DWORD *)(v15 + 56) + 1);
                *(_DWORD *)(v15 + 56) = v19;
                if ( (unsigned int)v19 >= (unsigned int)v7 )
                  goto LABEL_23;
              }
            }
            else
            {
LABEL_23:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0xFFFF0000 | 2;
            }
          }
          else
          {
            LogError(-1072431093);
            AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431093);
            PrintDebugMessage(108, (const void *)v7, (const void *)*(unsigned int *)(v15 + 60), 0LL, 0LL);
          }
        }
      }
      else
      {
        v20 = v13 + 48;
        if ( !(unsigned int)PushPost(
                              (struct _SLIST_ENTRY *)ThreadCurrentContext,
                              (__int64)ProcessEvalObj,
                              a1,
                              0LL,
                              v13 + 48) )
          ReadObject(ThreadCurrentContext, a1 + 64, v20);
      }
      return 32772;
    }
  }
  else
  {
    v12 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(0LL, -1072431098);
    PrintDebugMessage(109, (const void *)a1, 0LL, 0LL, 0LL);
  }
  return v12;
}
