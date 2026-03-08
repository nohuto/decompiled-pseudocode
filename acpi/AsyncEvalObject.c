/*
 * XREFs of AsyncEvalObject @ 0x1C00544D0
 * Callers:
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C004DE10 (DebugRunMethod.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 * Callees:
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00078AC (AcpiDiagTraceAmlEvaluation.c)
 *     AcpiDiagTraceFrequentAmlEvaluation @ 0x1C0008574 (AcpiDiagTraceFrequentAmlEvaluation.c)
 *     AmliEnableWatchdog @ 0x1C0046DC8 (AmliEnableWatchdog.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C004AC40 (AMLIReadNamespaceOverrideObject.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     GetObjectPath @ 0x1C004BB70 (GetObjectPath.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     LogSchedEvent @ 0x1C004E3AC (LogSchedEvent.c)
 *     PrintObject @ 0x1C004E4C8 (PrintObject.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 *     FreeContext @ 0x1C0053624 (FreeContext.c)
 *     NewContext @ 0x1C00539EC (NewContext.c)
 *     PushCall @ 0x1C0053AF8 (PushCall.c)
 *     PushPost @ 0x1C0053CE0 (PushPost.c)
 *     ConvertMethodNameToUnicode @ 0x1C0059798 (ConvertMethodNameToUnicode.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r15
  KIRQL CurrentIrql; // al
  unsigned int v12; // ebx
  __int16 v13; // ax
  __int64 v14; // rcx
  char *v15; // rdi
  __int64 *v16; // rdx
  void *ObjectPath; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  unsigned int Object; // eax
  __int64 v22; // rbp
  __int64 v24; // rax
  struct _KTHREAD *CurrentThread; // rdx
  char *v26; // r8
  void *v27; // rbx
  __int64 v28; // rax
  PVOID Entry; // [rsp+30h] [rbp-28h] BYREF

  Entry = 0LL;
  v8 = a3;
  CurrentIrql = KeGetCurrentIrql();
  LogSchedEvent(1095981390, 0LL, CurrentIrql, a1, 0LL);
  v12 = NewContext((char **)&Entry);
  if ( !v12 )
  {
    v13 = *(_WORD *)(a1 + 64);
    if ( (v13 & 0x400) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 136);
    }
    else
    {
      v14 = 0LL;
      if ( (v13 & 0x200) != 0 )
        v14 = a1;
    }
    v15 = (char *)Entry;
    v16 = (__int64 *)((char *)Entry + 72);
    *((_QWORD *)Entry + 9) = a1;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(a1 + 112), 1u);
      v15 = (char *)Entry;
    }
    *((_QWORD *)v15 + 10) = a1;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(a1 + 112), 1u);
      v15 = (char *)Entry;
    }
    if ( v14 )
    {
      *((_QWORD *)v15 + 53) = v14;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v14 + 112), 1u);
        v15 = (char *)Entry;
      }
      a1 = v14;
    }
    *((_QWORD *)v15 + 21) = a5;
    *((_QWORD *)v15 + 22) = a2;
    *((_QWORD *)v15 + 23) = a6;
    ObjectPath = (void *)GetObjectPath(*v16);
    RtlInitUnicodeString((PUNICODE_STRING)(v15 + 440), 0LL);
    ConvertMethodNameToUnicode(ObjectPath, v15 + 440);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
    v18 = *((_QWORD *)v15 + 58);
    if ( v18 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      if ( v19 )
      {
        v20 = *(_WORD *)(v19 + 66);
        if ( v20 == 6 || (unsigned __int16)(v20 - 12) <= 1u )
          *(_QWORD *)(v18 + 8) = *(_QWORD *)(v19 + 104);
      }
      AmliEnableWatchdog(*((char **)v15 + 58));
    }
    AcpiDiagTraceFrequentAmlEvaluation((__int64)v15);
    AcpiDiagTraceAmlEvaluation((__int64)v15, 1u);
    if ( a7 )
      *((_DWORD *)v15 + 16) |= 0x100u;
    if ( (*(_WORD *)(a1 + 64) & 0x180) != 0 )
    {
      v12 = PushPost((__int64)v15, (__int64)ProcessEvalObj, a1, 0LL, (__int64)(v15 + 128));
      if ( !v12 )
      {
        Object = AMLIReadNamespaceOverrideObject((__int64)v15, a1, (__int64)(v15 + 128));
        goto LABEL_51;
      }
    }
    else
    {
      if ( *(_WORD *)(a1 + 66) == 8 )
      {
        v12 = PushCall((__int64)v15, a1, (__int64)(v15 + 128));
        if ( !v12 )
        {
          v22 = *((_QWORD *)v15 + 52);
          if ( (_DWORD)v8 == *(_DWORD *)(v22 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              v24 = GetObjectPath(a1);
              CurrentThread = KeGetCurrentThread();
              v26 = byte_1C00622D0;
              v27 = (void *)v24;
              if ( v24 )
                v26 = (char *)v24;
              ConPrintf("\nAMLI: %p: %s(", CurrentThread, v26);
              if ( v27 )
                ExFreePoolWithTag(v27, 0);
              v15 = (char *)Entry;
            }
            *(_DWORD *)(v22 + 56) = 0;
            if ( !(_DWORD)v8 )
            {
LABEL_46:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_DWORD *)(v22 + 16) = *(_DWORD *)(v22 + 16) & 0xFFFF0000 | 2;
              return (unsigned int)RestartContext((__int64)v15, 0);
            }
            v28 = 0LL;
            while ( 1 )
            {
              v12 = DupObjData(*((_QWORD *)v15 + 40), *(_QWORD *)(v22 + 64) + 40 * v28, a4 + 40 * v28);
              if ( v12 )
                break;
              if ( (gDebugger & 0xD0) != 0 )
              {
                PrintObject(a4 + 40LL * *(unsigned int *)(v22 + 56));
                if ( *(_DWORD *)(v22 + 56) + 1 < (unsigned int)v8 )
                  ConPrintf(",");
              }
              v28 = (unsigned int)(*(_DWORD *)(v22 + 56) + 1);
              *(_DWORD *)(v22 + 56) = v28;
              if ( (unsigned int)v28 >= (unsigned int)v8 )
                goto LABEL_46;
            }
          }
          else
          {
            v12 = -1072431093;
            LogError(-1072431093);
            AcpiDiagTraceAmlError((__int64)v15, -1072431093);
            PrintDebugMessage(12, (const void *)v8, (const void *)*(unsigned int *)(v22 + 60), 0LL, 0LL);
          }
        }
        goto LABEL_31;
      }
      v12 = PushPost((__int64)v15, (__int64)ProcessEvalObj, a1, 0LL, (__int64)(v15 + 128));
      if ( !v12 )
      {
        Object = ReadObject((__int64)v15, a1 + 64, (__int64)(v15 + 128));
LABEL_51:
        v12 = Object;
        if ( Object != 32772 )
          return (unsigned int)RestartContext((__int64)v15, 0);
      }
    }
LABEL_31:
    FreeContext(v15);
  }
  return v12;
}
