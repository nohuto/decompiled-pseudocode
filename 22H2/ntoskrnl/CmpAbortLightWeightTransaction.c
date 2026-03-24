/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x140770CA4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14066D9B8 (CmpCommitLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406A5420 (CmpRollbackLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x14066DB30 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140770D50 (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  _DWORD *v4; // r9
  int v5; // [rsp+30h] [rbp-68h] BYREF
  int v6; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-60h] BYREF
  int *v8; // [rsp+58h] [rbp-40h]
  int v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+64h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+68h] [rbp-30h] BYREF

  v5 = 0;
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)word_1400232A2, 0LL, 0LL, 2u, &v11);
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v5);
    CmpCleanupLightWeightTransaction(v2, 8LL, v3, v4);
  }
  if ( (unsigned int)dword_140C02130 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
    {
      v10 = 0;
      v6 = v5;
      v9 = 4;
      v8 = &v6;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)&dword_14002326C,
        0LL,
        0LL,
        3u,
        &v7);
    }
  }
}
