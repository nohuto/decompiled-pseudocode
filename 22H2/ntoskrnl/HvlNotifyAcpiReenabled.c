/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1404F7B68
 * Callers:
 *     PopHiberCheckResume @ 0x140998890 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  _OWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  *(_DWORD *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvcallInitiateHypercall(135) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v2);
  return v0;
}
