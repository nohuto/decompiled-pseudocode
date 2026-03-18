/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x140542240
 * Callers:
 *     HvlEnlightenProcessor @ 0x140382F20 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028BDC0 (MmGetPhysicalAddress.c)
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x140540860 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1405414B0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  char result; // al
  PHYSICAL_ADDRESS *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 35000);
  result = 0;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  if ( v1 )
  {
    *v1 = 2056;
    v1[1] = 0;
    v3 = HvlpAcquireHypercallPage((__int64)&v4, 1, 0LL, 16LL);
    v3->LowPart = 5;
    v3->HighPart = 1;
    v3[1] = MmGetPhysicalAddress(v1);
    HvcallInitiateHypercall(32773);
    return HvlpReleaseHypercallPage((__int64)&v4);
  }
  return result;
}
