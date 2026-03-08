/*
 * XREFs of ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C032B094
 * Callers:
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0325A2C (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C032A304 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(
        OUTPUTDUPL_SESSION_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int updated; // eax
  __int64 v6; // rdi
  int CurrentProcessSessionId; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              (char *)this + 128,
              392LL,
              0LL,
              &CurrentProcessSessionId,
              0,
              0);
  v6 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS WNF, Status = 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v6;
}
