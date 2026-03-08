/*
 * XREFs of EtwpTraceImageUnload @ 0x14035E3D0
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x14035DB50 (EtwpTraceImageUnloadApc.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x1405FB550 (EtwpCancelTraceImageUnloadApc.c)
 *     PerfLogImageUnload @ 0x1407EA8E0 (PerfLogImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1407EC24C (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpPsProvTraceImage @ 0x1409E3534 (EtwpPsProvTraceImage.c)
 */

void __fastcall EtwpTraceImageUnload(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8,
        __int64 a9,
        unsigned int a10)
{
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-81h] BYREF
  int v14; // [rsp+40h] [rbp-71h]
  int v15; // [rsp+44h] [rbp-6Dh]
  int v16; // [rsp+48h] [rbp-69h]
  char v17; // [rsp+4Ch] [rbp-65h]
  char v18; // [rsp+4Dh] [rbp-64h]
  __int16 v19; // [rsp+4Eh] [rbp-63h]
  __int64 v20; // [rsp+50h] [rbp-61h]
  _BYTE v21[24]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-41h] BYREF
  int v23; // [rsp+88h] [rbp-29h]
  int v24; // [rsp+8Ch] [rbp-25h]
  __int64 *v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]

  memset(v21, 0, sizeof(v21));
  if ( a1 && *a1 && *((_QWORD *)a1 + 1) )
  {
    if ( a2 )
      v12 = *(_DWORD *)(a2 + 1088);
    else
      v12 = 0;
    v14 = v12;
    v15 = a5;
    v16 = a6;
    v17 = a7;
    v18 = a8;
    v13[0] = a3;
    v13[1] = a4;
    v19 = 0;
    v20 = a9;
    *(_OWORD *)v21 = 0LL;
    if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 4) != 0 )
      EtwpPsProvTraceImage(a1, v13, 5122LL, a10);
    v22[1] = 56LL;
    v22[0] = v13;
    v22[2] = *((_QWORD *)a1 + 1);
    v23 = *a1;
    v25 = &EtwpNull;
    v24 = 0;
    v26 = 2LL;
    if ( a2 )
      EtwTraceSiloKernelEvent(*(_QWORD *)(a2 + 2160), (unsigned int)v22, 3, 4, 5122, a10 != 0 ? 20977923 : 4200707);
    else
      EtwTraceKernelEvent((unsigned int)v22, 3, 4, 5122, a10 != 0 ? 20977923 : 4200707);
  }
}
