/*
 * XREFs of EtwpEventWriteRegistrationStatus @ 0x1409E0B4C
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x140695AC4 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140788328 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteRegistrationStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v6.Ptr = *(_QWORD *)(a4 + 32) + 40LL;
  v6.Reserved = 0;
  v6.Size = 16;
  v7 = &a5;
  v9 = 0;
  v8 = 4;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED, 0LL, 2u, &v6);
}
