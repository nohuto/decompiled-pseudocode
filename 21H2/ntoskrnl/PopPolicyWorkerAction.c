/*
 * XREFs of PopPolicyWorkerAction @ 0x1407FF440
 * Callers:
 *     PopPolicyWorkerThread @ 0x140250220 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     PopThermalSxExit @ 0x14038AB60 (PopThermalSxExit.c)
 *     PopSetPowerActionState @ 0x14038B860 (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopCompleteAction @ 0x1407FD778 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerAction(int a1)
{
  char v1; // si
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int v8; // r14d
  LONG v9; // edi
  __int64 *i; // rbx
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  LONG v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]

  v1 = 0;
  v2 = 0;
  PopAcquirePolicyLock(a1);
  qword_140C22970 = (__int64)KeGetCurrentThread();
  if ( byte_140C227C1 == 1 )
  {
    v5 = (int)qword_140C227C4;
    v6 = HIDWORD(qword_140C227C4);
    v7 = dword_140C227CC;
    PopSetPowerActionState(2);
    v8 = dword_140C227D4;
    v9 = PopIssueActionRequest(0LL, (unsigned int)v5, v6, v7);
    v2 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140C227C4) == 5 )
        v8 = 6;
      dword_140C227D4 = v8;
      dword_140C227CC = dword_140C227CC & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140D06910 & 0x8000) != 0 )
      {
        v14 = 0;
        v17 = 0;
        v15 = &v12;
        v12 = v5;
        v13 = v9;
        v16 = 16;
        EtwTraceKernelEvent((__int64)&v15, 1u, 0x80008000, 0x1223u, 0x401802u);
      }
      dword_140C227D0 = v9;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v9);
      PopGetPolicyWorker(1);
      v1 = 1;
    }
  }
  qword_140C22970 = 0LL;
  PopReleasePolicyLock(v4, v3);
  if ( v1 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v2 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
