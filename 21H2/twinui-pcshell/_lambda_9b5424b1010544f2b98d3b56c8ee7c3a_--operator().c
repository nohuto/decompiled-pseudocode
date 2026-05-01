/*
 * XREFs of _lambda_9b5424b1010544f2b98d3b56c8ee7c3a_::operator() @ 0x18009C66C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_46aed9523a31e9809eea8402f5b4d721___::Invoke @ 0x18009C9D0 (CAsyncCallbackWithLambda__lambda_46aed9523a31e9809eea8402f5b4d721___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x18009C8D4 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1802757A8 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 */

__int64 __fastcall lambda_9b5424b1010544f2b98d3b56c8ee7c3a_::operator()(CortanaAvailability *a1)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(*(_QWORD *)a1 + 340LL) )
  {
    CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard();
    *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 1;
    return 0LL;
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)a1 + 340LL) = 1;
    v3 = *(_QWORD *)a1;
    for ( *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 0; ; *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 0 )
    {
      v4 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17B,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 341LL) )
        break;
    }
    v5 = 0;
LABEL_8:
    *(_BYTE *)(v3 + 340) = 0;
    return v5;
  }
}
