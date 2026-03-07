__int64 __fastcall Simulator_GetChildNode(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // rcx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 24);
      if ( (_QWORD *)*v4 == v4 )
        *(_QWORD *)(a1 + 24) = 0LL;
      else
        *(_QWORD *)(a1 + 24) = *v4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return 0LL;
}
