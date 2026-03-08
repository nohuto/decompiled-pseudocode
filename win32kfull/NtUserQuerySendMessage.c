/*
 * XREFs of NtUserQuerySendMessage @ 0x1C01D9CA0
 * Callers:
 *     <none>
 * Callees:
 *     _QuerySendMessage @ 0x1C01FE96C (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rax
  ULONG64 v5; // rcx
  int v6; // ebx
  __int128 v8; // [rsp+28h] [rbp-40h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-20h]

  v3 = a1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = EnterSharedCrit(a1, a2, a3);
  if ( *(_QWORD *)(v4 + 512) )
  {
    v6 = QuerySendMessage(v4, &v8);
    if ( v6 && v3 )
    {
      *((_QWORD *)&v9 + 1) &= -(__int64)(*((_QWORD *)&v9 + 1) < (unsigned __int64)MmSystemRangeStart);
      HIDWORD(v8) = 0;
      HIDWORD(v10) = 0;
      v5 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = v8;
      v3[1] = v9;
      v3[2] = v10;
    }
  }
  else
  {
    v6 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
