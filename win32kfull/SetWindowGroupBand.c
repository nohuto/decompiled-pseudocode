/*
 * XREFs of SetWindowGroupBand @ 0x1C0025CE4
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025E8C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0026E94 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C009EC08 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C02246CC (xxxUpdateShadowZorder.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022344 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetBandOrdinal @ 0x1C0025CC4 (GetBandOrdinal.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C0025E38 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0027F7C (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x1C00AB340 (UnlinkWindow.c)
 */

struct tagWND *__fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  struct tagWND *i; // rbx
  __int64 v7; // rcx
  struct tagWND *result; // rax
  struct tagWND *v9; // rsi
  __int64 v10; // rcx
  struct tagWND *v11; // rcx
  struct tagWND *j; // r8
  __int64 v13; // r8

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
    result = (struct tagWND *)*((_QWORD *)i + 5);
    if ( *((_DWORD *)result + 59) != v5 )
      break;
    v9 = (struct tagWND *)*((_QWORD *)i + 11);
    if ( i != RootOwner )
    {
      result = i;
      while ( 1 )
      {
        v10 = (__int64)result;
        if ( result )
          break;
LABEL_13:
        v11 = (struct tagWND *)*((_QWORD *)result + 15);
        if ( v11 != result )
        {
          result = (struct tagWND *)*((_QWORD *)result + 15);
          if ( v11 )
            continue;
        }
        for ( j = (struct tagWND *)*((_QWORD *)i + 14); j; j = *(struct tagWND **)(v13 + 88) )
        {
          result = (struct tagWND *)HasOwnedWindowInTree(j, RootOwner);
          if ( (_DWORD)result )
            goto LABEL_21;
        }
        goto LABEL_17;
      }
      while ( (struct tagWND *)v10 != RootOwner )
      {
        v10 = *(_QWORD *)(v10 + 104);
        if ( !v10 )
          goto LABEL_13;
      }
    }
LABEL_21:
    UnlinkWindow(i, *((_QWORD *)i + 13));
    if ( a2 != 1 )
    {
      SetOrClrWF(0LL, i, 772LL, 1LL);
      SetOrClrWF(1LL, i, 2056LL, 1LL);
    }
    SetWindowTreeBand(i, a2);
    result = (struct tagWND *)LinkWindow(i);
LABEL_17:
    i = v9;
  }
  while ( v9 );
  return result;
}
