/*
 * XREFs of EtwTraceDpcEnqueueEvent @ 0x1405FA6DC
 * Callers:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwTraceDpcEnqueueEvent(__int64 a1, KDEFERRED_ROUTINE *a2, int a3, int a4, int a5, char a6, __int64 a7)
{
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+3Ch] [rbp-34h]
  int v10; // [rsp+40h] [rbp-30h]
  char v11; // [rsp+44h] [rbp-2Ch]
  __int16 v12; // [rsp+45h] [rbp-2Bh]
  char v13; // [rsp+47h] [rbp-29h]
  __int64 v14; // [rsp+48h] [rbp-28h]
  _QWORD v15[2]; // [rsp+50h] [rbp-20h] BYREF

  v12 = 0;
  v13 = 0;
  if ( a2 != EtwpStackWalkDpc )
  {
    v10 = a5;
    v11 = a6;
    v12 = 0;
    v13 = 0;
    v14 = a7;
    v7 = a1;
    v8 = a3;
    v9 = a4;
    v15[0] = &v7;
    v15[1] = 32LL;
    EtwTraceKernelEvent((__int64)v15, 1u, 0x20040000u, 0xF64u, 0x501E02u);
  }
}
