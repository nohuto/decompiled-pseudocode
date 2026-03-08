/*
 * XREFs of ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x1C0048E70
 * Callers:
 *     ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x1C004ADD8 (-VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z.c)
 *     ?VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C004B174 (-VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEA.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiCommitFlipQueueLogUpdate(
        LARGE_INTEGER *a1,
        unsigned int a2,
        DWORD a3,
        unsigned int *const a4,
        bool a5)
{
  __int64 HighPart; // rdi
  __int64 v6; // rbp
  __int64 LowPart; // rsi
  signed int v10; // ecx
  signed int v11; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v13; // ecx
  LARGE_INTEGER v14; // rdx
  LARGE_INTEGER v15; // r8

  HighPart = (unsigned int)a1[27].HighPart;
  v6 = a2;
  if ( a3 + 1 > (unsigned int)HighPart )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 53248LL, a2, a3, HighPart);
    __debugbreak();
  }
  LowPart = a1[28].LowPart;
  if ( (_DWORD)LowPart == a3 )
    goto LABEL_15;
  v10 = (unsigned int)HighPart >> 1;
  v11 = LowPart - a3;
  if ( (int)(LowPart - a3) <= 0 )
    goto LABEL_9;
  if ( v11 >= v10 )
  {
LABEL_15:
    while ( 1 )
    {
      a1[28].LowPart = a3;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = a1[27].HighPart;
      a1[29] = PerformanceCounter;
      BYTE4(a1[28].QuadPart) = a5;
      v14 = *(LARGE_INTEGER *)(a1[35].QuadPart + 16LL * ((v13 + a1[28].LowPart - 1) % v13));
      if ( !v14.QuadPart )
        break;
      v15 = a1[31];
      if ( v14.QuadPart >= (unsigned __int64)v15.QuadPart )
        goto LABEL_12;
      g_DxgMmsBugcheckExportIndex = 1;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
              0LL,
              281LL,
              49152LL,
              v6,
              (LARGE_INTEGER)v14.QuadPart,
              (LARGE_INTEGER)v15.QuadPart);
      __debugbreak();
LABEL_9:
      if ( -v11 >= v10 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( !a5 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 53248LL, v6, a3, LowPart);
      __debugbreak();
LABEL_12:
      a1[31] = v14;
      a4[v6] = ((int)LowPart + (int)HighPart - 1) % (unsigned int)HighPart;
    }
  }
}
