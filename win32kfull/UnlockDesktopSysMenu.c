__int64 __fastcall UnlockDesktopSysMenu(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) &= ~0x80u;
  return UnlockDesktopMenu(a1);
}
