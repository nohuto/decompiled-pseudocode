__int64 __fastcall NtUserRealInternalGetMessage(_OWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int Message; // ebx
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v15; // [rsp+48h] [rbp-40h] BYREF
  __int128 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+68h] [rbp-20h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((unsigned int)&v15, a2, a3, a4, a5, a6);
    HIDWORD(v15) = 0;
    HIDWORD(v17) = 0;
    v11 = v16;
    v12 = v17;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v15;
    a1[1] = v11;
    a1[2] = v12;
  }
  UserSessionSwitchLeaveCrit();
  return Message;
}
