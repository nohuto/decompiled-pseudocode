/*
 * XREFs of HvlDmaGetHybridPassthroughReservedRegions @ 0x140540EE0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlDmaGetHybridPassthroughReservedRegions(__int64 a1)
{
  PHYSICAL_ADDRESS *v2; // rbx
  PHYSICAL_ADDRESS *v3; // rdi
  unsigned __int16 v4; // bx
  __int128 v6; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+30h] [rbp-D0h]
  __int64 v8; // [rsp+38h] [rbp-C8h]
  __int128 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  _BYTE v12[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v13[8192]; // [rsp+80h] [rbp-80h] BYREF

  v10 = 0LL;
  LODWORD(v11) = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v9 = 0LL;
  v6 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v9, 1, (__int64)v12, 16LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v6, 2, (__int64)v13, 4096LL);
  v2->QuadPart = HvlPartitionId;
  v2[1].QuadPart = 589824LL;
  v4 = HvcallInitiateHypercall(257);
  if ( !v4 )
  {
    *(PHYSICAL_ADDRESS *)a1 = *v3;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v3[1].LowPart;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v3[3].LowPart;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v3[5].LowPart;
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v3[7].LowPart;
    *(_DWORD *)(a1 + 8) = 512;
    *(_QWORD *)(a1 + 16) = a1 + 24;
  }
  HvlpReleaseHypercallPage((__int64)&v6);
  HvlpReleaseHypercallPage((__int64)&v9);
  return HvlpHvToNtStatus(v4);
}
