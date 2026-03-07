__int64 __fastcall HalpIrtAllocateDeviceAperture(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v9; // ebp
  int v10; // edi
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rax

  v9 = 0;
  v10 = 0;
  ExAcquireFastMutex(&HalpIrtLock);
  i = HalpIrtDefaultDeviceAperture;
  if ( HalpIrtDefaultDeviceAperture && (a4 != 3 || HalpIrtTotalApertures == 1) )
  {
LABEL_4:
    *(_DWORD *)(i + 20) += a3;
  }
  else
  {
    while ( 1 )
    {
      for ( i = HalpIrtAllocatedDeviceAperturesHead; (__int64 *)i != &HalpIrtAllocatedDeviceAperturesHead; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 24) == a1 && *(_DWORD *)(i + 28) == a2 )
          goto LABEL_4;
      }
      i = HalpIrtFreeDeviceAperturesHead;
      if ( (__int64 *)HalpIrtFreeDeviceAperturesHead != &HalpIrtFreeDeviceAperturesHead )
        break;
      ExReleaseFastMutex(&HalpIrtLock);
      if ( v9 )
        return (unsigned int)-1073741670;
      v10 = HalpIrtExtendApertureRange();
      if ( v10 < 0 )
        return (unsigned int)v10;
      v9 = 1;
      ExAcquireFastMutex(&HalpIrtLock);
    }
    v12 = *(_QWORD *)HalpIrtFreeDeviceAperturesHead;
    if ( *(__int64 **)(HalpIrtFreeDeviceAperturesHead + 8) != &HalpIrtFreeDeviceAperturesHead
      || *(_QWORD *)(v12 + 8) != HalpIrtFreeDeviceAperturesHead
      || (HalpIrtFreeDeviceAperturesHead = *(_QWORD *)HalpIrtFreeDeviceAperturesHead,
          *(_QWORD *)(v12 + 8) = &HalpIrtFreeDeviceAperturesHead,
          *(_DWORD *)(i + 24) = a1,
          *(_DWORD *)(i + 28) = a2,
          *(_DWORD *)(i + 20) = a3,
          v13 = HalpIrtAllocatedDeviceAperturesHead,
          *(__int64 **)(HalpIrtAllocatedDeviceAperturesHead + 8) != &HalpIrtAllocatedDeviceAperturesHead) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)i = HalpIrtAllocatedDeviceAperturesHead;
    *(_QWORD *)(i + 8) = &HalpIrtAllocatedDeviceAperturesHead;
    *(_QWORD *)(v13 + 8) = i;
    HalpIrtAllocatedDeviceAperturesHead = i;
  }
  ExReleaseFastMutex(&HalpIrtLock);
  *a5 = *(_DWORD *)(i + 16);
  return (unsigned int)v10;
}
