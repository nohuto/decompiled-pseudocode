/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x1C00231A8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0238D30 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  int v3; // esi
  const struct tagWND *v4; // rbx
  struct tagWND *Host; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = *(_DWORD *)(ThreadWin32Thread + 1508);
  *(_DWORD *)(ThreadWin32Thread + 1508) = 0;
  v4 = (const struct tagWND *)ValidateHwnd(a1);
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent)
    || v4
    && (unsigned int)CoreWindowProp::IsComponent(v4)
    && (Host = CoreWindowProp::GetHost(v4)) != 0LL
    && *(_QWORD *)(*((_QWORD *)Host + 2) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    *(_DWORD *)(ThreadWin32Thread + 1508) = v3;
    return (__int64)v4;
  }
  else
  {
    *(_DWORD *)(ThreadWin32Thread + 1508) = v3;
    return ValidateHwnd(a1);
  }
}
