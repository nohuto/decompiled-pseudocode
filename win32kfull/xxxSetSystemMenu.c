__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD ***a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 160);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v4);
    v5 = a2[2];
    if ( !v5 )
      v5 = **a2;
    MNPositionSysMenu(a1, v5);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437);
    return 0LL;
  }
}
