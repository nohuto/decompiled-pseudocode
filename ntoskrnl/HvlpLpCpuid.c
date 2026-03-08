/*
 * XREFs of HvlpLpCpuid @ 0x14093E4E0
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140B8FD74 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140B8FFB0 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvcallInitInputControl @ 0x14036E320 (HvcallInitInputControl.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpLpCpuid(ULONG a1, ULONG a2, LONG a3, PHYSICAL_ADDRESS *a4)
{
  PHYSICAL_ADDRESS *v13; // rbx
  PHYSICAL_ADDRESS *v14; // rdi
  int v15; // ecx
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]

  v17 = 0LL;
  v22 = 0LL;
  LODWORD(v23) = 0;
  v19 = 0LL;
  LODWORD(v20) = 0;
  v21 = 0LL;
  v18 = 0LL;
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    a4->LowPart = _RAX;
    a4->HighPart = _RBX;
    a4[1].LowPart = _RCX;
    a4[1].HighPart = _RDX;
  }
  else
  {
    HvcallInitInputControl(136, &v17);
    HIDWORD(v17) = HIDWORD(v17) & 0xF000F000 | 1;
    v13 = HvlpAcquireHypercallPage((__int64)&v21, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage((__int64)&v18, 2, 0LL, 16LL);
    v15 = v17;
    v13->LowPart = a1;
    v13->HighPart = 0x10000;
    v13[1].LowPart = a2;
    v13[1].HighPart = a3;
    HvcallInitiateHypercall(v15);
    *a4 = *v14;
    a4[1] = v14[1];
    HvlpReleaseHypercallPage((__int64)&v18);
    LOBYTE(_RAX) = HvlpReleaseHypercallPage((__int64)&v21);
  }
  return _RAX;
}
