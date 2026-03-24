/*
 * XREFs of TtmiLogQueueCreated @ 0x14090332C
 * Callers:
 *     TtmiCreateEventQueue @ 0x140905488 (TtmiCreateEventQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x140315400 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall TtmiLogQueueCreated(__int64 a1)
{
  int ProcessSessionId; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140D2D8C8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8C8, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v3 = ProcessSessionId;
      v7 = 4;
      v6 = &v3;
      v4 = a1;
      v9 = &v4;
      v10 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D2D8C8, (unsigned __int8 *)word_14002B462, 0LL, 0LL, 4u, &v5);
    }
  }
}
