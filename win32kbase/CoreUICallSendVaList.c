__int64 __fastcall CoreUICallSendVaList(
        struct IMessageCallSendHost *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 *a6,
        char *a7)
{
  int v10; // eax
  unsigned int v11; // esi
  int v12; // ebx
  unsigned int v14; // [rsp+40h] [rbp-B1h] BYREF
  void *v15; // [rsp+48h] [rbp-A9h] BYREF
  _BYTE v16[128]; // [rsp+50h] [rbp-A1h] BYREF
  int v17; // [rsp+D0h] [rbp-21h]
  int v18; // [rsp+D4h] [rbp-1Dh]

  v14 = 0;
  v15 = 0LL;
  v17 = 26;
  v18 = 2;
  v10 = CoreMessaging::Calling::SendProcessor::PrepareMessage(
          (CoreMessaging::Calling::SendProcessor *)v16,
          a1,
          a3,
          a4,
          a5,
          a6,
          a7,
          &v14);
  v11 = v14;
  v12 = v10;
  if ( v10 < 0
    || (v12 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)a1 + 24LL))(
                a1,
                a2,
                a3,
                v14,
                &v15),
        v12 < 0)
    || (v12 = CoreMessaging::Calling::SendProcessor::MarshalSend(
                (CoreMessaging::Calling::SendProcessor *)v16,
                v15,
                v11,
                a7),
        v12 < 0)
    || (v12 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, void *, unsigned int))(*(_QWORD *)a1 + 32LL))(
                a1,
                a2,
                a3,
                v15,
                v11),
        v12 < 0) )
  {
    if ( v15 )
      (*(void (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a2, a3);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
