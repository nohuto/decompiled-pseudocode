/*
 * XREFs of HvlpInitializePowerStatistics @ 0x140544B4C
 * Callers:
 *     HvlPhase1Initialize @ 0x140384654 (HvlPhase1Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  __int64 result; // rax
  PHYSICAL_ADDRESS *v1; // rbx
  PHYSICAL_ADDRESS *v2; // rdi
  __int16 v3; // ax
  unsigned int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+58h] [rbp-8h]

  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  if ( (HvlEnlightenments & 0x400) != 0 )
  {
    v1 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 8LL);
    v2 = HvlpAcquireHypercallPage((__int64)&v5, 2, 0LL, 392LL);
    v1->QuadPart = 0LL;
    v1->LowPart = 4;
    v3 = HvcallInitiateHypercall(155);
    if ( !v3 )
    {
      xmmword_140D17680 = *(_OWORD *)&v2->LowPart;
      xmmword_140D17690 = *(_OWORD *)&v2[2].LowPart;
      unk_140D176A0 = *(_OWORD *)&v2[4].LowPart;
      qword_140D176B0 = v2[6].QuadPart;
    }
    v4 = v3 != 0 ? 0xC0000001 : 0;
    HvlpReleaseHypercallPage((__int64)&v5);
    HvlpReleaseHypercallPage((__int64)&v8);
    return v4;
  }
  return result;
}
