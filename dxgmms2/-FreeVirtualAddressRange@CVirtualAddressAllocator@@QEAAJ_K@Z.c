__int64 __fastcall CVirtualAddressAllocator::FreeVirtualAddressRange(
        struct _KTHREAD **this,
        struct _RTL_BALANCED_NODE *a2,
        __int64 a3)
{
  char v3; // bp
  unsigned int v6; // esi
  struct _RTL_BALANCED_NODE *v7; // rbx
  int started; // eax
  struct _RTL_BALANCED_NODE *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v6 = -1073741811;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v3 = 1;
  }
  v7 = (struct _RTL_BALANCED_NODE *)this[6];
  v10 = a2;
  while ( v7 )
  {
    started = CompareVadByStartAddressAvl(&v10, v7);
    if ( started < 0 )
    {
      v7 = v7->Children[0];
    }
    else
    {
      if ( started <= 0 )
        break;
      v7 = v7->Children[1];
    }
  }
  if ( v7 )
  {
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
      (CVirtualAddressAllocator *)this,
      (struct VIDMM_VAD *)v7,
      a3);
    v6 = 0;
  }
  else
  {
    WdLogSingleEntry2(3LL, this, a2);
  }
  if ( v3 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return v6;
}
