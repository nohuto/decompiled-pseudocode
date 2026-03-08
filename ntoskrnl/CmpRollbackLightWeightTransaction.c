/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x140781EE0
 * Callers:
 *     CmpAbortRollbackPacket @ 0x14074C8DC (CmpAbortRollbackPacket.c)
 *     CmpCloseLightWeightTransaction @ 0x140781E90 (CmpCloseLightWeightTransaction.c)
 *     NtRollbackRegistryTransaction @ 0x140A0BE30 (NtRollbackRegistryTransaction.c)
 *     CmpRollbackTransactionArray @ 0x140A1BA5C (CmpRollbackTransactionArray.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x140781F48 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  v2 = _InterlockedCompareExchange(a1, 3, 0);
  LODWORD(v6) = v2;
  if ( v2 == 1 )
  {
    LODWORD(v6) = _InterlockedCompareExchange(a1, 4, 1);
    if ( (_DWORD)v6 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    LODWORD(v6) = 4;
    ExBlockOnAddressPushLock((__int64)(a1 + 2), a1, &v6, 4uLL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    CmpAbortLightWeightTransaction(a1);
    goto LABEL_4;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    v3 = -1072103403;
LABEL_4:
  CmCleanupThreadInfo(v5);
  return v3;
}
