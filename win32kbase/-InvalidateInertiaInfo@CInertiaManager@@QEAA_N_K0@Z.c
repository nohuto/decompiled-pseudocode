/*
 * XREFs of ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00D5EBC
 * Callers:
 *     NtUserReportInertia @ 0x1C0002CA0 (NtUserReportInertia.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C020D290 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C00E0F84 (-RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage @ 0x1C00E1050 (Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C0210CA0 (-RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 */

char __fastcall CInertiaManager::InvalidateInertiaInfo(CInertiaManager *this, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD v14[12]; // [rsp+20h] [rbp-C8h] BYREF

  if ( (*((_DWORD *)this + 48) & 1) != 0 && a3 == *((_QWORD *)this + 2) )
  {
    v3 = (char *)this + 8;
    if ( a2 == *((_QWORD *)this + 1) )
    {
      memset(v14, 0, sizeof(v14));
      v4 = v14[1];
      *(_OWORD *)v3 = v14[0];
      v5 = v14[2];
      *((_OWORD *)v3 + 1) = v4;
      v6 = v14[3];
      *((_OWORD *)v3 + 2) = v5;
      v7 = v14[4];
      *((_OWORD *)v3 + 3) = v6;
      v8 = v14[5];
      *((_OWORD *)v3 + 4) = v7;
      v9 = v14[6];
      *((_OWORD *)v3 + 5) = v8;
      *((_OWORD *)v3 + 6) = v9;
      *((_OWORD *)v3 + 7) = v14[7];
      v10 = v14[9];
      *((_OWORD *)v3 + 8) = v14[8];
      v11 = v14[10];
      *((_OWORD *)v3 + 9) = v10;
      v12 = v14[11];
      *((_OWORD *)v3 + 10) = v11;
      *((_OWORD *)v3 + 11) = v12;
      if ( (unsigned int)Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage() )
        InputTraceLogging::Inertia::RemoveInertiaInfo((const struct INERTIA_INFO_INTERNAL *)v3);
      else
        InputTraceLogging::Win32k::RemoveInertiaInfo((const struct INERTIA_INFO_INTERNAL *)v3);
    }
  }
  return 1;
}
