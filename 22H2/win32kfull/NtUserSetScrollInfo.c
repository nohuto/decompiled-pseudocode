/*
 * XREFs of NtUserSetScrollInfo @ 0x1C00C6B10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetScrollBar @ 0x1C00C6C68 (xxxSetScrollBar.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h]
  int v21; // [rsp+68h] [rbp-40h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v6;
  v12 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v17;
      *((_QWORD *)&v17 + 1) = v6;
      HMLockObject(v6);
      if ( a2 > 3 )
      {
        UserSetLastError(87LL);
      }
      else
      {
        if ( a3 >= MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v19 = *(_OWORD *)a3;
        v20 = *(_QWORD *)(a3 + 16);
        v21 = *(_DWORD *)(a3 + 24);
        v12 = xxxSetScrollBar(v11, a2, (struct tagSCROLLINFO *)&v19);
      }
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}
