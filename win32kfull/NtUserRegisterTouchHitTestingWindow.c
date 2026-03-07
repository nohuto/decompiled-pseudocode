__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
    {
      if ( (_DWORD)v2 )
      {
        v6 = InternalSetProp(v4, (unsigned __int16)gatomPtrTargetFlags, v2, 5LL);
      }
      else
      {
        v6 = 1;
        InternalRemoveProp(v4, (unsigned __int16)gatomPtrTargetFlags, 1u);
      }
    }
    else
    {
      UserSetLastError(5);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
