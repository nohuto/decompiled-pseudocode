/*
 * XREFs of ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01E4F40
 * Callers:
 *     DxgkGetAdapter @ 0x1C01E4D40 (DxgkGetAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0221406 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E190 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003EFBC (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?UseHWGPUInRemoteSpecifiedSession@DXGSESSIONMGR@@QEAAJKPEAE@Z @ 0x1C01E5050 (-UseHWGPUInRemoteSpecifiedSession@DXGSESSIONMGR@@QEAAJKPEAE@Z.c)
 */

__int64 __fastcall DxgkpFindDefaultRenderAdapterForSession(
        struct _LUID *a1,
        DXGADAPTER **a2,
        unsigned int *a3,
        bool *a4)
{
  unsigned __int8 v4; // di
  DXGSESSIONMGR *v9; // rcx
  LONG *p_HighPart; // rdi
  struct DXGGLOBAL *v11; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rdx
  struct _LUID *v15; // [rsp+50h] [rbp-10h] BYREF
  DXGADAPTER **v16; // [rsp+58h] [rbp-8h]
  unsigned __int8 v17; // [rsp+98h] [rbp+38h] BYREF

  v4 = 1;
  v17 = 1;
  if ( a3 )
  {
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v9 )
    {
      if ( (int)DXGSESSIONMGR::UseHWGPUInRemoteSpecifiedSession(v9, *a3, &v17) < 0 )
      {
        WdLogSingleEntry1(2LL, *a3);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get remote GPU preference for session %u, default to hw GPU",
          *a3,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v4 = v17;
    }
    else
    {
      WdLogSingleEntry1(2LL, 4489LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find session manager",
        4489LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGADAPTER_REFERENCE::Assign(a2, 0LL);
  *a4 = v4 == 0;
  if ( v4 )
  {
    p_HighPart = &a1->HighPart;
    v15 = a1;
    v16 = a2;
    if ( a1->LowPart || *p_HighPart )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
        (__int64)&v15,
        2);
    }
    if ( *a2 )
      return 0LL;
    WdLogSingleEntry2(4LL, *p_HighPart, a1->LowPart);
    v11 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v11,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)&v15,
      2);
    if ( *a2 )
      return 0LL;
    WdLogSingleEntry1(4LL, 4521LL);
  }
  if ( *a2 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
  if ( IsCurrentConsoleSession() )
    v14 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 121);
  else
    v14 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 119);
  DXGADAPTER_REFERENCE::Assign(a2, v14);
  if ( *a2 )
  {
    if ( (_BYTE)v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, -1073741275LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkGetAdapter(): BRD WARP is not available, returning 0x%I64x.",
    -1073741275LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( (_BYTE)v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15);
  return 3221226021LL;
}
