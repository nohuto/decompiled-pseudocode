int __fastcall SetWakeBit(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  BOOL v9; // esi
  __int64 v10; // r10
  int v11; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 488);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 96LL) = a1;
      v5 = *(_QWORD *)(a1 + 432);
      if ( v5 == gpqForeground )
      {
        v6 = *(_QWORD *)(v5 + 112);
        if ( v6 )
          v7 = *(_QWORD *)(v6 + 16);
        else
          v7 = *(_QWORD *)(v5 + 96);
        v9 = 0;
        if ( (unsigned int)HasHidTable(v7) )
        {
          v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v5) + 424) + 824LL) + 100LL);
          if ( (v8 & 1) != 0 )
            v9 = 1;
        }
        *(_DWORD *)(SGDGetUserSessionState(v8) + 15956) = v9;
      }
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 432));
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL) = a1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 8LL), a2);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 448) + 4LL), a2);
    if ( (a2 & 0x1C07) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 424);
      v11 = *(_DWORD *)(v10 + 12);
      if ( (v11 & 0x400000) != 0
        && ((a2 & 2) == 0 || *(_DWORD *)(gpsi + 4960LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 4964LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v10 + 12) = v11 & 0xFFBFFFFF;
        ForegroundBoost::SetForegroundPriority(a1, 1LL);
      }
    }
    v2 = *(_QWORD *)(a1 + 448);
    if ( (a2 & *(_DWORD *)(v2 + 16)) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 736), 2, 0);
  }
  return v2;
}
