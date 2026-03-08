/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x140781F48
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x140781EE0 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A197CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpTransMgrRollback @ 0x140781FE8 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x140782064 (CmpCleanupLightWeightTransaction.c)
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
  if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_140037149, 0LL, 0LL, 2u, v4);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2);
  }
  if ( (unsigned int)dword_140C04328 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
    {
      v7 = 0;
      v6 = 4;
      v5 = &v3;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)&word_140037036, 0LL, 0LL, 3u, v4);
    }
  }
}
