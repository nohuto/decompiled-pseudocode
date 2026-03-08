/*
 * XREFs of CmpLogHiveInitializeEvent @ 0x140A0FBC8
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall CmpLogHiveInitializeEvent(__int64 a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int16 v7; // [rsp+38h] [rbp-29h] BYREF
  int v8; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v10[8]; // [rsp+50h] [rbp-11h]
  int v11; // [rsp+90h] [rbp+2Fh]
  int v12; // [rsp+94h] [rbp+33h]
  __int64 v13; // [rsp+C8h] [rbp+67h] BYREF
  int v14; // [rsp+D0h] [rbp+6Fh] BYREF
  int v15; // [rsp+E0h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a2;
  v13 = a1;
  v4 = *(_QWORD *)(a1 + 64);
  v10[0] = 8LL;
  v5 = 4;
  v8 = *(_DWORD *)(v4 + 40);
  v9 = &v13;
  v10[1] = &v14;
  v10[3] = &v15;
  v10[5] = &v8;
  v7 = 0;
  v10[2] = 4LL;
  v10[4] = 4LL;
  v10[6] = 4LL;
  if ( a3 && *((_QWORD *)a3 + 1) )
  {
    v10[7] = *((_QWORD *)a3 + 1);
    v5 = 5;
    v11 = *a3;
    v12 = 0;
  }
  v6 = 2LL * v5;
  v10[v6 - 1] = &v7;
  v10[v6] = 2LL;
  EtwTraceKernelEvent((__int64)&v9, v5 + 1, 0x41000000u, 0x924u, 0x501902u);
}
