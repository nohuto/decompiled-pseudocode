void TtmiLogSessionDeactivate()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140D53948 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53948, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v4 = 4;
      v3 = &v1;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140D53948, (unsigned __int8 *)word_14003376A, 0LL, 0LL, 3u, &v2);
    }
  }
}
