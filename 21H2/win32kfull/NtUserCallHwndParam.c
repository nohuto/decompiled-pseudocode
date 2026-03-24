/*
 * XREFs of NtUserCallHwndParam @ 0x1C01192C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserCallHwndParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v3 == 94 || (_DWORD)v3 == -1 )
    gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( !v7 )
  {
    v10 = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v12;
  *((_QWORD *)&v12 + 1) = v7;
  HMLockObject(v7);
  if ( (unsigned int)(v3 - 94) > 0xA )
    goto LABEL_10;
  _mm_lfence();
  v9 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v7, a2);
  v10 = v9;
  if ( (unsigned int)v3 < 0x5F )
  {
    if ( v9 )
    {
      v10 = (_QWORD *)*v9;
      goto LABEL_8;
    }
LABEL_10:
    v10 = 0LL;
  }
LABEL_8:
  ThreadUnlock1(v8);
LABEL_9:
  UserSessionSwitchLeaveCrit(v6);
  return v10;
}
