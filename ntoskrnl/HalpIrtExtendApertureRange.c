/*
 * XREFs of HalpIrtExtendApertureRange @ 0x140931890
 * Callers:
 *     HalpIrtAllocateDeviceAperture @ 0x140931740 (HalpIrtAllocateDeviceAperture.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 HalpIrtExtendApertureRange()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  void *Pool2; // rsi
  bool v3; // di
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v0 = HalpIrtAperturesPerRange;
  v1 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(32 * HalpIrtAperturesPerRange), 1768710472LL);
  v3 = Pool2 != 0LL;
  ExAcquireFastMutex(&HalpIrtLock);
  v4 = HalpIrtAllocatedApertures;
  v5 = HalpIrtAllocatedApertures + v0;
  if ( HalpIrtAllocatedApertures + v0 <= HalpIrtAperturesPerRange || (HalpIrtAllocationFlags & 8) != 0 )
  {
    if ( v5 <= HalpIrtTotalApertures )
    {
      if ( Pool2 )
      {
        for ( i = 0; i < v0; qword_140C60C48 = v7 )
        {
          v7 = (__int64)Pool2 + 32 * i;
          *(_DWORD *)(v7 + 16) = v4 + i;
          v8 = (__int64 *)qword_140C60C48;
          if ( *(__int64 **)qword_140C60C48 != &HalpIrtFreeDeviceAperturesHead )
            __fastfail(3u);
          *(_QWORD *)v7 = &HalpIrtFreeDeviceAperturesHead;
          ++i;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
        }
        HalpIrtAllocatedApertures = v5;
        v3 = 0;
      }
      else
      {
        v1 = -1073741670;
      }
    }
  }
  else
  {
    v1 = -1073741637;
  }
  ExReleaseFastMutex(&HalpIrtLock);
  if ( v3 )
    ExFreePoolWithTag(Pool2, 0);
  return v1;
}
