__int64 __fastcall PopPolicyWorkerAction(int a1)
{
  char v1; // si
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r15
  int v7; // edi
  int v8; // ebx
  int v9; // r14d
  LONG v10; // edi
  __int64 *i; // rbx
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  LONG v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+3Ch] [rbp-3Ch]
  __int64 *v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]

  v1 = 0;
  v2 = 0;
  PopAcquirePolicyLock(a1);
  qword_140C3CF18 = (__int64)KeGetCurrentThread();
  if ( byte_140C3CD61 == 1 )
  {
    v6 = (int)qword_140C3CD64;
    v7 = HIDWORD(qword_140C3CD64);
    v8 = dword_140C3CD6C;
    PopSetPowerActionState(2);
    v9 = dword_140C3CD74;
    v10 = PopIssueActionRequest(0, v6, v7, v8);
    v2 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140C3CD64) == 5 )
        v9 = 6;
      dword_140C3CD74 = v9;
      dword_140C3CD6C = dword_140C3CD6C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
      {
        v15 = 0;
        v18 = 0;
        v16 = &v13;
        v13 = v6;
        v14 = v10;
        v17 = 16;
        EtwTraceKernelEvent((__int64)&v16, 1u, 0x80008000, 0x1223u, 0x401802u);
      }
      dword_140C3CD70 = v10;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v10);
      PopGetPolicyWorker(1);
      v1 = 1;
    }
  }
  qword_140C3CF18 = 0LL;
  PopReleasePolicyLock(v4, v3, v5);
  if ( v1 )
    PopThermalSxExit();
  PoResumeFromHibernate = 0;
  if ( v2 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
