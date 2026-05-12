/*
 * XREFs of RaAdapterDeregisterFromIdleDetection @ 0x1C003E734
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0078E14 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaAdapterDeregisterFromIdleDetection(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 5088);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 5088) = 0LL;
    PoFxUnregisterDevice(*v1);
    ExFreePoolWithTag(v1, 0x4F506152u);
  }
}
