/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x1409E97F4
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlRandomEx @ 0x1402A6210 (RtlRandomEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409E94C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     PidNodeCompare @ 0x1409E9FC0 (PidNodeCompare.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(_DWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebx
  struct _LIST_ENTRY *Flink; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // r12
  _DWORD *v9; // rdi
  unsigned __int16 v10; // bp
  unsigned int i; // r14d
  bool v12; // zf
  unsigned __int64 v13; // rdi
  int v14; // esi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 **v17; // rdi
  __int64 *j; // rcx
  PEPROCESS Process; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v5 = 0;
  Process = 0LL;
  v24 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64)&Flink[255];
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( (_DWORD)v3 )
  {
    v9 = a1;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v9, &Process) )
      {
        *v9 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess((__int64)Process) )
          *v9 = 0;
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      }
      v9 += 2;
      --v3;
    }
    while ( v3 );
LABEL_9:
    LODWORD(v3) = a2;
  }
  do
    v10 = RtlRandomEx((PULONG)&Process) & 0x7FFF;
  while ( v10 < 0x40u );
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    if ( a1[2 * i] )
    {
      v12 = (*(_BYTE *)(v8 + 8) & 1) == 0;
      v13 = *(_QWORD *)v8;
      LODWORD(Process) = a1[2 * i];
      if ( !v12 )
      {
        if ( v13 )
          v13 ^= v8;
        else
          v13 = 0LL;
      }
      v14 = *(_BYTE *)(v8 + 8) & 1;
      while ( v13 )
      {
        v15 = PidNodeCompare(&Process, v13);
        if ( v15 >= 0 )
        {
          if ( v15 <= 0 )
            break;
          v16 = *(_QWORD *)(v13 + 8);
        }
        else
        {
          v16 = *(_QWORD *)v13;
        }
        if ( v14 && v16 )
          v13 ^= v16;
        else
          v13 = v16;
      }
      if ( v13 )
      {
        v17 = (__int64 **)(v13 + 32);
        for ( j = *v17; j != (__int64 *)v17; j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 9) == v10 )
            goto LABEL_9;
          if ( *((_WORD *)j + 8) == LOWORD(a1[2 * i + 1]) )
          {
            if ( *((_WORD *)j + 10) != HIWORD(a1[2 * i + 1]) )
              break;
            *((_WORD *)j + 9) = v10;
            v24 = 1;
          }
        }
      }
      LODWORD(v3) = a2;
    }
  }
  ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v24 )
    *a3 = v10;
  else
    return (unsigned int)-1073741275;
  return v5;
}
