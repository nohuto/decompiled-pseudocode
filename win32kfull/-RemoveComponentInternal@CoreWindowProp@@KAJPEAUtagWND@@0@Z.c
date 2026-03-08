/*
 * XREFs of ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C022315C
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0222EB0 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0223130 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C002D818 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0222DF4 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0222F04 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C02231E8 (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponentInternal(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // edi
  struct CoreWindowProp::Component *Component; // rax
  CoreWindowProp *v6; // rbx
  struct CoreWindowProp::Component *v8; // [rsp+40h] [rbp+18h] BYREF
  CoreWindowProp *v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = -1073741275;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, (__int64 *)&v9) )
  {
    v8 = 0LL;
    Component = CoreWindowProp::FindComponent(a1, a2, &v8);
    if ( Component )
    {
      v6 = v9;
      CoreWindowProp::UnlinkAndDestroyComponent(v9, Component, v8);
      v4 = 0;
      if ( !*((_DWORD *)v6 + 12) )
        CoreWindowProp::ChangeRole((__int64)a1, 2, 0);
    }
  }
  return v4;
}
