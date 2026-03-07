char *AcpipAllocatePciBusState()
{
  char *Pool2; // rbx
  KIRQL v1; // al
  __int64 v2; // rcx
  _BYTE *v3; // rdx

  Pool2 = (char *)ExAllocatePool2(64LL, 136LL, 1181770561LL);
  if ( !Pool2 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    v2 = 0LL;
    v3 = &unk_1C006ED68;
    while ( *v3 )
    {
      v2 = (unsigned int)(v2 + 1);
      v3 += 144;
      if ( (unsigned int)v2 >= 4 )
        goto LABEL_7;
    }
    *((_BYTE *)&gPreAllocPciPool + 144 * v2 + 136) = 1;
    Pool2 = (char *)&gPreAllocPciPool + 144 * v2;
LABEL_7:
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v1);
  }
  return Pool2;
}
