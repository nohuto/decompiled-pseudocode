/*
 * XREFs of NtUserPeekMessage @ 0x1C006F140
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C0003090 (ClientGetMessageMPH.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  int v10; // edi
  int MessageMPH; // eax
  ULONG64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v16; // r13
  __int64 *ThreadWin32Thread; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v19; // [rsp+48h] [rbp-60h] BYREF
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h]
  __int128 v22; // [rsp+70h] [rbp-38h]

  v10 = 0;
  if ( (a6 & 1) != 0 )
  {
    v16 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
    v19.QuadPart = 0LL;
    if ( KeWaitForSingleObject(*(PVOID *)(v16 + 1456), WrUserRequest, 1, 0, &v19) == 258 )
      return 0LL;
    if ( (a6 & 2) != 0 )
      --*(_QWORD *)(*(_QWORD *)(v16 + 480) + 8LL);
  }
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    LODWORD(Timeout) = a5;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v20, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v20, a2, a3, a4, (unsigned __int64)Timeout, 0);
    v10 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v20) = 0;
      HIDWORD(v22) = 0;
      v13 = v21;
      v14 = v22;
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v20;
      a1[1] = v13;
      a1[2] = v14;
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
