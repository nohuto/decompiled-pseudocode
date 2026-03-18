/*
 * XREFs of ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C032FAD4
 * Callers:
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C032A46C (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C032ED44 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(OUTPUTDUPL_SESSION_MGR *this)
{
  int updated; // eax
  __int64 v3; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              (char *)this + 128,
              392LL,
              0LL,
              &CurrentProcessSessionId,
              0,
              0);
  v3 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS WNF, Status = 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v3;
}
