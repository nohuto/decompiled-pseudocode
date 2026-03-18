/*
 * XREFs of ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238F50
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C01FCC60 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00821A8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0210658 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0210694 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238A64 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0238BAC (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238E24 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::xxxSetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  struct tagWND *v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v9) && (v5 = v9, *(_DWORD *)(v9 + 28)) )
  {
    v6 = *(struct tagWND **)(v9 + 32);
    if ( !v6 || (v7 = CoreWindowProp::RemoveComponent(v6, a1), v7 >= 0) )
    {
      v7 = CoreWindowProp::ChangeRole((__int64)a2, 2, 1u);
      if ( v7 >= 0 )
      {
        v7 = CoreWindowProp::AddComponent(a2, a1);
        if ( v7 >= 0 )
        {
          *(_QWORD *)(v5 + 32) = a2;
          v7 = 0;
          if ( IsPwndComponentWebview(a1) )
            xxxEstablishWebviewHostComponentRelationship(a1, a2);
        }
      }
    }
  }
  else
  {
    UserSetLastError(5LL, v4);
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
