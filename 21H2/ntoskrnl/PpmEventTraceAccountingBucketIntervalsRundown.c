/*
 * XREFs of PpmEventTraceAccountingBucketIntervalsRundown @ 0x1408F2F80
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void PpmEventTraceAccountingBucketIntervalsRundown()
{
  __int64 v0; // r8
  _QWORD *v1; // rcx
  __int64 *v2; // rdx
  __int64 v3; // rax
  int v4; // [rsp+30h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-110h] BYREF
  _BYTE *v6; // [rsp+48h] [rbp-100h]
  int v7; // [rsp+50h] [rbp-F8h]
  int v8; // [rsp+54h] [rbp-F4h]
  _BYTE v9[208]; // [rsp+60h] [rbp-E8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN) )
  {
    v0 = 26LL;
    v1 = v9;
    v4 = 26;
    v2 = (__int64 *)&unk_140CFB598;
    do
    {
      v3 = *v2;
      v2 += 3;
      *v1++ = v3;
      --v0;
    }
    while ( v0 );
    UserData.Reserved = 0;
    v8 = 0;
    UserData.Ptr = (ULONGLONG)&v4;
    v6 = v9;
    UserData.Size = 4;
    v7 = 208;
    EtwWrite(PpmEtwHandle, &PPM_ETW_ACCOUNTING_BUCKET_INTERVALS_RUNDOWN, 0LL, 2u, &UserData);
  }
}
