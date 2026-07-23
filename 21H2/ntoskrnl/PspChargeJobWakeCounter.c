/*
 * XREFs of PspChargeJobWakeCounter @ 0x140681A78
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PspSendWakeNotification @ 0x14067FDF8 (PspSendWakeNotification.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1406824D4 (PspLockRootJobShared.c)
 *     EtwTraceWakeCounter @ 0x140936A78 (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(
        char *Object,
        char *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // r13
  int v8; // ebp
  char *v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  bool v17; // bp
  char v18; // cl
  char v19; // al
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *v22; // [rsp+40h] [rbp-48h]
  int v23; // [rsp+90h] [rbp+8h]

  v23 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v8 = (int)Object;
  v9 = Object;
  v10 = a3;
  v22 = CurrentThread;
  v20 = 0LL;
  v11 = 1 << a3;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, &v20);
  do
  {
    if ( (a5 & 1) != 0 )
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    v12 = 944LL;
    if ( (a5 & 4) == 0 )
      v12 = 8 * v10 + 888;
    v13 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)&v9[v12], a4);
    if ( (a5 & 4) != 0 )
    {
      if ( *((_DWORD *)v9 + 214) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140CFC490 & 0x200) != 0 )
          EtwTraceWakeCounter(v8, v10, 0, a6, a7);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    }
    else
    {
      v14 = *((_QWORD *)v9 + 119);
      v15 = (*((_DWORD *)v9 + 330) & 0x800) == 0;
      v16 = *((_DWORD *)v9 + 330) & 0x800;
      v21 = v14;
      v17 = !v15;
      if ( v16 && !v13 && (HIDWORD(v14) & v11) == 0 )
      {
        v17 = 0;
        _InterlockedOr((volatile signed __int32 *)v9 + 240, v11);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v17 )
      {
        v18 = 6;
        if ( a4 <= 0 )
          v18 = 0;
        v19 = v18 | 1;
        if ( (a5 & 1) == 0 )
          v19 = v18;
        PspSendWakeNotification(v9, v10, &v21, v13, v19);
      }
      v8 = v23;
    }
    v9 = (char *)*((_QWORD *)v9 + 134);
  }
  while ( v9 != a2 && (*((_DWORD *)v9 + 330) & 0x1000) != 0 );
  if ( (a5 & 1) != 0 )
    PspUnlockJob(v20, v22);
}
