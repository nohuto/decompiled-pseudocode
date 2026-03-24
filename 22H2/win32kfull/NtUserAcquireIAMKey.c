/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C0134220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // r9d

  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 176);
  v7 = 0;
  if ( !v6 || !*(_QWORD *)(v5 + 168) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 20;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v10 = 21;
LABEL_16:
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(v2, v5, 2, v10, (__int64)&WPP_6c283040767a3b01506b934f69f549d7_Traceguids);
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v4 + 288) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v10 = 22;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v4 + 272) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 23;
      goto LABEL_16;
    }
LABEL_17:
    UserSetLastError(5LL, v5, v3);
    goto LABEL_7;
  }
  ProbeForWrite(Address, 8uLL, 4u);
  *Address = *(_QWORD *)(v4 + 280);
  *(_DWORD *)(v4 + 272) = 0;
  *(_QWORD *)(v4 + 288) = gptiCurrent;
  v7 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
