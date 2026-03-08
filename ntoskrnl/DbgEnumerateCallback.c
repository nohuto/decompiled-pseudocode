/*
 * XREFs of DbgEnumerateCallback @ 0x1403D1390
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

__int64 __fastcall DbgEnumerateCallback(_UNKNOWN ****a1)
{
  _UNKNOWN ***v2; // rdx
  __int64 v3; // rdi
  _UNKNOWN **v4; // rbx
  __int64 v5; // rsi

  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v2 = (_UNKNOWN ***)&RtlpDebugPrintCallbackList;
  if ( *a1 )
    v2 = *a1;
  v3 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v4 = *v2;
  v5 = 0LL;
  while ( v4 != &RtlpDebugPrintCallbackList )
  {
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v4 - 2) )
    {
      v5 = (__int64)*(v4 - 1);
      *a1 = (_UNKNOWN ***)v4;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( v3 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 - 16));
  return v5;
}
