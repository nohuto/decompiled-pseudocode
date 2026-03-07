__int64 __fastcall DXGVIRTUALMACHINE::CompleteTransaction(
        DXGVIRTUALMACHINE *this,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  DXGPUSHLOCK *v9; // rsi
  char *v10; // rax
  char *i; // rbx
  unsigned int v13; // eax

  v6 = a3;
  v9 = (DXGVIRTUALMACHINE *)((char *)this + 344);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  DXGPUSHLOCK::AcquireExclusive(v9);
  v10 = (char *)this + 376;
  for ( i = (char *)*((_QWORD *)this + 47); ; i = *(char **)i )
  {
    if ( i == v10 )
    {
      WdLogSingleEntry1(3LL, 88LL);
      v6 = -1073741823;
      goto LABEL_6;
    }
    if ( *((_QWORD *)i + 2) == a2 )
      break;
  }
  v13 = *((_DWORD *)i + 16);
  if ( v13 > a5 )
  {
    WdLogSingleEntry1(2LL, 80LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Transaction result from guest exceeds the buffer size provided by the transaction object. Cannot copy result.",
      80LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -2147483643;
  }
  else if ( v13 )
  {
    memmove(*((void **)i + 7), a4, v13);
  }
  *((_DWORD *)i + 12) = v6;
  KeSetEvent((PRKEVENT)i + 1, 0, 0);
LABEL_6:
  *((_QWORD *)v9 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
