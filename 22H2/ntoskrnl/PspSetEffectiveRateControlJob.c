/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x1409B2A88
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     PspSetRateControlJobPreCallback @ 0x1409B33E0 (PspSetRateControlJobPreCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1536), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1536), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 1024) = a2;
}
