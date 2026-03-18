/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1C01CCE84
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01CD100 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxClientRimDevCallback @ 0x1C022CF1C (xxxClientRimDevCallback.c)
 */

_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(int *a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int16 v7; // r8
  __int16 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)(v2 + 424);
  if ( *(_BYTE *)(v2 + 136) != 3 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_RIMPnpThreadQuickRelease__private_reporting,
      0x1946A51u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_DeliverDespiteMessageFilter_logged_traits,
      1,
      v13);
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v6, v5);
        if ( *(_UNKNOWN ***)(v4 + 32) == result )
        {
          if ( *(_QWORD *)(v4 + 864) )
          {
            *(_BYTE *)(v4 + 82) = 1;
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1108) & 2) != 0 )
              RIMUnlockExclusive(v4 + 792);
            RIMUnlockExclusive(v4 + 104);
            RawInputManagerDeviceObjectReference(v2);
            v7 = 0;
            v8 = 0;
            *(_QWORD *)(gptiCurrent + 1352LL) = v2;
            if ( *(_BYTE *)(v2 + 136) == 2 )
            {
              v9 = *(_QWORD *)(v2 + 544);
              if ( v9 )
              {
                v7 = *(_WORD *)(v9 + 40);
                v8 = *(_WORD *)(v9 + 42);
              }
            }
            v10 = *(_QWORD *)(v2 + 104);
            if ( (*(_DWORD *)(v2 + 272) & 0x2000) != 0 )
            {
              if ( *a1 == 1 )
              {
                *a1 = 2;
              }
              else if ( *a1 == 4 )
              {
                *a1 = 3;
              }
              v11 = *(_DWORD *)(v2 + 272);
              if ( (v11 & 0x80000) != 0 || (v11 & 0x100000) != 0 )
                v10 = *(_QWORD *)(v2 + 432);
            }
            xxxClientRimDevCallback(
              *a1,
              a1[1],
              *(_DWORD *)(*((_QWORD *)a1 + 3) + 72LL),
              a1[2],
              *(_QWORD *)(v4 + 72),
              v10,
              v7,
              v8,
              *(_QWORD *)(v4 + 400),
              *(_QWORD *)(v4 + 864));
            *(_QWORD *)(gptiCurrent + 1352LL) = 0LL;
            RIMLockExclusive(v4 + 104);
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1108) & 2) != 0 )
              RIMLockExclusive(v4 + 792);
            *(_BYTE *)(v4 + 82) = 0;
            RIMSignalAllDispositionWaiters(v4);
            if ( (*(_DWORD *)(v2 + 288) & 0x80u) != 0 || (*(_DWORD *)(v2 + 272) & 0x2000) != 0 )
            {
              v12 = *a1;
              if ( *a1 == 2 )
              {
                *(_DWORD *)(v2 + 272) |= 0x1000000u;
                v12 = *a1;
              }
              if ( v12 == 3 )
                *(_DWORD *)(v2 + 272) |= 0x2000000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v2);
          }
        }
      }
    }
  }
  return result;
}
