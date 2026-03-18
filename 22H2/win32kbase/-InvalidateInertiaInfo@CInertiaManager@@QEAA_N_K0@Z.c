/*
 * XREFs of ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C000E904
 * Callers:
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1C00D5060 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1C00D5148 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DE780 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C00D5320 (-RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

char __fastcall CInertiaManager::InvalidateInertiaInfo(CInertiaManager *this, __int64 a2, __int64 a3)
{
  char *v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v14[12]; // [rsp+20h] [rbp-C8h] BYREF

  if ( (*((_DWORD *)this + 48) & 1) != 0 && a3 == *((_QWORD *)this + 2) )
  {
    v4 = (char *)this + 8;
    if ( a2 == *((_QWORD *)this + 1) )
    {
      memset(v14, 0, sizeof(v14));
      v5 = v14[1];
      *(_OWORD *)v4 = v14[0];
      v6 = v14[2];
      *((_OWORD *)v4 + 1) = v5;
      v7 = v14[3];
      *((_OWORD *)v4 + 2) = v6;
      v8 = v14[4];
      *((_OWORD *)v4 + 3) = v7;
      v9 = v14[5];
      *((_OWORD *)v4 + 4) = v8;
      v10 = v14[6];
      *((_OWORD *)v4 + 5) = v9;
      *((_OWORD *)v4 + 6) = v10;
      *((_OWORD *)v4 + 7) = v14[7];
      v11 = v14[9];
      *((_OWORD *)v4 + 8) = v14[8];
      v12 = v14[10];
      *((_OWORD *)v4 + 9) = v11;
      v13 = v14[11];
      *((_OWORD *)v4 + 10) = v12;
      *((_OWORD *)v4 + 11) = v13;
      InputTraceLogging::Inertia::RemoveInertiaInfo((const struct INERTIA_INFO_INTERNAL *)v4);
    }
  }
  return 1;
}
