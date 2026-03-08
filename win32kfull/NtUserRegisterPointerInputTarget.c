/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1C01DA7A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _RegisterPointerInputTarget @ 0x1C01C8158 (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax

  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)Enforced(v8) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 12LL);
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v10 + 16) )
      {
        if ( !a4 || (v13 = *(_QWORD *)(v10 + 40), *(char *)(v13 + 20) >= 0) && *(char *)(v13 + 19) >= 0 )
        {
          if ( (unsigned int)(a3 - 2) <= 1 )
          {
            v9 = RegisterPointerInputTarget(v10, v11, a3, a4);
            goto LABEL_14;
          }
        }
        v12 = 87;
      }
      else
      {
        v12 = 5;
      }
      UserSetLastError(v12);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
