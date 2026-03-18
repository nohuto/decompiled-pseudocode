/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C00F5DD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  int Message; // ebx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  ULONG64 v14; // rcx
  unsigned __int64 v16; // [rsp+20h] [rbp-68h]
  __int128 v17; // [rsp+48h] [rbp-40h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v10);
    Message = 0;
  }
  else
  {
    LODWORD(v16) = a5;
    Message = xxxRealInternalGetMessage(&v17, a2, a3, a4, v16, a6);
    HIDWORD(v17) = 0;
    HIDWORD(v19) = 0;
    v12 = v18;
    v13 = v19;
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v17;
    a1[1] = v12;
    a1[2] = v13;
  }
  UserSessionSwitchLeaveCrit(v14);
  return Message;
}
