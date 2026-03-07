void __fastcall xxxMNKeyFilter(__int64 *a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp

  v3 = *(_DWORD *)(a2 + 8);
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 4) == 0 )
    {
      if ( !xxxMNStartMenu(a1, a2, 1) )
        return;
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32
        || a3 == 45
        && (!*(_QWORD *)(*(_QWORD *)*a1 + 8LL)
         || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 8LL) + 40LL) + 31LL) & 0xC0) == 0x40) )
      {
        if ( *(_QWORD *)(*(_QWORD *)*a1 + 8LL)
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 8LL) + 40LL) + 30LL) & 8) == 0 )
        {
          xxxMessageBeep(0LL);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy(*(_QWORD *)*a1, a2);
        if ( (**(_DWORD **)*a1 & 4) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 48LL) )
          xxxMNSwitchToAlternateMenu((__int64 **)a1, a2);
        if ( (**(_DWORD **)*a1 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*(_QWORD *)(*(_QWORD *)*a1 + 16LL), *(_QWORD **)(*(_QWORD *)*a1 + 40LL));
        xxxMNSelectItem((__int64 **)a1, a2, 0);
        xxxMNOpenHierarchy((__int64 **)a1, a2);
        **(_DWORD **)*a1 &= ~0x80u;
      }
      else
      {
        xxxMNChar((__int64 **)a1, a2, a3);
        if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (**(_DWORD **)*a1 & 0x80000) == 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          return;
        }
      }
    }
    else
    {
      xxxMNSelectItem((__int64 **)a1, a2, 0);
    }
    if ( (v3 & 4) == 0 && (*(_DWORD *)(a2 + 8) & 4) != 0 )
      xxxMNLoop((__int64 **)a1, a2, 0LL, 0);
  }
}
