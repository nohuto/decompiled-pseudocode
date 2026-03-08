/*
 * XREFs of NtUserGetMessage @ 0x1C006DA50
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C0003090 (ClientGetMessageMPH.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  int v8; // ebx
  int MessageMPH; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  ULONG64 v12; // rcx
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+58h] [rbp-30h]
  __int128 v16; // [rsp+68h] [rbp-20h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v14, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v14, a2, a3, a4, 1uLL, 1);
    v8 = MessageMPH;
    HIDWORD(v14) = 0;
    HIDWORD(v16) = 0;
    v10 = v15;
    v11 = v16;
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v14;
    a1[1] = v10;
    a1[2] = v11;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
