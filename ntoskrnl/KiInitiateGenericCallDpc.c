/*
 * XREFs of KiInitiateGenericCallDpc @ 0x1402DC9E4
 * Callers:
 *     KiGenericCallDpcInitiatorWorker @ 0x1402DC8E0 (KiGenericCallDpcInitiatorWorker.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorDpc @ 0x1403C1750 (KiGenericCallDpcInitiatorDpc.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiInitiateGenericCallDpc(__int64 a1, _QWORD *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 result; // rax
  ULONG v12; // [rsp+50h] [rbp+8h] BYREF
  ULONG v13; // [rsp+58h] [rbp+10h] BYREF
  ULONG v14; // [rsp+5Ch] [rbp+14h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v12 = ActiveProcessorCount;
  v14 = ActiveProcessorCount;
  v13 = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v5 = KiProcessorBlock;
    v6 = ActiveProcessorCount;
    do
    {
      v7 = *v5;
      v8 = *v5 + 32352;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      if ( v7 != a1 )
        KiInsertQueueDpc(v8, (__int64)&v12, (__int64)&v13, 0LL, 0);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 32352, a2[1], &v12, &v13);
  v10 = 0;
  while ( 1 )
  {
    result = v12;
    if ( !v12 )
      break;
    if ( (++v10 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
    {
      HvlNotifyLongSpinWait(v10);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
