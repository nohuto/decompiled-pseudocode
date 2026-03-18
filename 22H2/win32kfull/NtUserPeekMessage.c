/*
 * XREFs of NtUserPeekMessage @ 0x1C0127F20
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C000359C (ClientGetMessageMPH.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  int v10; // edi
  int MessageMPH; // eax
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v19; // r13
  __int64 *ThreadWin32Thread; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v22; // [rsp+48h] [rbp-60h] BYREF
  __int128 v23; // [rsp+50h] [rbp-58h] BYREF
  __int128 v24; // [rsp+60h] [rbp-48h]
  __int128 v25; // [rsp+70h] [rbp-38h]

  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    v19 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
    v22.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v19 + 1456), WrUserRequest, 1, 0, &v22) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v19 + 480) + 8LL);
  }
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    LODWORD(Timeout) = a5;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v23, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v23, a2, a3, a4, (unsigned __int64)Timeout, 0);
    v10 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v23) = 0;
      HIDWORD(v25) = 0;
      v16 = v24;
      v17 = v25;
      v13 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v23;
      a1[1] = v16;
      a1[2] = v17;
    }
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v10;
}
