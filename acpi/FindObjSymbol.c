char __fastcall FindObjSymbol(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  char v4; // bl
  __int64 v5; // rdi
  KIRQL v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // al

  v4 = 0;
  v5 = 0LL;
  v8 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v9 = qword_1C006F860;
  if ( qword_1C006F860 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 16);
      if ( a1 >= v10 && (!v5 || v10 > *(_QWORD *)(v5 + 16)) )
        v5 = v9;
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v9 );
    if ( v5 )
    {
      v11 = *(_QWORD *)(v5 + 24);
      v12 = gdwfAMLI;
      *a2 = v11;
      if ( (v12 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 112));
      v4 = 1;
      *a3 = a1 - *(_DWORD *)(v5 + 16);
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
  return v4;
}
