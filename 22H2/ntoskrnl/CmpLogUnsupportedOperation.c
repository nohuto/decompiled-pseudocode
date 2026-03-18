/*
 * XREFs of CmpLogUnsupportedOperation @ 0x140A1FEA0
 * Callers:
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     NtCompactKeys @ 0x140A0D420 (NtCompactKeys.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x140A20278 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

NTSTATUS __fastcall CmpLogUnsupportedOperation(unsigned int a1)
{
  NTSTATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = _InterlockedIncrement(&CmpUnsupportedOperationHits[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&CmpUnsupportedOperationHits[a1], 0) )
    result = CmpSendUnsupportedOperationTelemetryEvent(a1);
  if ( (unsigned int)dword_140C04390 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C04390,
             (unsigned __int8 *)byte_140037BB9,
             0LL,
             0LL,
             3u,
             &v4);
  }
  return result;
}
