/*
 * XREFs of NtUserSetWindowBand @ 0x1C0031E60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0033494 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A984 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowBand(__int64 a1, HWND a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct tagWND *v10; // rbx
  int v11; // esi
  int v12; // ebx
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]
  struct tagWND *v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v12 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v15;
  *((_QWORD *)&v15 + 1) = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v19) )
  {
    if ( GetProp(v8, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink), 1LL) )
    {
      v14 = 5LL;
    }
    else
    {
      v10 = v19;
      if ( (unsigned __int64)v19 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v19 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
        {
          v11 = 0;
        }
        else
        {
          v11 = 1;
          *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v17;
          *((_QWORD *)&v17 + 1) = v10;
          HMLockObject(v10);
        }
        v12 = xxxSetWindowBand(v8, v10, a3, 1LL);
        if ( v11 )
          ThreadUnlock1(v9);
        goto LABEL_10;
      }
      v14 = 87LL;
    }
    v12 = 0;
    UserSetLastError(v14);
  }
  else
  {
    v12 = 0;
  }
LABEL_10:
  ThreadUnlock1(v9);
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v12;
}
