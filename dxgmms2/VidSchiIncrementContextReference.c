/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C00146D0
 * Callers:
 *     VidSchiSetTransferContextRunningTime @ 0x1C0010B90 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiCreateContextInternal @ 0x1C0013B3C (VidSchiCreateContextInternal.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0014D90 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0017AA4 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiReportHwHang @ 0x1C00475B8 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiIncrementContextReference(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 908) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 3840LL, a1, 0LL, 0LL);
      __debugbreak();
      JUMPOUT(0x1C002AA90LL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
