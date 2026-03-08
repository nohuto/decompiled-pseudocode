/*
 * XREFs of NtUserCallMsgFilter @ 0x1C01471C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C00399AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C014538E (xxxCallMsgFilter.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, unsigned int a2)
{
  _BYTE *v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v10; // [rsp+48h] [rbp-40h]
  __int128 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+A0h] [rbp+18h] BYREF

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity((__int64)&v12, 7u, 0);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[47] = v4[47];
  *(_OWORD *)v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  if ( (v9[1] & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSessionSwitchLeaveCrit(v5);
    return 0LL;
  }
  else
  {
    v7 = (int)xxxCallMsgFilter((__int64)v9, a2);
    *a1 = *(_OWORD *)v9;
    a1[1] = v10;
    a1[2] = v11;
    UserSessionSwitchLeaveCrit(v8);
    return v7;
  }
}
