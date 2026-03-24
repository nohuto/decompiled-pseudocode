/*
 * XREFs of NtUserDispatchMessage @ 0x1C006ACA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v10 = *a1;
  v11 = a1[1];
  v12 = a1[2];
  v4 = 0LL;
  if ( (DWORD2(v10) & 0xFFFE0000) != 0 )
  {
    v5 = 87LL;
  }
  else
  {
    if ( !(_QWORD)v10
      || (v7 = ValidateHwnd(v10), (v2 = v7) == 0)
      || (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 18LL) & 4) == 0
      || (v2 = *(_QWORD *)(v7 + 16), *(_QWORD *)(v2 + 424) == *(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( DWORD2(v10) >= 0x400 || !(((unsigned __int16)MessageTable[DWORD2(v10)] >> 13) & 1) )
      {
        v4 = xxxDispatchMessage(&v10, v2);
        goto LABEL_16;
      }
    }
    v5 = 5LL;
  }
  UserSetLastError(v5, v2, v3);
LABEL_16:
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
