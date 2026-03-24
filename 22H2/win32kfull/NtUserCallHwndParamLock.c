/*
 * XREFs of NtUserCallHwndParamLock @ 0x1C01172E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndParamLock(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (_DWORD)v3 == 120 || (_DWORD)v3 == 112 || (_DWORD)v3 == 117 || (unsigned int)(v3 - 122) <= 1 )
    gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
  if ( v7 )
  {
    if ( (_DWORD)v3 != 106 && (_DWORD)v3 != 125
      || (v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
    {
      *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v12;
      *((_QWORD *)&v12 + 1) = v7;
      HMLockObject(v7);
      if ( (unsigned int)(v3 - 118) <= 7 )
        v6 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v9, a2);
      ThreadUnlock1(v10);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
