/*
 * XREFs of KiIntSteerLogState @ 0x1402903C8
 * Callers:
 *     KiIntSteerDisable @ 0x14028E484 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14028FF2C (KiIntSteerConnect.c)
 *     KiIntSteerLogStatus @ 0x1402A8FAC (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402A9098 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KiIntSteerLogState(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h]
  __int64 v9; // [rsp+58h] [rbp-21h]
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  __int64 v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  __int64 v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  result = KiIntSteerEtwEventEnabled(a2);
  if ( (_BYTE)result )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v11 = 8LL;
    v13 = 8LL;
    *(_QWORD *)&UserData.Size = 4LL;
    v9 = 2LL;
    UserData.Ptr = v5 + 32;
    v8 = v5 + 168;
    v10 = v5 + 176;
    v12 = v5 + 160;
    v15 = 4LL;
    v14 = a1 + 68;
    v6 = **(_QWORD **)(a1 + 32);
    v18 = a1 + 40;
    v16 = v6 + 24;
    v20 = a1 + 48;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    return EtwWriteEx(KiIntSteerEtwHandle, a2, 0LL, 0, 0LL, 0LL, 8u, &UserData);
  }
  return result;
}
