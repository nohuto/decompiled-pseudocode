/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x14053FBE4
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(ULONG a1, __int64 a2, __int128 *a3)
{
  PHYSICAL_ADDRESS *v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  v11 = 0LL;
  LODWORD(v12) = 0;
  v10 = 0LL;
  v5 = HvlpAcquireHypercallPage((__int64)&v10, 1, 0LL, 40LL);
  v6 = *a3;
  v7 = a3[1];
  v5->LowPart = a1;
  *(_OWORD *)&v5[1].LowPart = v6;
  v5->HighPart = 2;
  *(_OWORD *)&v5[3].LowPart = v7;
  v8 = (unsigned __int16)HvcallInitiateHypercall(121) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v10);
  return v8;
}
