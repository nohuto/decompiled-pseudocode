__int64 __fastcall ACPIInternalInterruptPolarityCacheStorePolarity(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 **v7; // rdi
  KIRQL v8; // r14
  __int64 *i; // rax
  __int64 Pool2; // rax
  __int64 *v11; // rcx

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0LL;
  v7 = (__int64 **)(a1 + 712);
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = *v7; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v7 )
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1131438913LL);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a2;
        *(_DWORD *)(Pool2 + 20) = a3;
        v11 = v7[1];
        if ( (__int64 **)*v11 != v7 )
          __fastfail(3u);
        *(_QWORD *)Pool2 = v7;
        *(_QWORD *)(Pool2 + 8) = v11;
        *v11 = Pool2;
        v7[1] = (__int64 *)Pool2;
      }
      else
      {
        v3 = -1073741670;
      }
      goto LABEL_14;
    }
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  if ( *((_DWORD *)i + 5) != a3 )
    *((_DWORD *)i + 5) = -1;
LABEL_14:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  return v3;
}
