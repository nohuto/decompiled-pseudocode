/*
 * XREFs of ?MulEnableDriver@@YAHKKPEAUtagDRVENABLEDATA@@@Z @ 0x1C018B210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulEnableDriver(__int64 a1, __int64 a2, struct tagDRVENABLEDATA *a3)
{
  __int64 v4; // rbx
  __int128 *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 result; // rax
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF
  __int128 *v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( RtlRunOnceBeginInitialize((PRTL_RUN_ONCE)(v4 + 3808), 0, 0LL) == 259 )
  {
    if ( ext_ms_win_moderncore_win32k_base_ntgdi_l1 && (int)ext_ms_win_moderncore_win32k_base_ntgdi_l1() >= 0 )
    {
      v5 = 0LL;
      v6 = 0;
      v12 = 0LL;
      v11 = 0;
      if ( qword_1C02D5598 )
      {
        qword_1C02D5598(&v12, &v11);
        v5 = v12;
        v6 = v11;
      }
      if ( v6 )
      {
        v7 = v6;
        v8 = v4 - (_QWORD)v5;
        do
        {
          v9 = *v5++;
          *(__int128 *)((char *)v5 + v8 + 3336) = v9;
          --v7;
        }
        while ( v7 );
      }
      *(_DWORD *)(v4 + 3800) += v6;
    }
    RtlRunOnceComplete((PRTL_RUN_ONCE)(v4 + 3808), 0, 0LL);
  }
  a3->pdrvfn = (DRVFN *)(v4 + 3256);
  result = 1LL;
  a3->c = *(_DWORD *)(v4 + 3800);
  a3->iDriverVersion = 196608;
  return result;
}
