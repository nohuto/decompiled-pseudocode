/*
 * XREFs of EtwpEventWriteDebugLookupFailed @ 0x1409E0650
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140775208 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteDebugLookupFailed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  bool v6; // zf
  __int64 v7; // rax
  int v9; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp-9h]
  int v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+5Ch] [rbp+3h]
  __int64 *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  char *v18; // [rsp+80h] [rbp+27h]
  __int64 v19; // [rsp+88h] [rbp+2Fh]

  v6 = (*(_BYTE *)(a4 + 98) & 2) == 0;
  v9 = 0;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a4 + 80);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 1088);
  }
  UserData.Ptr = *(_QWORD *)(a4 + 32) + 40LL;
  v13 = 0;
  *(_QWORD *)&UserData.Size = 16LL;
  v11 = *(_QWORD *)(a5 + 144);
  v12 = *(unsigned __int16 *)(a5 + 136);
  v14 = &EtwpNull;
  v16 = &v9;
  v18 = &a6;
  v15 = 2LL;
  v17 = 4LL;
  v19 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_DEBUG_LOOKUP_FAILED, 0LL, 5u, &UserData);
}
