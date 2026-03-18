/*
 * XREFs of NtUserGetWindowFeedbackSetting @ 0x1C01F7390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     FeedbackGetWindowSetting @ 0x1C01D54D0 (FeedbackGetWindowSetting.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  int WindowSetting; // ebx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+24h] [rbp-54h]
  unsigned int v18; // [rsp+38h] [rbp-40h]

  v6 = a3;
  v7 = a2;
  EnterSharedCrit(a1, a2, a3);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    if ( v7 && v7 <= 13 && a4 && (v6 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(a4, 4uLL, 4u);
      v14 = *a4;
      v18 = v14;
      if ( v14 != 4 )
      {
        ProbeForWrite(a4, 4uLL, 4u);
        *a4 = 4;
      }
      if ( Address && v14 < 4 )
      {
        WindowSetting = 0;
        v17 = 0;
        UserSetLastError(122LL, v13);
      }
      else
      {
        v16 = 0;
        WindowSetting = FeedbackGetWindowSetting(v11, v7, v6, &v16);
        v17 = WindowSetting;
        if ( Address )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          v10 = v16;
          *Address = v16;
        }
      }
    }
    else
    {
      WindowSetting = 0;
      UserSetLastError(87LL, v9);
    }
  }
  else
  {
    WindowSetting = 0;
  }
  UserSessionSwitchLeaveCrit(v10);
  return WindowSetting;
}
