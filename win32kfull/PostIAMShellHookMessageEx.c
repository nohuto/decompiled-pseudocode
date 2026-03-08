/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C0044C60
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00F3C20 (HandleDisplayChangeForInactiveDesktops.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035AC4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rbx
  __int64 *v6; // rax
  __int64 *CompositeAppFrameWindowOrSelf; // rcx
  struct tagWND *v8; // rcx

  if ( a1 )
  {
    v3 = a3;
    v4 = a2;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 280) )
      {
        if ( a2 == 35 )
        {
LABEL_15:
          v8 = *(struct tagWND **)(*(_QWORD *)(a1 + 8) + 192LL);
          if ( v8 )
            _PostTransformableMessageExtended(v8, *(_DWORD *)(gpsi + 928LL), v4, v3, 0LL, 1);
          return;
        }
        v6 = (__int64 *)_HMObjectFromHandle(a3);
        CompositeAppFrameWindowOrSelf = v6;
        if ( (_DWORD)v4 == 18 )
        {
          *((_DWORD *)v6 + 80) &= ~0x200u;
LABEL_12:
          if ( CompositeAppFrameWindowOrSelf )
            v3 = *CompositeAppFrameWindowOrSelf;
          else
            v3 = 0LL;
          goto LABEL_15;
        }
        *((_DWORD *)v6 + 80) |= 0x200u;
        if ( (((_DWORD)v4 - 19) & 0xFFFFFFFB) != 0 || gpqForeground && *(__int64 **)(gpqForeground + 128LL) == v6 )
        {
          if ( (_DWORD)v4 == 19 )
            CompositeAppFrameWindowOrSelf = (__int64 *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v6);
          goto LABEL_12;
        }
      }
    }
  }
}
