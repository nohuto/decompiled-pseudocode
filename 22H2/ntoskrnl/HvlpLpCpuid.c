/*
 * XREFs of HvlpLpCpuid @ 0x140A8F2D8
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140A8EF24 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140A8F160 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v13; // rbx
  _DWORD *v14; // rdi
  _OWORD v16[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v17[2]; // [rsp+48h] [rbp-28h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = _RAX;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    v13 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v17, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v16, 2, 0LL, 16LL);
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvcallInitiateHypercall(136);
    *a4 = *v14;
    a4[1] = v14[1];
    a4[2] = v14[2];
    a4[3] = v14[3];
    HvlpReleaseHypercallPage((__int64)v16);
    LOBYTE(_RAX) = HvlpReleaseHypercallPage((__int64)v17);
  }
  return _RAX;
}
