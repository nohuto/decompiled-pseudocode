/*
 * XREFs of VslpIumInitializeTelemetry @ 0x140A73D90
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1403CEF48 (VslpIumPhase4Initialize.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

char VslpIumInitializeTelemetry()
{
  char result; // al
  REGHANDLE v1; // rcx
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rax
  int v5; // edx
  int *v6; // rcx
  int v7; // ecx
  int v8; // edx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  int *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh] BYREF
  int v19; // [rsp+8Ch] [rbp+23h]
  int *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int *v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  result = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C044A0, 0LL, 0LL);
  if ( (*(_DWORD *)(KeLoaderBlock_0 + 264) & 1) != 0 )
  {
    if ( (unsigned int)dword_140C044A0 <= 5 )
      goto LABEL_5;
    result = tlgKeywordOn((__int64)&dword_140C044A0, 0x400000000000LL);
    if ( result )
    {
      v4 = *(_QWORD *)(v3 + 240);
      v5 = *(unsigned __int16 *)(v4 + 2752);
      v6 = *(int **)(v4 + 2760);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = (__int64 *)&v18;
      v20 = &v9;
      v17 = v6;
      v18 = v5;
      v9 = (v2 >> 2) & 1;
      v15 = 2;
      v21 = 4;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C044A0,
                 (unsigned __int8 *)&word_14002469E,
                 0LL,
                 0LL,
                 5u,
                 v13);
    }
  }
  if ( (unsigned int)dword_140C044A0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C044A0, 0x400000000000LL);
    if ( result )
    {
      v16 = 0;
      v19 = 0;
      v14 = &v12;
      v9 = (unsigned __int8)VslVsmEnabled;
      v17 = &v9;
      v12 = 0x1000000LL;
      v15 = 8;
      v18 = 4;
      v7 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2856LL);
      v22 = 0;
      v20 = &v10;
      v10 = v7;
      v21 = 4;
      v8 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2860LL);
      v25 = 0;
      v23 = &v11;
      v11 = v8;
      v24 = 4;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C044A0,
                 (unsigned __int8 *)word_1400246DA,
                 0LL,
                 0LL,
                 6u,
                 v13);
    }
  }
LABEL_5:
  if ( !VslVsmEnabled )
  {
    v1 = qword_140C044C0;
    qword_140C044C0 = 0LL;
    dword_140C044A0 = 0;
    return EtwUnregister(v1);
  }
  return result;
}
