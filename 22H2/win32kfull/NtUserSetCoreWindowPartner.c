/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C0004E60
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0004FDC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00322D8 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C023D550 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  struct tagWND *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagWND *v10; // rax
  struct tagWND *v11; // rbp
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[6]; // [rsp+38h] [rbp-30h] BYREF
  struct tagWND *v16; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    UserSetLastError(87LL);
    v6 = 0LL;
    goto LABEL_9;
  }
  v6 = 0LL;
  v16 = 0LL;
  if ( !(unsigned int)ValidateHWNDND(a1, &v16) )
    goto LABEL_10;
  v7 = v16;
  v8 = *((_QWORD *)v16 + 2);
  if ( gptiCurrent != v8 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v8 + 424)) )
  {
    v13 = 5LL;
    goto LABEL_11;
  }
  LOBYTE(v9) = 1;
  v10 = (struct tagWND *)HMValidateHandleNoSecure(a3, v9);
  v11 = v10;
  if ( !v10 )
    goto LABEL_10;
  if ( !a2 )
  {
    LOBYTE(v6) = (int)CoreWindowProp::RemoveComponent(v10, v7) >= 0;
    goto LABEL_9;
  }
  if ( a2 != 2 )
  {
LABEL_10:
    v13 = 87LL;
LABEL_11:
    UserSetLastError(v13);
    goto LABEL_9;
  }
  v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v14;
  v14[2] = 0LL;
  v15[2] = 0LL;
  v14[1] = v7;
  HMLockObject(v7);
  v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v15;
  v15[1] = v11;
  HMLockObject(v11);
  LOBYTE(v6) = (int)CoreWindowProp::xxxSetHost(v7, v11) >= 0;
  ThreadUnlock1();
  ThreadUnlock1();
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v6;
}
