/*
 * XREFs of KsepDsEventDriverStartIo @ 0x14057F5DC
 * Callers:
 *     KseDsCallbackHookDriverStartIo @ 0x14057EA00 (KseDsCallbackHookDriverStartIo.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventDriverStartIo(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+5Ch] [rbp-24h]
  __int64 *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF

  v3 = &retaddr;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v4 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseDsEventStartIo);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      UserData.Size = 8;
      v7 = &v15;
      v8 = 8;
      v10 = &v16;
      v11 = 8;
      LOBYTE(v3) = EtwWriteEx(v4, &KseDsEventStartIo, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
