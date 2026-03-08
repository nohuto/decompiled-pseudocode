/*
 * XREFs of MiPrefetchPagesViable @ 0x1402FCD14
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 * Callees:
 *     MiPrefetchNormally @ 0x1402282A4 (MiPrefetchNormally.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 */

__int64 __fastcall MiPrefetchPagesViable(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  if ( !(unsigned int)MiPrefetchNormally(a1, a4, a3) )
    return 0LL;
  if ( a2 )
  {
    if ( *a2 < a4 )
      return 0LL;
    *a2 -= a4;
  }
  if ( !a5 || MiObtainFaultCharges(a1, a4, 1LL) == a4 )
    return 1LL;
  MiReturnFaultCharges((__int64)a1, a4, (struct _KPRCB *)1);
  return 0LL;
}
