/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C00C6000
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
    {
      if ( (_DWORD)v2 )
      {
        v9 = InternalSetProp(v4, (unsigned __int16)gatomPtrTargetFlags, v2, 5LL);
      }
      else
      {
        v9 = 1;
        InternalRemoveProp(v4, (unsigned __int16)gatomPtrTargetFlags, 1LL);
      }
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
