/*
 * XREFs of PipDmgInitPhaseTwo @ 0x1407A43F4
 * Callers:
 *     PiDmaGuardInitialize @ 0x1403B6CC8 (PiDmaGuardInitialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PipDmgInitReadGroupPolicy @ 0x1408A3580 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1408B157C (PipDmgReevaluateQueue.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax
  int v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  if ( (unsigned int)dword_140C02DC8 > 5 && tlgKeywordOn((__int64)&dword_140C02DC8, 0x400000000000LL) )
  {
    v6 = 0;
    v2 = PipDmaGuardPolicy;
    v5 = 4;
    v4 = &v2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02DC8, (unsigned __int8 *)&byte_14002571F, 0LL, 0LL, 3u, &v3);
  }
  return 0LL;
}
