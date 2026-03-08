/*
 * XREFs of NtUserSetCoreWindowPartner @ 0x1C01DC380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0099FC0 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0223130 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022325C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetCoreWindowPartner(HWND a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // ecx
  struct tagWND *v10; // rsi
  __int64 v11; // rcx
  struct tagWND *v12; // rax
  struct tagWND *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v22[6]; // [rsp+38h] [rbp-30h] BYREF
  struct tagWND *v23; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v7 = 0LL;
    v23 = 0LL;
    LOBYTE(v8) = ValidateHWNDND(a1, &v23);
    if ( v8 )
    {
      v10 = v23;
      v11 = *((_QWORD *)v23 + 2);
      if ( gptiCurrent != v11 || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v11 + 424)) )
      {
        v9 = 5;
        goto LABEL_5;
      }
      v12 = (struct tagWND *)HMValidateHandleNoSecure(a3, 1);
      v13 = v12;
      if ( v12 )
      {
        if ( !a2 )
        {
          LOBYTE(v7) = (int)CoreWindowProp::RemoveComponent(v12, v10) >= 0;
          goto LABEL_14;
        }
        if ( a2 == 2 )
        {
          v21[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v21;
          v21[2] = 0LL;
          v22[2] = 0LL;
          v21[1] = v10;
          HMLockObject(v10);
          v22[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v22;
          v22[1] = v13;
          HMLockObject(v13);
          LOBYTE(v7) = (int)CoreWindowProp::xxxSetHost(v10, v13) >= 0;
          ThreadUnlock1(v15, v14, v16);
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_14;
        }
      }
    }
    v9 = 87;
LABEL_5:
    UserSetLastError(v9);
    goto LABEL_14;
  }
  UserSetLastError(87);
  v7 = 0LL;
LABEL_14:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
