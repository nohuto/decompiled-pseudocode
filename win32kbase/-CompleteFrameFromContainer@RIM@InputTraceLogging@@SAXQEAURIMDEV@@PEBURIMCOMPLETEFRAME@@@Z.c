/*
 * XREFs of ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01CB3F0
 * Callers:
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01CE80C (rimGetCompleteFrameFromIVCompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::RIM::CompleteFrameFromContainer(
        struct RIMDEV *const a1,
        const struct RIMCOMPLETEFRAME *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h] BYREF
  __int64 v14; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  __int64 *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  __int64 *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  int *v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  int *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]
  int *v31; // [rsp+D0h] [rbp+37h]
  int v32; // [rsp+D8h] [rbp+3Fh]
  int v33; // [rsp+DCh] [rbp+43h]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    if ( v2 )
      v6 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 464) + 18LL);
    else
      v6 = 0;
    v9 = v6;
    if ( v2 )
      v7 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 464) + 16LL);
    else
      v7 = 0;
    v8 = *(_QWORD *)(v3 + 48);
    v33 = 0;
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v12 = v8;
    v31 = &v9;
    v28 = &v10;
    v25 = &v11;
    v22 = &v12;
    v19 = &v13;
    v16 = &v14;
    v10 = v7;
    v14 = v2;
    v23 = 8;
    v20 = 8;
    v17 = 8;
    v11 = v5;
    v13 = v4;
    v32 = 4;
    v29 = 4;
    v26 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02CA7E0, (unsigned __int8 *)dword_1C0297217, 0LL, 0LL, 8u, &v15);
  }
}
