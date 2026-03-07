__int64 __fastcall AMLIPauseInterpreter(_QWORD *a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  _QWORD *v4; // rax

  v1 = 0;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( a1[2] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ++dword_1C0070078;
    NewIrql = v3;
    if ( glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
    {
      gReadyQueue |= 8u;
    }
    else
    {
      v4 = (_QWORD *)qword_1C0070088;
      gReadyQueue |= 4u;
      v1 = 32772;
      if ( *(__int64 **)qword_1C0070088 != &qword_1C0070080 )
        __fastfail(3u);
      *a1 = &qword_1C0070080;
      a1[1] = v4;
      *v4 = a1;
      qword_1C0070088 = (__int64)a1;
    }
    KeReleaseSpinLock(&SpinLock, NewIrql);
    LogSchedEvent(1346458963, 0, v1, 0, 0LL);
    if ( v1 == 32772 )
      return 259;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
