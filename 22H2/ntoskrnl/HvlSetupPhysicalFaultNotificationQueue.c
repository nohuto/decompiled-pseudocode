/*
 * XREFs of HvlSetupPhysicalFaultNotificationQueue @ 0x1404F22E0
 * Callers:
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1402E9070 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140301020 (MmGetPhysicalAddress.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpAllocateOverlayPages @ 0x1404FA8CC (HvlpAllocateOverlayPages.c)
 */

__int64 __fastcall HvlSetupPhysicalFaultNotificationQueue(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  void *OverlayPages; // rax
  void *v6; // rbp
  unsigned int v7; // ebx
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r9
  __int16 v15; // ax
  int v16; // edi
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-28h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  OverlayPages = (void *)HvlpAllocateOverlayPages(a1, a2, a3);
  v6 = OverlayPages;
  if ( OverlayPages )
  {
    memset(OverlayPages, 0, 0x1000uLL);
    PhysicalAddress = MmGetPhysicalAddress(v6);
    v9 = HvlpAcquireHypercallPage(&v20, 1LL, 0LL, 24LL);
    v10 = HvlpAcquireHypercallPage(&v18, 2LL, 0LL, 8LL);
    v11 = *((_QWORD *)&v19 + 1);
    v12 = (int *)v10;
    *(_DWORD *)(v9 + 4) = 0;
    *(_DWORD *)v9 = 1;
    v13 = *((_QWORD *)&v21 + 1);
    *(_QWORD *)(v9 + 8) = PhysicalAddress.QuadPart / 4096;
    *(_QWORD *)(v9 + 16) = 1LL;
    v15 = HvcallInitiateHypercall(32772, v13, v11, v14);
    v16 = *v12;
    LOWORD(PhysicalAddress.LowPart) = v15;
    HvlpReleaseHypercallPage(&v18);
    HvlpReleaseHypercallPage(&v20);
    if ( LOWORD(PhysicalAddress.LowPart) )
    {
      v7 = -1073741823;
    }
    else
    {
      v7 = 0;
      *a1 = v6;
      v6 = 0LL;
      *a2 = v16 << 12;
    }
    if ( v6 )
      MmFreeContiguousMemory(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
