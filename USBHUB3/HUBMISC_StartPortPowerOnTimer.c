/*
 * XREFs of HUBMISC_StartPortPowerOnTimer @ 0x1C00324F8
 * Callers:
 *     HUBPSM20_WaitingForPortPowerOnTimerOnResume @ 0x1C0012A90 (HUBPSM20_WaitingForPortPowerOnTimerOnResume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_StartPortPowerOnTimer(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = *a1;
  v2 = a1[164];
  v3 = -1000000LL;
  if ( *(_BYTE *)(v1 + 240) )
    v3 = -3000000LL;
  return ExSetTimer(v2, v3, 0LL, 0LL);
}
