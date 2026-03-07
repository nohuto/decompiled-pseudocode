__int64 __fastcall NtUserSelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  struct tagWND *v8; // rsi
  __int64 *NonChildAncestor; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx

  EnterCrit(0LL, 0LL);
  v6 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = (struct tagWND *)v7;
    if ( v7 )
    {
      NonChildAncestor = (__int64 *)GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(NonChildAncestor[5] + 18) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (__int64 *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(NonChildAncestor[2] + 488) |= 0x800u;
        SetOrClrWF(1, NonChildAncestor, 0x220u, 1);
      }
      if ( gpqForeground )
        v10 = *(_QWORD *)(gpqForeground + 128LL);
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(NonChildAncestor[3] + 8);
      if ( NonChildAncestor != *(__int64 **)(v11 + 24)
        && NonChildAncestor != *(__int64 **)(v11 + 168)
        && v10
        && ((struct tagWND *)v10 == v8 || (unsigned int)IsChild(v10, (__int64)v8) || (unsigned int)IsTopmostRealApp(v8))
        && *(char *)(*((_QWORD *)v8 + 5) + 24LL) >= 0 )
      {
        v6 = 0;
      }
    }
  }
  v12 = GreSelectPalette(a1, a2, v6);
  UserSessionSwitchLeaveCrit(v13);
  return v12;
}
