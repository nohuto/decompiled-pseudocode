__int64 __fastcall HvlSetupPhysicalFaultNotificationQueue(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  void *OverlayPages; // rax
  unsigned int v7; // r14d
  void *v8; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  _QWORD *v10; // rdi
  int *v11; // rsi
  __int16 v12; // ax
  int v13; // edi
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]

  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  OverlayPages = (void *)HvlpAllocateOverlayPages(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0);
  v7 = 0;
  v8 = OverlayPages;
  if ( OverlayPages )
  {
    memset(OverlayPages, 0, 0x1000uLL);
    PhysicalAddress = MmGetPhysicalAddress(v8);
    v10 = (_QWORD *)HvlpAcquireHypercallPage(&v16, 1LL, 0LL, 24LL);
    v11 = (int *)HvlpAcquireHypercallPage(&v15, 2LL, 0LL, 8LL);
    *v10 = 1LL;
    v10[2] = 1LL;
    v10[1] = PhysicalAddress.QuadPart / 4096;
    v12 = HvcallInitiateHypercall(32772);
    v13 = *v11;
    LOWORD(PhysicalAddress.LowPart) = v12;
    HvlpReleaseHypercallPage(&v15);
    HvlpReleaseHypercallPage(&v16);
    if ( LOWORD(PhysicalAddress.LowPart) )
    {
      v7 = -1073741823;
      MmFreeContiguousMemory(v8);
    }
    else
    {
      *a2 = v13 << 12;
      *a1 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
