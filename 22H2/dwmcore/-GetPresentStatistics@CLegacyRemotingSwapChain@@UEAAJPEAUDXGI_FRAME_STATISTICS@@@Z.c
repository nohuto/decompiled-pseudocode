/*
 * XREFs of ?GetPresentStatistics@CLegacyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1800E56E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::GetPresentStatistics(
        CLegacyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  LARGE_INTEGER v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER v10; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 8);
  v10.QuadPart = 0LL;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 40LL))(v2, &v9);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xB7u, 0LL);
  }
  else
  {
    *(_QWORD *)&a2->PresentCount = v9;
    a2->SyncRefreshCount = DWORD2(v9);
    v7 = v10;
    a2->SyncQPCTime = v10;
    a2->SyncGPUTime = v7;
  }
  return v6;
}
