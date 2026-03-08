/*
 * XREFs of EtwTracePriority @ 0x14045EE2A
 * Callers:
 *     PsSetPagePriorityThread @ 0x14020AA94 (PsSetPagePriorityThread.c)
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E2E30 (KeSetPriorityAndQuantumProcess.c)
 *     IoApplyPriorityInfoThread @ 0x1403575F0 (IoApplyPriorityInfoThread.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1403579A4 (PsSetIoPriorityThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x1405FBD5C (EtwpPsProvTracePriority.c)
 */

void __fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v7; // bl
  int v9; // eax
  int v10; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+34h] [rbp-44h]
  char v12; // [rsp+35h] [rbp-43h]
  __int16 v13; // [rsp+36h] [rbp-42h]
  int *v14; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+44h] [rbp-34h]

  if ( a3 != a4 )
  {
    v5 = a4;
    v7 = a3;
    if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4544) & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v9 = *(_DWORD *)(a1 + 1232);
    v13 = 0;
    v10 = v9;
    v11 = v7;
    v12 = v5;
    if ( a5 )
      LOBYTE(v13) = *a5;
    v16 = 0;
    v14 = &v10;
    v15 = 8;
    EtwTraceKernelEvent((__int64)&v14, 1u, 0x20002000u, a2, 0x1501903u);
  }
}
