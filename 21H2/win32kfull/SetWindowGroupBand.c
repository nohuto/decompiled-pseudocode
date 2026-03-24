/*
 * XREFs of SetWindowGroupBand @ 0x1C00366E8
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0034044 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0035BC4 (zzzImeSetOwnerWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0036098 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     xxxUpdateShadowZorder @ 0x1C023E108 (xxxUpdateShadowZorder.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0035300 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00369C4 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0038E0C (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C006FD00 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C007024C (GetBandOrdinal.c)
 *     UnlinkWindow @ 0x1C007E978 (UnlinkWindow.c)
 */

__int64 __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  unsigned int v5; // ebp
  struct tagWND *i; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  struct tagWND *v9; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  GetBandOrdinal(a2);
  for ( i = RootOwner; ; i = (struct tagWND *)*((_QWORD *)i + 12) )
  {
    v7 = *((_QWORD *)i + 12);
    if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
  }
  do
  {
    result = *((_QWORD *)i + 5);
    if ( *(_DWORD *)(result + 236) != v5 )
      break;
    v9 = (struct tagWND *)*((_QWORD *)i + 11);
    if ( i != RootOwner )
    {
      result = HasOwnedWindowInTree(i, RootOwner);
      if ( !(_DWORD)result )
        continue;
    }
    UnlinkWindow(i, *((_QWORD *)i + 13));
    if ( a2 != 1 )
    {
      SetOrClrWF(0LL, i, 772LL, 1LL);
      SetOrClrWF(1LL, i, 2056LL, 1LL);
    }
    SetWindowTreeBand(i, a2);
    result = LinkWindow(i);
    i = v9;
  }
  while ( v9 );
  return result;
}
