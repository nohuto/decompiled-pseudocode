/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x1409E41C8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4, __int16 a5, __int16 a6)
{
  int v6; // eax
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+54h] [rbp-1Ch]
  __int128 *v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v6 = *(_DWORD *)(a3 + 1088);
  v17 = 0;
  v13 = v6;
  v12[0] = a1;
  v15 = (__int128 *)v12;
  v11 = 0LL;
  v12[1] = a2;
  v14 = a4;
  v16 = 24;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (__int64)&v15, 1u, 0x20008000u, 0x262u, 0x501902u);
  if ( a5 != a6 )
  {
    v17 = 0;
    WORD4(v11) = a6;
    *(_QWORD *)&v11 = a1;
    v15 = &v11;
    v16 = 16;
    v10 = PsGetProcessServerSilo(a3);
    EtwTraceSiloKernelEvent(v10, (__int64)&v15, 1u, 0x20008000u, 0x289u, 0x501902u);
  }
}
