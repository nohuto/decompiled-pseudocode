/*
 * XREFs of EtwpTraceIoInit @ 0x14045FC10
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402637A0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceIoInit(__int64 a1)
{
  char v2; // cl
  unsigned __int16 v3; // di
  __int64 v4; // rsi
  __int64 ThreadServerSilo; // rax
  int v6; // ecx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v9 = 0;
  v2 = **(_BYTE **)(a1 + 184);
  if ( v2 == 3 )
  {
    v3 = 268;
  }
  else
  {
    v3 = 271;
    if ( v2 != 9 )
      v3 = 269;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(*(_QWORD *)(a1 + 152));
    v7 = a1;
    v6 = *(_DWORD *)(v4 + 1232);
  }
  else
  {
    ThreadServerSilo = 0LL;
    v7 = a1;
    v6 = -1;
  }
  v12 = 0;
  v8 = v6;
  v10 = &v7;
  v11 = 12;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)&v10, 1u, 0x400u, v3, 0x1501903u);
}
