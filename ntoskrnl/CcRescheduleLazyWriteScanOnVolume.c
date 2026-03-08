/*
 * XREFs of CcRescheduleLazyWriteScanOnVolume @ 0x1402EB4A8
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcCoalescingCallBackHelper @ 0x1405330B0 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     CcScheduleLazyWriteScanVolume @ 0x140242B4C (CcScheduleLazyWriteScanVolume.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall CcRescheduleLazyWriteScanOnVolume(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1172) )
    return;
  if ( !*(_BYTE *)(a1 + 985) )
  {
    CcScheduleLazyWriteScanVolume((_BYTE *)a1, 0, 0);
    return;
  }
  if ( a2 && (v2 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v2 )
  {
    v3.QuadPart = v2 * (unsigned int)KeMaximumIncrement;
    if ( v3.QuadPart > 160000000 )
    {
      v3.QuadPart = 160000000LL;
    }
    else
    {
      if ( v3.QuadPart < 10000000 )
        v3 = CcIdleDelay;
      if ( v3.QuadPart <= 0 )
        goto LABEL_7;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = CcIdleDelay;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 984) )
    KeBugCheckEx(0x34u, 0x7A0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 920), v3, 0, 0x3E8u, 0LL);
}
