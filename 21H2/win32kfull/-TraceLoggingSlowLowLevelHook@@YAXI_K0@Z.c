/*
 * XREFs of ?TraceLoggingSlowLowLevelHook@@YAXI_K0@Z @ 0x1C0225710
 * Callers:
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0247184 (--1CCheckLLHookTime@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall TraceLoggingSlowLowLevelHook(int a1, __int64 a2, __int64 a3)
{
  int v3; // [rsp+30h] [rbp-39h] BYREF
  __int64 v4; // [rsp+38h] [rbp-31h] BYREF
  __int64 v5; // [rsp+40h] [rbp-29h] BYREF
  __int64 v6; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  int *v10; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  __int64 *v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+98h] [rbp+2Fh]
  __int64 *v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C032B3D8 > 5
    && (qword_1C032B3E8 & 0x400000000000LL) != 0
    && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
  {
    v4 = a3;
    v14 = &v4;
    v5 = a2;
    v12 = &v5;
    v3 = a1;
    v10 = &v3;
    v6 = 0x1000000LL;
    v8 = &v6;
    v15 = 8LL;
    v13 = 8LL;
    v11 = 4LL;
    v9 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B3D8, (unsigned __int8 *)dword_1C02F3010, 0LL, 0LL, 6u, &v7);
  }
}
