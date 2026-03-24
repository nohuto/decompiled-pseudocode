/*
 * XREFs of GreGetDCPoint @ 0x1C0071810
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C0071770 (GreGetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C0071790 (GreGetDCOrgEx.c)
 * Callees:
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0036010 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0037E20 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0038040 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003B478 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003B4D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C003BD50 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     UserIsUserCritSecIn @ 0x1C0049420 (UserIsUserCritSecIn.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C009C550 (UserGetRedirectedWindowOrigin.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C0142510 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  DC *v7; // r8
  _BOOL8 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  __int64 v14; // rcx
  char v15; // di
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-78h] BYREF
  DC *v25[6]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v26[32]; // [rsp+58h] [rbp-40h] BYREF

  v6 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  v7 = v25[0];
  if ( !v25[0] )
    goto LABEL_34;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( !v12 )
        {
          *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v25[0] + 122) + 308LL);
          *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
          goto LABEL_35;
        }
        v13 = v12 - 8;
        if ( v13 )
        {
          if ( v13 == 16 )
          {
            *(_QWORD *)a3 = *((_QWORD *)v25[0] + (*((_DWORD *)v25[0] + 10) & 1LL) + 127);
            if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
            {
              v24 = 0LL;
              if ( (unsigned int)UserIsUserCritSecIn() )
              {
                v15 = 0;
              }
              else
              {
                v15 = 1;
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26, 0);
                EnterSharedCritAvoidingDitHitTestHazard(0, 1);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire(
                  (InputTraceLogging::Perf::CritAcquire *)v26,
                  v17,
                  v18,
                  v19);
                EtwTraceAcquiredSharedUserCrit();
              }
              if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v24) )
              {
                *(_DWORD *)a3 += v24;
                *(_DWORD *)(a3 + 4) += HIDWORD(v24);
              }
              if ( v15 )
                UserSessionSwitchLeaveCrit();
            }
            goto LABEL_35;
          }
        }
        else
        {
          if ( qword_1C0256350 )
            v20 = qword_1C0256350(v8);
          else
            v20 = -1073741637;
          if ( v20 < 0 )
            goto LABEL_35;
          if ( qword_1C0256358 )
          {
            v6 = qword_1C0256358(a1, a3);
            goto LABEL_35;
          }
        }
LABEL_34:
        v6 = 0;
        goto LABEL_35;
      }
      v21 = *(_QWORD *)(*((_QWORD *)v25[0] + 122) + 324LL);
    }
    else
    {
      v21 = *(_QWORD *)(*((_QWORD *)v25[0] + 122) + 316LL);
    }
    *(_QWORD *)a3 = v21;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
  }
  else
  {
    v22 = *((_QWORD *)v25[0] + 122);
    if ( (*(_DWORD *)(v22 + 340) & 0x4000) != 0 && *(_DWORD *)(v22 + 104) == 7 )
    {
      DC::vMakeIso(v25[0]);
      v7 = v25[0];
    }
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v7 + 122) + 332LL);
  }
LABEL_35:
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v6;
}
