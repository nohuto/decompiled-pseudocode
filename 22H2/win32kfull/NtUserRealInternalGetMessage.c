/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C0054510
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(_OWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int Message; // ebx
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  ULONG64 v13; // rcx
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-30h]
  __int128 v18; // [rsp+68h] [rbp-20h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((unsigned int)&v16, a2, a3, a4, a5, a6);
    HIDWORD(v16) = 0;
    HIDWORD(v18) = 0;
    v11 = v17;
    v12 = v18;
    v13 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v16;
    a1[1] = v11;
    a1[2] = v12;
  }
  UserSessionSwitchLeaveCrit(v13);
  return Message;
}
