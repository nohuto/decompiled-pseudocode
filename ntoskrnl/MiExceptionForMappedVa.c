__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8

  v2 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v4 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v5 = P;
  while ( v5 )
  {
    v6 = v5[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( a1 < v6 + v5[4] )
    {
      if ( a1 >= v6 )
        break;
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[1];
    }
  }
  if ( v5 && (v5[7] & 2) != 0 )
    v2 = 1;
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v4);
  return v2;
}
