void __fastcall InputTraceLogging::Pointer::AssignPointerId(
        const struct CPointerInputFrame *a1,
        const struct tagPOINTEREVENTINT *a2)
{
  __int16 *v2; // r8
  __int64 v3; // r9
  __int16 v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  __int16 *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  int *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v5 = *((_DWORD *)v2 + 3);
    v4 = *v2;
    v6 = *(_QWORD *)(v3 + 72);
    v7 = *(_QWORD *)(v3 + 216);
    v15 = &v5;
    v13 = &v4;
    v11 = &v6;
    v9 = &v7;
    v16 = 4LL;
    v14 = 2LL;
    v12 = 8LL;
    v10 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C029B0B8, 0LL, 0LL, 6u, &v8);
  }
}
