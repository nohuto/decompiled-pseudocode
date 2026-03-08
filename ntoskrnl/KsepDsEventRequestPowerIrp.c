/*
 * XREFs of KsepDsEventRequestPowerIrp @ 0x14057FD14
 * Callers:
 *     KseDsHookPoRequestPowerIrp @ 0x14057F020 (KseDsHookPoRequestPowerIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventRequestPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  REGHANDLE v7; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-29h]
  int v11; // [rsp+60h] [rbp-21h]
  int v12; // [rsp+64h] [rbp-1Dh]
  __int64 *v13; // [rsp+68h] [rbp-19h]
  int v14; // [rsp+70h] [rbp-11h]
  int v15; // [rsp+74h] [rbp-Dh]
  int *v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+80h] [rbp-1h]
  int v18; // [rsp+84h] [rbp+3h]
  char *v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  char *v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  __int64 v26; // [rsp+D8h] [rbp+57h] BYREF
  __int64 v27; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v28; // [rsp+E8h] [rbp+67h] BYREF
  int v29; // [rsp+F0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = a1;
  v7 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v6) = EtwEventEnabled(KseEtwHandle, &KseDsEventRequestPowerIrp);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v26;
      v10 = &v27;
      v13 = &v28;
      v16 = &v29;
      v19 = &a5;
      UserData.Size = 8;
      v11 = 8;
      v14 = 8;
      v22 = &a6;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      LOBYTE(v6) = EtwWriteEx(v7, &KseDsEventRequestPowerIrp, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
