/*
 * XREFs of DxgkSampleDisplayState @ 0x1C02EFA14
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C0049078 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__&DxgkSampleDisplayState_ @ 0x1C0049100 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__-D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSampleDisplayState(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // eax

  if ( !a1 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)Current + 11) + 392LL))(a1);
  v6 = v4;
  if ( v4 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    WdLogSingleEntry2(2LL, ProcessSessionId, v6);
    v10 = PsGetCurrentProcess(v9);
    v11 = PsGetProcessSessionId(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to sample display state in session 0x%I64x, (Status = 0x%I64x).",
      v11,
      v6,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v6;
}
