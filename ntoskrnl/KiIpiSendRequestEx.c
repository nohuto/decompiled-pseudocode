/*
 * XREFs of KiIpiSendRequestEx @ 0x14021238C
 * Callers:
 *     KxFlushSingleTb @ 0x1402120DC (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x140212260 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KxFlushMultipleTb @ 0x14038C454 (KxFlushMultipleTb.c)
 *     KxFlushEntireTb @ 0x1403AD5FC (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x1404580A0 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140233230 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402E2150 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        void (__fastcall *a6)(__int64),
        __int64 a7)
{
  int v8; // ebx
  unsigned int v11; // ebx
  __int64 result; // rax

  v8 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
LABEL_3:
      KiIpiSendRequest(a1, a2, v8, a4, a5);
      if ( a6 )
        a6(a7);
      v11 = 0;
      while ( 1 )
      {
        result = *(unsigned int *)(a1 + 11648);
        if ( !(_DWORD)result )
          break;
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      return result;
    }
  }
  else if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  result = (__int64)a6;
  if ( a6 )
    return ((__int64 (__fastcall *)(__int64))a6)(a7);
  return result;
}
