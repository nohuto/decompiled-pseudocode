/*
 * XREFs of NtUserCallHwndLock @ 0x1C0052660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (_DWORD)v2 == 112
    || (_DWORD)v2 == 117
    || (_DWORD)v2 == 120
    || (unsigned int)v2 > 0x79 && (unsigned int)v2 <= 0x7B )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 )
  {
    if ( (_DWORD)v2 != 106 && (_DWORD)v2 != 125
      || (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
    {
      *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v10;
      *((_QWORD *)&v10 + 1) = v5;
      HMLockObject(v5);
      if ( (unsigned int)(v2 - 105) <= 0xC )
        v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v7);
      ThreadUnlock1(v8);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
