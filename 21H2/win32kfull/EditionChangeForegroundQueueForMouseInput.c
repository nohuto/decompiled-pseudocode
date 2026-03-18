/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C0004560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rdi
  char v4; // si
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 ThreadWin32Thread; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = *(struct tagWND **)(a1 + 80);
  if ( a2 )
  {
    v4 = 1;
    if ( !(unsigned __int8)CheckAccess(a2, *(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL) + 424LL) )
    {
      EtwTraceUIPIInputError(
        gptiCurrent,
        *((_QWORD *)v3 + 2),
        *(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL) + 424LL),
        1);
      return 0LL;
    }
  }
  else
  {
    v4 = 0;
  }
  CompositionInputWindowUIOwner = v3;
  if ( !(unsigned int)IsIndependentInputWindow(v3)
    || (CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3)) != 0LL )
  {
    if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x2000) != 0
      || (*(_BYTE *)(*(_QWORD *)(GetNonChildAncestor(CompositionInputWindowUIOwner) + 40) + 27LL) & 8) != 0 )
    {
      return 1LL;
    }
    v9 = 0LL;
    v8 = 0LL;
    if ( CompositionInputWindowUIOwner != v3 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v8 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v8;
      *((_QWORD *)&v8 + 1) = CompositionInputWindowUIOwner;
      HMLockObject(CompositionInputWindowUIOwner);
    }
    xxxForceForegroundWindowNoRestoreFocus(CompositionInputWindowUIOwner, 0LL);
    if ( CompositionInputWindowUIOwner != v3 )
      ThreadUnlock1();
    if ( !v4 || !gpqForeground || (unsigned __int8)CheckAccess(a2, gpqForeground + 424LL) )
      return 1LL;
    MSGLUA_GPQFOREGROUND();
  }
  return 0LL;
}
