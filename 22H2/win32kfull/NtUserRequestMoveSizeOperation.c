/*
 * XREFs of NtUserRequestMoveSizeOperation @ 0x1C0200AF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C0241434 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRequestMoveSizeOperation(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v7;
      HMLockObject(v7);
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL)) )
      {
        v12 = 5LL;
      }
      else
      {
        if ( a2 <= 8 )
        {
          v6 = (unsigned __int8)CMoveSizeRequest::xxxRequestMoveSizeOperation(v9, a2, a3);
LABEL_9:
          ThreadUnlock1(v13);
          goto LABEL_10;
        }
        v12 = 87LL;
      }
      UserSetLastError(v12, v10, v11);
      goto LABEL_9;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
