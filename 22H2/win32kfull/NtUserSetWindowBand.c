/*
 * XREFs of NtUserSetWindowBand @ 0x1C0042840
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028CFC (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0042728 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagWND *v15; // rbx
  int v16; // esi
  int v17; // ebx
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  __int128 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h]
  struct tagWND *v24; // [rsp+88h] [rbp+38h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( !v6 || (v8 = *(_QWORD *)(v6 + 40), v7 = (*(_WORD *)(v8 + 42) & 0x2FFFu) - 669, (v7 & 0xFFFFFFFD) == 0) )
  {
    v17 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v20;
  *((_QWORD *)&v20 + 1) = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v24) )
  {
    if ( GetProp(v11, LOWORD(WPP_MAIN_CB.DeviceLock.Header.SignalState), 1LL) )
    {
      v19 = 5LL;
    }
    else
    {
      v15 = v24;
      if ( (unsigned __int64)v24 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v24 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v16 = 1;
          *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v22;
          *((_QWORD *)&v22 + 1) = v15;
          if ( v15 )
            HMLockObject(v15);
        }
        else
        {
          v16 = 0;
        }
        v17 = xxxSetWindowBand(v11, v15, a3, 1);
        if ( v16 )
          ThreadUnlock1(v13, v12, v14);
        goto LABEL_10;
      }
      v19 = 87LL;
    }
    v17 = 0;
    UserSetLastError(v19);
  }
  else
  {
    v17 = 0;
  }
LABEL_10:
  ThreadUnlock1(v13, v12, v14);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v17;
}
