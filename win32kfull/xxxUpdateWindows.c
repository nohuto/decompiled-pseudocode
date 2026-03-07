__int64 __fastcall xxxUpdateWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rcx

  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1) + 57)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v4) + 57) + 8LL) + 64LL) & 1) == 0 )
  {
    xxxUpdateThreadsWindows(gptiCurrent, a1, a2);
  }
  return 1LL;
}
