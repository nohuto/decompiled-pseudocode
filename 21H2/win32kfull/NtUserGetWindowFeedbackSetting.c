/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C01FC980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01DB0D0 (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(__int64 a1, signed int a2, int a3, _DWORD *a4, unsigned int *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r15
  int WindowSetting; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+24h] [rbp-54h]
  unsigned int v20; // [rsp+38h] [rbp-40h]

  EnterSharedCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( v12 )
  {
    if ( a2 && a2 <= 13 && a4 && (a3 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v16 = *a4;
      v20 = v16;
      if ( v16 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v16 < 4 )
      {
        WindowSetting = 0;
        v19 = 0;
        UserSetLastError(122LL, v14, v15);
      }
      else
      {
        v18 = 0;
        WindowSetting = FeedbackGetWindowSetting(v12, a2, a3, &v18);
        v19 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v18;
          *Address = v18;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87LL, v9, v11);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v10);
  return WindowSetting;
}
