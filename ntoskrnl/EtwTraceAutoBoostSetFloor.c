/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x14045EB78
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x140239F90 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     EtwTraceSiloKernelEvent @ 0x14035EC20 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x14040C880 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 */

void __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  int IsEnabledWithReporting; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+3Ch] [rbp-24h]
  char v16; // [rsp+3Dh] [rbp-23h]
  char v17; // [rsp+3Eh] [rbp-22h]
  char v18; // [rsp+3Fh] [rbp-21h]
  __int64 *v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  v14 = *(_DWORD *)(a1 + 1232);
  v16 = a6;
  v13 = a2;
  v15 = a3;
  v17 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  v18 = (a9 != 0 ? 2 : 0) | (4 * (a10 & 3)) | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  MmGetMinWsPagePriority();
  IsEnabledWithReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(0);
  v12 = *(_QWORD *)(a1 + 544);
  v20 = 16;
  v19 = &v13;
  v21 = 0;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(v12 + 2160),
    (__int64)&v19,
    1u,
    0x20000200u,
    0x542u,
    IsEnabledWithReporting != 0 ? 5246466 : 5245442);
}
