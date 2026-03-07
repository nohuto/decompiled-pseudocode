__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // r8
  void *v7; // rax
  __int64 v9; // rax
  char v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h]

  v11 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != grpdeskRitInput )
      return 0;
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
      return (*(_BYTE *)(v4 + 26) & 8) == 0 ? 0x3E0001u : 0;
    if ( (*(_BYTE *)(v4 + 26) & 8) != 0 )
    {
      v9 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      UpdateWindowSpriteMonitor(a1, v9);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
      }
      return 0;
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
    v5 = xxxSetLayeredWindow(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
    if ( v5 >= 0 )
    {
      LOBYTE(v6) = -1;
      v5 = SetLayeredWindowAttributes(a1, 0LL, v6, 4 * (a2 & 4 | 1u));
      if ( v5 < 0 )
      {
        UnsetLayeredWindow(a1, 3LL);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
        v7 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v7);
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v5 = UnsetLayeredWindow(a1, (a2 & 0x10 | 8u) >> 3);
    else
      v5 = 0;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  return (unsigned int)v5;
}
