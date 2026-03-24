/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1C012B750
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0043604 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     LockProcessByClientId @ 0x1C008A1D0 (LockProcessByClientId.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     PostEvent @ 0x1C01AEB98 (PostEvent.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, int a2, __int64 *a3, int a4, int a5, unsigned int a6)
{
  __int64 v8; // r14
  int v10; // ebx
  CInputThread *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 ProcessWin32Process; // rdi
  int v16; // ecx
  int v17; // eax
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v8 = a2;
  v10 = 0;
  EnterCrit(0, 1);
  if ( !CInputThread::IsInputThread(v11) )
  {
    v13 = 5LL;
LABEL_3:
    UserSetLastError(v13, v12);
    goto LABEL_18;
  }
  LODWORD(v14) = 0;
  v21 = 0LL;
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v14 = *a3;
    v21 = *a3;
  }
  Object = 0LL;
  ProcessWin32Process = 0LL;
  if ( (int)LockProcessByClientId(v8, &Object) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ObfDereferenceObject(Object);
  }
  if ( !ProcessWin32Process )
  {
    v13 = 87LL;
    goto LABEL_3;
  }
  v16 = 0;
  v20 = 0LL;
  if ( qword_1C0257B90 )
  {
    v17 = qword_1C0257B90(a1, ProcessWin32Process, &v20);
    v16 = v20;
  }
  else
  {
    v17 = 0;
  }
  if ( v17 >= 0 )
    v10 = (unsigned __int8)PostEvent(v16, v14, a4, a5, a6);
LABEL_18:
  UserSessionSwitchLeaveCrit();
  return v10;
}
