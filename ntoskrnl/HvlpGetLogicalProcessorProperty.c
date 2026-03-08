/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x14053EAB4
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x140542380 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x14093E204 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(ULONG a1, LONG a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  PHYSICAL_ADDRESS *v7; // rbx
  PHYSICAL_ADDRESS *v8; // r12
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v14 = 0LL;
  LODWORD(v15) = 0;
  v11 = 0LL;
  LODWORD(v12) = 0;
  v6 = 0;
  v13 = 0LL;
  v10 = 0LL;
  v7 = HvlpAcquireHypercallPage((__int64)&v13, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage((__int64)&v10, 2, 0LL, 32LL);
  v7->LowPart = a1;
  v7->HighPart = a2;
  if ( (unsigned __int16)HvcallInitiateHypercall(122) )
  {
    v6 = -1073741823;
  }
  else
  {
    *a3 = *(_OWORD *)&v8->LowPart;
    a3[1] = *(_OWORD *)&v8[2].LowPart;
  }
  HvlpReleaseHypercallPage(&v10);
  HvlpReleaseHypercallPage(&v13);
  return v6;
}
