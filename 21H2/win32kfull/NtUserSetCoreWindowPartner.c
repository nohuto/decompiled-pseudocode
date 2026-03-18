/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C01FCC60
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00244BC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238E24 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238F50 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  struct tagWND *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD v22[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v23[6]; // [rsp+38h] [rbp-30h] BYREF
  struct tagWND *v24; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v8 = 0LL;
    v24 = 0LL;
    if ( ValidateHWNDND(a1, &v24) )
    {
      v11 = v24;
      v12 = *((_QWORD *)v24 + 2);
      if ( gptiCurrent != v12 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v12 + 424)) )
      {
        v10 = 5LL;
        goto LABEL_5;
      }
      v13 = (struct tagWND *)HMValidateHandleNoSecure(a3, 1);
      v14 = v13;
      if ( v13 )
      {
        if ( !a2 )
        {
          LOBYTE(v8) = (int)CoreWindowProp::RemoveComponent(v13, v11) >= 0;
          goto LABEL_14;
        }
        if ( a2 == 2 )
        {
          v22[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v22;
          v22[2] = 0LL;
          v23[2] = 0LL;
          v22[1] = v11;
          HMLockObject(v11);
          v23[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v23;
          v23[1] = v14;
          HMLockObject(v14);
          LOBYTE(v8) = (int)CoreWindowProp::xxxSetHost(v11, v14) >= 0;
          ThreadUnlock1(v16, v15, v17);
          ThreadUnlock1(v19, v18, v20);
          goto LABEL_14;
        }
      }
    }
    v10 = 87LL;
LABEL_5:
    UserSetLastError(v10, v9);
    goto LABEL_14;
  }
  UserSetLastError(87LL, v6);
  v8 = 0LL;
LABEL_14:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
