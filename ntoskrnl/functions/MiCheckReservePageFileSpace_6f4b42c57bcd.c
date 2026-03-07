char __fastcall MiCheckReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rdi
  __int64 CurrentThread; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r11

  v3 = (_BYTE *)a2;
  LOBYTE(CurrentThread) = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( (_BYTE)CurrentThread == 4 )
    return CurrentThread;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1 + 16;
  LOBYTE(CurrentThread) = 0;
  if ( (unsigned __int64)(a1 + 16) < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  LOBYTE(CurrentThread) = -8;
  if ( v7 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_3;
  if ( (MiFlags & 0x600000) == 0 )
    goto LABEL_3;
  CurrentThread = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 912LL) == 1 )
    goto LABEL_3;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
    {
      CurrentThread = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( CurrentThread )
      {
        a2 = v6 | 0x20;
        CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v7 >> 3) & 0x1FF));
        if ( (CurrentThread & 0x20) == 0 )
          a2 = *(_QWORD *)(a1 + 16);
        v6 = a2;
        if ( (CurrentThread & 0x42) != 0 )
          v6 = a2 | 0x42;
      }
    }
LABEL_3:
    if ( (v6 & 1) != 0 )
      return CurrentThread;
  }
  if ( !v6 || (LOBYTE(CurrentThread) = qword_140C657C0, !qword_140C657C0) || (qword_140C657C0 & v6) != 0 )
  {
    LODWORD(CurrentThread) = *(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL))
                                       + 1076LL);
    if ( (_DWORD)CurrentThread )
    {
      LOBYTE(CurrentThread) = (unsigned __int8)v6 >> 1;
      if ( (v6 & 2) == 0 )
      {
        CurrentThread = MiGetWorkingSetSwapSupport(a3, a2, a3, v6);
        if ( !CurrentThread )
        {
          LODWORD(CurrentThread) = MI_IS_RESET_PTE(v8);
          if ( !(_DWORD)CurrentThread || (*(_BYTE *)(a1 + 34) & 0x10) != 0 || (*v3 & 0x42) != 0 )
          {
            LOBYTE(CurrentThread) = 120;
            if ( (unsigned __int64)v3 <= 0xFFFFF6BFFFFFFF78uLL )
            {
              LOBYTE(CurrentThread) = 0;
              if ( (unsigned __int64)v3 >= 0xFFFFF68000000000uLL )
                LOBYTE(CurrentThread) = MiReservePageFileSpace(v9, v3);
            }
          }
        }
      }
    }
  }
  return CurrentThread;
}
