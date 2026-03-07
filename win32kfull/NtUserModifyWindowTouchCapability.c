__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10; // rcx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v10 = 1004LL;
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v6 + 16) )
      {
        if ( a3 )
        {
          v8 = SetTouchWindowFlags(v6, a2 | 0x10000u);
        }
        else
        {
          v8 = 1;
          InternalRemoveProp(v6, (unsigned __int16)gatomTouchFlags, 1LL);
        }
        goto LABEL_6;
      }
      v10 = 5LL;
    }
    UserSetLastError(v10);
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
