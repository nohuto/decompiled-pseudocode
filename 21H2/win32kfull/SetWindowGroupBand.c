/*
 * XREFs of SetWindowGroupBand @ 0x1C00810A4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0080F68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00F4EEC (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C0239848 (xxxUpdateShadowZorder.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C006FFD8 (GetBandOrdinal.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00811BC (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0106638 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0107F54 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  unsigned int BandOrdinal; // eax
  struct tagWND *v7; // rbx
  unsigned int v8; // r8d
  _BOOL8 v9; // r15
  __int64 v10; // rcx
  struct tagWND *v11; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  BandOrdinal = GetBandOrdinal(a2);
  v7 = RootOwner;
  v9 = BandOrdinal >= v8;
  while ( 1 )
  {
    v10 = *((_QWORD *)v7 + 12);
    if ( !v10 || *(_DWORD *)(*(_QWORD *)(v10 + 40) + 236LL) != v5 )
      break;
    v7 = (struct tagWND *)*((_QWORD *)v7 + 12);
  }
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL) != v5 )
      break;
    v11 = (struct tagWND *)*((_QWORD *)v7 + 11);
    if ( v7 == RootOwner || (unsigned int)HasOwnedWindowInTree(v7, RootOwner) )
    {
      UnlinkWindow(v7, *((_QWORD *)v7 + 13));
      if ( a2 != 1 )
      {
        SetOrClrWF(0, v7, 0x304u, 1);
        SetOrClrWF(1, v7, 0x808u, 1);
      }
      SetWindowTreeBand(v7, a2);
      LinkWindow(v7, (_QWORD *)v9, *((_QWORD *)v7 + 13));
      v9 = (_BOOL8)v7;
    }
    v7 = v11;
  }
  while ( v11 );
}
