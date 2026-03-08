/*
 * XREFs of PpmEventLegacyProcessorPerfStateChange @ 0x1402ED898
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140596908 (PpmFireWmiEvent.c)
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
  _BYTE v11[12]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+3Ch] [rbp-34h]
  int v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]

  v1 = *(_DWORD **)(a1 + 33976);
  v2 = *(_QWORD *)(a1 + 33968);
  v14 = 0LL;
  v15 = 0LL;
  v4 = v1[16];
  v5 = v1[19];
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    HIDWORD(v14) = 0;
    v7 = *(_DWORD *)(v2 + 516);
    v8 = v1[18];
    *(_DWORD *)&v11[8] = 24;
    if ( v8 >= v7 )
      v8 = v7;
    v9 = v8 < *(_DWORD *)(v2 + 448);
    DWORD1(v14) = v5;
    v12 = 0;
    LODWORD(v14) = v9 + 1;
    DWORD2(v14) = v1[27];
    v15 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)v11 = &v14;
    EtwTraceKernelEvent((unsigned int)v11, 1, -2147450880, 4659, 4200450);
  }
  result = (unsigned int)WmiPerfStateEventEnabled;
  if ( WmiPerfStateEventEnabled )
  {
    v10 = *(_DWORD *)(a1 + 36);
    *(_QWORD *)&v11[4] = 0LL;
    v13 = v10;
    *(_DWORD *)v11 = v4;
    v12 = v5;
    return PpmFireWmiEvent(a1 + 33832, &PPM_PERFSTATE_CHANGE_GUID, 20LL, v11);
  }
  return result;
}
