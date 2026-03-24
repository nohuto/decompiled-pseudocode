/*
 * XREFs of PopPolicyWorkerAction @ 0x140775870
 * Callers:
 *     PopPolicyWorkerThread @ 0x1402C4F30 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140281B10 (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x140382B6C (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PopCompleteAction @ 0x140773D74 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerAction(int a1)
{
  char v1; // si
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v7; // ebp
  LONG v8; // edi
  __int64 *i; // rbx
  int v10; // ecx
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  LONG v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]

  v1 = 0;
  PopAcquirePolicyLock(a1);
  qword_140C235F0 = (__int64)KeGetCurrentThread();
  if ( byte_140C23441 == 1 )
  {
    v4 = (int)qword_140C23444;
    v5 = HIDWORD(qword_140C23444);
    v6 = dword_140C2344C;
    PopSetPowerActionState(2);
    v7 = dword_140C23454;
    v8 = PopIssueActionRequest(0LL, (unsigned int)v4, v5, v6);
    v1 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140C23444) == 5 )
        v7 = 6;
      dword_140C23454 = v7;
      dword_140C2344C = dword_140C2344C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      v10 = 2;
    }
    else
    {
      if ( (xmmword_140CFC490 & 0x8000) != 0 )
      {
        v14 = 0;
        v17 = 0;
        v15 = &v12;
        v12 = v4;
        v13 = v8;
        v16 = 16;
        EtwTraceKernelEvent((int)&v15, 1, 0x80008000, 4643, 4200450);
      }
      dword_140C23450 = v8;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v8);
      v10 = 1;
    }
    PopGetPolicyWorker(v10);
  }
  qword_140C235F0 = 0LL;
  PopReleasePolicyLock(v3, v2);
  if ( v1 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
