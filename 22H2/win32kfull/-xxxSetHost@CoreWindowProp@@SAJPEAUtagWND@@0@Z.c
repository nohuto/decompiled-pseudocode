/*
 * XREFs of ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022054C
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C01DB350 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00426F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C01F2BF8 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F2C68 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C021FFA0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C02200E8 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0220420 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::xxxSetHost(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v4; // rsi
  struct tagWND *v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v8) && (v4 = v8, *(_DWORD *)(v8 + 28)) )
  {
    v5 = *(struct tagWND **)(v8 + 32);
    if ( !v5 || (v6 = CoreWindowProp::RemoveComponent(v5, a1), v6 >= 0) )
    {
      v6 = CoreWindowProp::ChangeRole((__int64)a2, 2, 1u);
      if ( v6 >= 0 )
      {
        v6 = CoreWindowProp::AddComponent(a2, a1);
        if ( v6 >= 0 )
        {
          *(_QWORD *)(v4 + 32) = a2;
          v6 = 0;
          if ( IsPwndComponentWebview(a1) )
            xxxEstablishWebviewHostComponentRelationship(a1, a2);
        }
      }
    }
  }
  else
  {
    UserSetLastError(5);
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
