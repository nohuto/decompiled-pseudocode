/*
 * XREFs of HvlSetPartitionProperty @ 0x140543734
 * Callers:
 *     HvlResumePartition @ 0x1405431A0 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x140543B10 (HvlSuspendPartition.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(LONGLONG a1, __int64 a2, PHYSICAL_ADDRESS a3)
{
  PHYSICAL_ADDRESS *v6; // rax
  __int16 v7; // bx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 24LL);
  v6->QuadPart = a1;
  v6[1].LowPart = 0x20000;
  v6[2] = a3;
  v7 = HvcallInitiateHypercall(69);
  HvlpReleaseHypercallPage((__int64)&v8);
  return v7 != 0 ? 0xC0000001 : 0;
}
