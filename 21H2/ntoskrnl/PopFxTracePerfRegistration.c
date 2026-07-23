/*
 * XREFs of PopFxTracePerfRegistration @ 0x1408EC19C
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x1406724C8 (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408E54E4 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopDiagTraceFxPerfRegistration @ 0x1408EA7F0 (PopDiagTraceFxPerfRegistration.c)
 *     PopDiagTraceFxPerfSetRegistration @ 0x1408EA880 (PopDiagTraceFxPerfSetRegistration.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopFxTracePerfRegistration(unsigned int *a1, char a2)
{
  const EVENT_DESCRIPTOR *v4; // rdi
  const EVENT_DESCRIPTOR *v5; // r13
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebp
  PVOID PoolWithTag; // rdi
  unsigned int i; // r15d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // r9d
  unsigned int v17; // r8d
  __int64 j; // r9
  __int64 v19; // r11
  __int64 v20; // r12
  __int64 v21; // r10

  if ( a2 )
  {
    v4 = &POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION_RUNDOWN;
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION;
    PopFxAddLogEntry(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
      *(_DWORD *)(*(_QWORD *)a1 + 16LL),
      12,
      a1[36]);
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v4) )
  {
    PopDiagTraceFxPerfRegistration(
      v4,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
      *(_DWORD *)(*(_QWORD *)a1 + 16LL),
      a1[36]);
    v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v5 = &POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION;
    if ( EtwEventEnabled(PopDiagHandle, v5) )
    {
      v6 = a1[36];
      v7 = 0;
      if ( v6 )
      {
        v8 = *((_QWORD *)a1 + 19);
        v9 = v6;
        do
        {
          if ( !*(_DWORD *)(*(_QWORD *)v8 + 28LL) && *(_DWORD *)(*(_QWORD *)v8 + 32LL) > v7 )
            v7 = *(_DWORD *)(*(_QWORD *)v8 + 32LL);
          v8 += 32LL;
          --v9;
        }
        while ( v9 );
      }
      v10 = 0;
      if ( v7 )
      {
        if ( 8 * (unsigned __int64)v7 > 0xFFFFFFFF )
          return;
        v10 = 8 * v7;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x4D584650u);
        if ( !PoolWithTag )
          return;
      }
      else
      {
        PoolWithTag = 0LL;
      }
      for ( i = 0; i < a1[36]; ++i )
      {
        v13 = *((_QWORD *)a1 + 19);
        v14 = 32LL * i;
        v15 = *(_QWORD *)(v14 + v13);
        v16 = *(_DWORD *)(v15 + 28);
        if ( v16 )
        {
          v19 = *(_QWORD *)(v15 + 32);
          v17 = 0;
          v20 = *(_QWORD *)(v15 + 40);
          v21 = 0LL;
        }
        else
        {
          memset(PoolWithTag, 0, v10);
          v17 = *(_DWORD *)(v15 + 32);
          for ( j = 0LL; (unsigned int)j < v17; v17 = *(_DWORD *)(v15 + 32) )
          {
            *((_QWORD *)PoolWithTag + j) = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL * (unsigned int)j);
            j = (unsigned int)(j + 1);
          }
          v13 = *((_QWORD *)a1 + 19);
          LOBYTE(v19) = 0;
          v16 = *(_DWORD *)(v15 + 28);
          LOBYTE(v20) = 0;
          v21 = (__int64)PoolWithTag;
        }
        PopDiagTraceFxPerfSetRegistration(
          v5,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
          *(_DWORD *)(*(_QWORD *)a1 + 16LL),
          i,
          v16,
          *(_DWORD *)(v15 + 24),
          v19,
          v20,
          (unsigned __int16 *)v15,
          v17,
          v21,
          *(_QWORD *)(v14 + v13 + 8));
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4D584650u);
    }
  }
}
