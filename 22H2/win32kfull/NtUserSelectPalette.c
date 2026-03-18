/*
 * XREFs of NtUserSelectPalette @ 0x1C009A090
 * Callers:
 *     <none>
 * Callees:
 *     _IsChild @ 0x1C0016C4C (_IsChild.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     GetThreadDesktopWindow @ 0x1C00EC080 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     WindowFromCacheDC @ 0x1C01BDECC (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0214D24 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  struct tagWND *v8; // rsi
  _QWORD *NonChildAncestor; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  EnterCrit(0LL, 0LL);
  v6 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = (struct tagWND *)v7;
    if ( v7 )
    {
      NonChildAncestor = (_QWORD *)GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(NonChildAncestor[5] + 18LL) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (_QWORD *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(NonChildAncestor[2] + 488LL) |= 0x800u;
        SetOrClrWF(1LL, NonChildAncestor, 544LL, 1LL);
      }
      if ( gpqForeground )
        v10 = *(_QWORD *)(gpqForeground + 128LL);
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(NonChildAncestor[3] + 8LL);
      if ( NonChildAncestor != *(_QWORD **)(v11 + 24)
        && NonChildAncestor != *(_QWORD **)(v11 + 168)
        && v10
        && ((struct tagWND *)v10 == v8 || (unsigned int)IsChild(v10, (__int64)v8) || (unsigned int)IsTopmostRealApp(v8))
        && *(char *)(*((_QWORD *)v8 + 5) + 24LL) >= 0 )
      {
        v6 = 0;
      }
    }
  }
  v12 = GreSelectPalette(a1, a2, v6);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v12;
}
