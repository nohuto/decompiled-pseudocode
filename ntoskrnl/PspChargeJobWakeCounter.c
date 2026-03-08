/*
 * XREFs of PspChargeJobWakeCounter @ 0x1406FBDC4
 * Callers:
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 *     PspChargeProcessWakeCounter @ 0x1407CA2E0 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1406FBFEC (PspLockRootJobShared.c)
 *     PspSendWakeNotification @ 0x140751A40 (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1409E306C (EtwTraceWakeCounter.c)
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
  int v8; // esi
  char *v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // rax
  signed __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  bool v16; // si
  int v17; // ecx
  int v18; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+90h] [rbp+8h]

  v21 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v8 = (int)Object;
  v9 = Object;
  v10 = a3;
  v20 = CurrentThread;
  v19[0] = 0LL;
  v11 = 1 << a3;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, v19);
  do
  {
    if ( (a5 & 1) != 0 )
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    v12 = 1160LL;
    if ( (a5 & 4) == 0 )
      v12 = 8 * v10 + 1104;
    v13 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)&v9[v12], a4);
    if ( (a5 & 4) != 0 )
    {
      if ( *((_DWORD *)v9 + 262) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140D1EAD0 & 0x200) != 0 )
          EtwTraceWakeCounter(v8, v10, 0, a6, a7);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    }
    else
    {
      v14 = *((_DWORD *)v9 + 384);
      v15 = *((_QWORD *)v9 + 146);
      v19[1] = v15;
      v16 = (v14 & 0x800) != 0;
      if ( (v14 & 0x800) != 0 && !v13 && (HIDWORD(v15) & v11) == 0 )
      {
        v16 = 0;
        _InterlockedOr((volatile signed __int32 *)v9 + 294, v11);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v16 )
      {
        v17 = 6;
        if ( a4 <= 0 )
          v17 = 0;
        v18 = v17 | 1;
        if ( (a5 & 1) == 0 )
          v18 = v17;
        PspSendWakeNotification(v9, v18);
      }
      v8 = v21;
    }
    v9 = (char *)*((_QWORD *)v9 + 161);
  }
  while ( v9 != a2 && (*((_DWORD *)v9 + 384) & 0x1000) != 0 );
  if ( (a5 & 1) != 0 )
    PspUnlockJob(v19[0], v20);
}
