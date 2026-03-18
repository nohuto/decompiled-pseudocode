/*
 * XREFs of NtUserSetWindowBand @ 0x1C009D860
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002583C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C009DA04 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  struct tagWND *v13; // rbx
  int v14; // esi
  int v15; // ebx
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h]
  struct tagWND *v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v15 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v18;
  *((_QWORD *)&v18 + 1) = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v22) )
  {
    if ( GetProp(v8, WORD2(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 1u) )
    {
      v17 = 5LL;
    }
    else
    {
      v13 = v22;
      if ( (unsigned __int64)v22 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v22 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v14 = 1;
          *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v20;
          *((_QWORD *)&v20 + 1) = v13;
          HMLockObject(v13);
        }
        else
        {
          v14 = 0;
        }
        v15 = xxxSetWindowBand(v8, v13, a3, 1LL);
        if ( v14 )
          ThreadUnlock1(v10, v9, v11);
        goto LABEL_10;
      }
      v17 = 87LL;
    }
    v15 = 0;
    UserSetLastError(v17, v12);
  }
  else
  {
    v15 = 0;
  }
LABEL_10:
  ThreadUnlock1(v10, v9, v11);
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v15;
}
