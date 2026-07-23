/*
 * XREFs of PpmEventLegacyProcessorPerfStateChange @ 0x140399184
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140578738 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PpmEventLegacyProcessorPerfStateChange(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  int v4; // esi
  int v5; // edi
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // cf
  int v10; // eax
  int v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+34h] [rbp-4Ch]
  int v13; // [rsp+3Ch] [rbp-44h]
  int v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int128 *v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v1 = *(_DWORD **)(a1 + 33136);
  v2 = *(_QWORD *)(a1 + 33128);
  v15 = 0LL;
  v16 = 0LL;
  v4 = v1[16];
  v5 = v1[19];
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    HIDWORD(v15) = 0;
    v7 = *(_DWORD *)(v2 + 368);
    v8 = v1[18];
    v18 = 24;
    if ( v8 >= v7 )
      v8 = v7;
    v9 = v8 < *(_DWORD *)(v2 + 324);
    DWORD1(v15) = v5;
    v19 = 0;
    LODWORD(v15) = v9 + 1;
    DWORD2(v15) = v1[27];
    v16 = *(_QWORD *)(a1 + 200);
    v17 = &v15;
    EtwTraceKernelEvent((int)&v17, 1, 0x80008000, 4659, 4200450);
  }
  result = (unsigned int)WmiPerfStateEventEnabled;
  if ( WmiPerfStateEventEnabled )
  {
    v10 = *(_DWORD *)(a1 + 36);
    v12 = 0LL;
    v14 = v10;
    v11 = v4;
    v13 = v5;
    return PpmFireWmiEvent(a1 + 32992, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v11);
  }
  return result;
}
