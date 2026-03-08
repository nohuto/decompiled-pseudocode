/*
 * XREFs of NtUserDispatchMessage @ 0x1C0037F50
 * Callers:
 *     <none>
 * Callees:
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v3 = 0LL;
  if ( (DWORD2(v9) & 0xFFFE0000) != 0 )
  {
    v4 = 87LL;
  }
  else
  {
    if ( !(_QWORD)v9
      || (v6 = ValidateHwnd(v9), (v2 = v6) == 0)
      || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 18LL) & 4) == 0
      || (v2 = *(_QWORD *)(v6 + 16), *(_QWORD *)(v2 + 424) == *(_QWORD *)(gptiCurrent + 424LL)) )
    {
      if ( DWORD2(v9) >= 0x400 || !(((unsigned __int16)MessageTable[DWORD2(v9)] >> 13) & 1) )
      {
        v3 = xxxDispatchMessage(&v9, v2);
        goto LABEL_16;
      }
    }
    v4 = 5LL;
  }
  UserSetLastError(v4);
LABEL_16:
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
