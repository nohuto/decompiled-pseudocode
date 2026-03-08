/*
 * XREFs of ?VidSchiProcessExitTelemetry@@YAXPEAU_VIDSCH_PROCESS@@@Z @ 0x1C0017860
 * Callers:
 *     VidSchTerminateProcess @ 0x1C0094450 (VidSchTerminateProcess.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@3333@Z @ 0x1C0033F30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U1@U.c)
 */

void __fastcall VidSchiProcessExitTelemetry(__m128i *a1)
{
  __m128i v1; // xmm2
  __m128i v2; // xmm1
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  void *v8; // rdx
  __int64 *v9; // rax
  PVOID **v10; // [rsp+28h] [rbp-41h]
  PVOID **v11; // [rsp+30h] [rbp-39h]
  __int64 *v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+60h] [rbp-9h] BYREF
  PVOID *v14; // [rsp+68h] [rbp-1h] BYREF
  PVOID *v15; // [rsp+70h] [rbp+7h] BYREF
  __int64 v16; // [rsp+78h] [rbp+Fh] BYREF
  __m128i v17; // [rsp+80h] [rbp+17h]
  __m128i v18; // [rsp+90h] [rbp+27h]
  __m128i v19; // [rsp+A0h] [rbp+37h]
  PVOID P[2]; // [rsp+B0h] [rbp+47h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = a1[177];
  v2 = a1[179];
  v18 = a1[178];
  *(__m128i *)P = a1[180];
  v17 = v1;
  v19 = v2;
  if ( !(unsigned __int8)_mm_cvtsi128_si32(v1) )
    goto LABEL_2;
  if ( v18.m128i_i64[0] <= (unsigned __int64)v19.m128i_i64[0] )
  {
    if ( (unsigned int)dword_1C0076048 <= 5 || !tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
      goto LABEL_2;
    v8 = &unk_1C0056787;
    v23 = v17.m128i_i64[1];
    v24 = v18.m128i_i64[1];
    v16 = *(_QWORD *)(v5 + 2648);
    v15 = P;
    v14 = (PVOID *)v19.m128i_i64[1];
    v12 = &v16;
    v11 = &v15;
    v10 = &v14;
    v9 = &v13;
    v13 = 0x2000000LL;
  }
  else
  {
    if ( (unsigned int)dword_1C0076048 <= 5 || !tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
      goto LABEL_2;
    v8 = &unk_1C005684C;
    v23 = v17.m128i_i64[1];
    v24 = v18.m128i_i64[1];
    v13 = *(_QWORD *)(v5 + 2648);
    v14 = P;
    v15 = (PVOID *)v19.m128i_i64[1];
    v12 = &v13;
    v11 = &v14;
    v10 = &v15;
    v9 = &v16;
    v16 = 0x2000000LL;
  }
  v21 = v7;
  v22 = v6;
  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
    v3,
    (_DWORD)v8,
    v4,
    v5,
    (__int64)v9,
    (__int64)v10,
    (__int64)v11,
    (__int64)v12,
    (__int64)&v24,
    (__int64)&v23,
    (__int64)&v22,
    (__int64)&v21);
LABEL_2:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
}
