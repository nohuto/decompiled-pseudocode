void __fastcall PopFxTracePerfRegistration(int *a1, char a2)
{
  int *v2; // rdi
  const EVENT_DESCRIPTOR *v5; // rbx
  const EVENT_DESCRIPTOR *v6; // r13
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r14d
  void *Pool2; // rbx
  unsigned int i; // r12d
  __int64 v13; // r15
  __int64 v14; // rbp
  unsigned int v15; // r8d
  __int64 j; // r9
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r11

  v2 = a1 + 36;
  if ( a2 )
  {
    v5 = &POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION_RUNDOWN;
  }
  else
  {
    v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFORMANCE_STATE_REGISTRATION;
    PopFxAddLogEntry(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
      *(_DWORD *)(*(_QWORD *)a1 + 16LL),
      12,
      (unsigned int)*v2);
  }
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, v5) )
  {
    PopDiagTraceFxPerfRegistration(
      v5,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
      *(_DWORD *)(*(_QWORD *)a1 + 16LL),
      *v2);
    v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION_RUNDOWN;
    if ( !a2 )
      v6 = &POP_ETW_EVENT_PERFORMANCE_STATE_SET_REGISTRATION;
    if ( EtwEventEnabled(PopDiagHandle, v6) )
    {
      v7 = 0;
      if ( *v2 )
      {
        v8 = *((_QWORD *)a1 + 19);
        v9 = (unsigned int)*v2;
        do
        {
          if ( !*(_DWORD *)(*(_QWORD *)v8 + 28LL) && *(_DWORD *)(*(_QWORD *)v8 + 32LL) > v7 )
            v7 = *(_DWORD *)(*(_QWORD *)v8 + 32LL);
          v8 += 32LL;
          --v9;
        }
        while ( v9 );
        v10 = 0;
        if ( v7 )
        {
          if ( 8 * (unsigned __int64)v7 > 0xFFFFFFFF )
            return;
          v10 = 8 * v7;
          Pool2 = (void *)ExAllocatePool2(256LL, 8 * v7, 1297630800LL);
          if ( !Pool2 )
            return;
          goto LABEL_21;
        }
      }
      else
      {
        v10 = 0;
      }
      Pool2 = 0LL;
LABEL_21:
      for ( i = 0; i < *v2; ++i )
      {
        v13 = 32LL * i;
        v14 = *(_QWORD *)(v13 + *((_QWORD *)a1 + 19));
        if ( *(_DWORD *)(v14 + 28) )
        {
          v17 = *(_QWORD *)(v14 + 32);
          v15 = 0;
          v19 = *(_QWORD *)(v14 + 40);
          v18 = 0LL;
        }
        else
        {
          memset(Pool2, 0, v10);
          v15 = *(_DWORD *)(v14 + 32);
          for ( j = 0LL; (unsigned int)j < v15; v15 = *(_DWORD *)(v14 + 32) )
          {
            *((_QWORD *)Pool2 + j) = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL * (unsigned int)j);
            j = (unsigned int)(j + 1);
          }
          LOBYTE(v17) = 0;
          v18 = (__int64)Pool2;
          LOBYTE(v19) = 0;
        }
        PopDiagTraceFxPerfSetRegistration(
          v6,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
          *(_DWORD *)(*(_QWORD *)a1 + 16LL),
          i,
          *(_DWORD *)(v14 + 28),
          *(_DWORD *)(v14 + 24),
          v17,
          v19,
          (unsigned __int16 *)v14,
          v15,
          v18,
          *(_QWORD *)(v13 + *((_QWORD *)a1 + 19) + 8));
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4D584650u);
    }
  }
}
