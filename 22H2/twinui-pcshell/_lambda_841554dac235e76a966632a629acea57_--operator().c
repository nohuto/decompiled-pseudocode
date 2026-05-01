/*
 * XREFs of _lambda_841554dac235e76a966632a629acea57_::operator() @ 0x18009C594
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_fa896e16b3844d3abaa517402fc423ca___::Invoke @ 0x18009C9D0 (CAsyncCallbackWithLambda__lambda_fa896e16b3844d3abaa517402fc423ca___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x18009C8B4 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1802755F8 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_841554dac235e76a966632a629acea57_::operator()(CortanaAvailability *a1)
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
          (void *)0x194,
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
