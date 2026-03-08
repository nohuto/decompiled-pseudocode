/*
 * XREFs of PpmEventParkNodeParkHintChanged @ 0x140598868
 * Callers:
 *     PpmParkApplyPolicy @ 0x14038E5E0 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeParkHintChanged(__int16 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  __int64 *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  __int16 v14; // [rsp+80h] [rbp+10h] BYREF
  __int64 v15; // [rsp+88h] [rbp+18h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF

  v3 = &retaddr;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      v8 = 8;
      v7 = &v15;
      v10 = &v16;
      v11 = 8;
      UserData.Size = 2;
      LOBYTE(v3) = EtwWrite(v4, &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
