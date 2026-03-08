/*
 * XREFs of ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C00ED5C4
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEAPEAV3@@Z @ 0x1C00EDE8C (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_.c)
 * Callees:
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00EC284 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C00EC800 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x1C00ED8BC (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_SEGMENT::GetDeviceToSuspend(
        __int64 a1,
        VIDMM_DEVICE *a2,
        int a3,
        int a4,
        struct VIDMM_DEVICE **a5)
{
  _QWORD *v5; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbp
  _QWORD *v12; // r15
  VIDMM_DEVICE *v13; // rsi
  VIDMM_DEVICE *v14; // rcx
  __int64 v15; // rcx
  VIDMM_DEVICE *result; // rax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v5 = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 136);
  if ( v7 != (_QWORD *)(a1 + 136) )
  {
    do
    {
      v8 = v7 - 3;
      v9 = v7;
      v10 = (_QWORD *)*(v7 - 3);
      v7 = (_QWORD *)*v7;
      if ( !(unsigned __int8)PsIsSystemProcess(*v10) && (*(_BYTE *)(*(_QWORD *)(*v8 + 32LL) + 424LL) & 1) == 0 )
      {
        v11 = v8 + 5;
        v12 = (_QWORD *)v8[5];
        while ( v12 != v11 )
        {
          v13 = (VIDMM_DEVICE *)v12[4];
          v12 = (_QWORD *)*v12;
          if ( VIDMM_DEVICE::CanSuspendThisDevice(v13, a2, a3, a4) )
          {
            if ( !VIDMM_DEVICE::IsResumedRecently(v13) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
              v17 = *v9;
              if ( *(_QWORD **)(*v9 + 8LL) != v9
                || (v18 = (_QWORD *)v9[1], (_QWORD *)*v18 != v9)
                || (*v18 = v17, *(_QWORD *)(v17 + 8) = v18, v19 = (_QWORD *)v5[1], (_QWORD *)*v19 != v5) )
              {
                __fastfail(3u);
              }
              v9[1] = v19;
              *v9 = v5;
              *v19 = v9;
              result = v13;
              v5[1] = v9;
              return result;
            }
            if ( VIDMM_DEVICE::IsBetterYieldCandidate(v14, *a5) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v13;
              *a5 = v13;
            }
          }
        }
      }
    }
    while ( v7 != v5 );
  }
  return 0LL;
}
