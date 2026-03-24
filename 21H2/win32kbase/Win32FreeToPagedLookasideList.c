/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C002BAA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007B65C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1C00C7430 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C011C384 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C011C744 (NullifyLookasideRef.c)
 *     UserDeleteW32Thread @ 0x1C011C830 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C0128414 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257D60;
  if ( qword_1C0257D60 )
  {
    result = (__int64 (*)(void))qword_1C0257D60();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0257D68;
      if ( qword_1C0257D68 )
        return (__int64 (*)(void))qword_1C0257D68(a1, a2);
    }
  }
  return result;
}
