/*
 * XREFs of NtUserSetWindowBand @ 0x1C00999F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009A010 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C009BB98 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, HWND a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct tagWND *v12; // rbx
  int v13; // esi
  int v14; // ebx
  int v16; // ecx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  struct tagWND *v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0) )
  {
    v14 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v17;
  *((_QWORD *)&v17 + 1) = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v21) )
  {
    if ( GetProp(v8, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1u) )
    {
      v16 = 5;
    }
    else
    {
      v12 = v21;
      if ( (unsigned __int64)v21 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v21 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v13 = 1;
          *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v19;
          *((_QWORD *)&v19 + 1) = v12;
          if ( v12 )
            HMLockObject(v12);
        }
        else
        {
          v13 = 0;
        }
        v14 = xxxSetWindowBand(v8, v12, a3, 1LL);
        if ( v13 )
          ThreadUnlock1(v10, v9, v11);
        goto LABEL_10;
      }
      v16 = 87;
    }
    v14 = 0;
    UserSetLastError(v16);
  }
  else
  {
    v14 = 0;
  }
LABEL_10:
  ThreadUnlock1(v10, v9, v11);
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v14;
}
