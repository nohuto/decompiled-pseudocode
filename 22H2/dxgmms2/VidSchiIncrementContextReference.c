/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C0011440
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C00106CC (VidSchiCreateContextInternal.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0013A20 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C00156C8 (VidSchiNeedToForcePreemptNode.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0033470 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C003D024 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C008E0A0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIncrementContextReference(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 900) )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
      v4[3] = 281LL;
      v4[4] = 3840LL;
      v4[5] = a1;
      v4[6] = 0LL;
      v4[7] = 0LL;
      WdLogEvent5_WdCriticalError(v4);
      __debugbreak();
      JUMPOUT(0x1C001FC9ALL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
