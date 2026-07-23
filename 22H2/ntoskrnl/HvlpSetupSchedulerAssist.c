/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x1404F3D5C
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403A7298 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140301020 (MmGetPhysicalAddress.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _DWORD *v2; // rdi
  PHYSICAL_ADDRESS *v3; // rbx
  PHYSICAL_ADDRESS v5[5]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD **)(a1 + 33976);
  memset(v5, 0, 32);
  if ( v2 )
  {
    *v2 = 2056;
    v2[1] = 0;
    v3 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage(v5, 1, 0LL, 16LL);
    v3->LowPart = 4;
    v3->HighPart = 1;
    v3[1] = MmGetPhysicalAddress(v2);
    HvcallInitiateHypercall(32773);
    LOBYTE(v1) = HvlpReleaseHypercallPage((__int64)v5);
  }
  return (char)v1;
}
