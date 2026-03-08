/*
 * XREFs of EtwpLogRegistryEvent @ 0x1408A24EC
 * Callers:
 *     EtwpTraceRegistry @ 0x1408A2820 (EtwpTraceRegistry.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpLogRegistryEvent(
        unsigned int a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int16 v8; // r10
  unsigned int v9; // edx
  unsigned __int16 v10; // r10
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  int v16; // [rsp+48h] [rbp-19h]
  int v17; // [rsp+4Ch] [rbp-15h]
  __int64 v18; // [rsp+50h] [rbp-11h]
  __int64 v19; // [rsp+58h] [rbp-9h]
  __int64 *v20; // [rsp+60h] [rbp-1h] BYREF
  int v21; // [rsp+68h] [rbp+7h]
  int v22; // [rsp+6Ch] [rbp+Bh]
  __int64 v23; // [rsp+70h] [rbp+Fh]
  int v24; // [rsp+78h] [rbp+17h]
  int v25; // [rsp+7Ch] [rbp+1Bh]

  v19 = 0LL;
  v22 = 0;
  v8 = a2;
  v9 = 1;
  v10 = v8 | 0x900;
  v16 = a3;
  v17 = a4;
  v21 = 24;
  v15 = *a6;
  v18 = a5;
  v20 = &v15;
  if ( a7 )
  {
    v11 = *(_QWORD *)(a7 + 8);
    v12 = *(_WORD *)a7 & 0xFFFE;
    if ( v11 )
    {
      if ( (*(_WORD *)a7 & 0xFFFE) != 0 )
      {
        v25 = 0;
        v9 = 2;
        v23 = v11;
        v24 = v12;
      }
    }
  }
  v13 = 2LL * v9;
  *(&v22 + 2 * v13) = 0;
  (&v20)[v13] = &EtwpNull;
  *(&v21 + 2 * v13) = 2;
  return EtwpLogSystemEventUnsafe(EtwpHostSiloState, (__int64)&v20, KeGetCurrentThread(), a1, v9 + 1, v10, 0x501902u, 0);
}
