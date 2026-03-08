/*
 * XREFs of ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0223130
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C01DC380 (NtUserSetCoreWindowPartner.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022325C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C022315C (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v2; // ebx

  v2 = CoreWindowProp::RemoveComponentInternal(a1, a2);
  if ( v2 )
    UserSetLastError(1168);
  return v2;
}
