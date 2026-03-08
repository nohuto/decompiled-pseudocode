/*
 * XREFs of IrqTraceAffinityPolicy @ 0x1C009FFC0
 * Callers:
 *     IrqPolicyGetDevicePolicy @ 0x1C009F8A4 (IrqPolicyGetDevicePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C0009240 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0009270 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IrqpAllocateInstancePath @ 0x1C00A014C (IrqpAllocateInstancePath.c)
 */

void __fastcall IrqTraceAffinityPolicy(PDEVICE_OBJECT Pdo, unsigned __int16 a2, __int16 a3, __int64 a4)
{
  int v6; // esi
  ULONG_PTR v8; // r9
  ULONG v9; // edi
  __int64 v10; // r9
  __int16 v11; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+34h] [rbp-75h] BYREF
  ULONG v13; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-59h] BYREF
  _DWORD *v16; // [rsp+70h] [rbp-39h]
  int v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+7Ch] [rbp-2Dh]
  __int64 v19; // [rsp+80h] [rbp-29h]
  _DWORD v20[2]; // [rsp+88h] [rbp-21h] BYREF
  int *v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  __int16 *v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  _QWORD *v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]
  ULONG *v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+CCh] [rbp+23h]

  v14[0] = 0LL;
  v6 = a2;
  if ( dword_1C006C110 && tlgKeywordOn((__int64)&dword_1C006C110) )
  {
    if ( (_WORD)v6 == 4 )
      v9 = RtlNumberOfSetBitsUlongPtr(v8);
    else
      v9 = 0;
    v14[1] = 0LL;
    IrqpAllocateInstancePath(Pdo);
    if ( (unsigned int)dword_1C006C110 > 5 && tlgKeywordOn((__int64)&dword_1C006C110) )
    {
      v18 = 0;
      v20[1] = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v16 = v20;
      v20[0] = LOWORD(v14[0]);
      v21 = &v12;
      v24 = &v11;
      v27 = v14;
      v30 = &v13;
      v17 = 2;
      v25 = 2;
      v28 = 8;
      v19 = 0LL;
      v12 = v6;
      v22 = 4;
      v11 = a3;
      v14[0] = a4;
      v13 = v9;
      v31 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C006C110,
        (unsigned __int8 *)dword_1C00629F2,
        4LL,
        v10,
        8u,
        &v15);
    }
    if ( &word_1C0063064 )
      ExFreePoolWithTag(0LL, 0);
  }
}
