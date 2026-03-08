/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C01D5620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01AEDEC (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall NtUserGetWindowFeedbackSetting(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *Address)
{
  int v6; // r14d
  signed int v7; // esi
  __int64 v9; // rcx
  __int64 v10; // r15
  int WindowSetting; // ebx
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+24h] [rbp-54h]
  unsigned int v16; // [rsp+38h] [rbp-40h]

  v6 = a3;
  v7 = a2;
  EnterSharedCrit(a1, a2, a3);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    if ( v7 && v7 <= 13 && a4 && (v6 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v12 = *a4;
      v16 = v12;
      if ( v12 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v12 < 4 )
      {
        WindowSetting = 0;
        v15 = 0;
        UserSetLastError(122);
      }
      else
      {
        v14 = 0;
        WindowSetting = FeedbackGetWindowSetting(v10, v7, v6, &v14);
        v15 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v9 = v14;
          *Address = v14;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v9);
  return WindowSetting;
}
