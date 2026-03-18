/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x1407D0E18
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x1407D0DB0 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C51C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     CmpTransMgrRollback @ 0x1407D0EB8 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D0F34 (CmpCleanupLightWeightTransaction.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4[2]; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v3 = 0;
  if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)&byte_140037367, 0LL, 0LL, 2u, v4);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2);
  }
  if ( (unsigned int)dword_140C04390 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
    {
      v7 = 0;
      v6 = 4;
      v5 = &v3;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)byte_140037393, 0LL, 0LL, 3u, v4);
    }
  }
}
