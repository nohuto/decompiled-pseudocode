/*
 * XREFs of Controller_DetectFrameMicroframeBoundary @ 0x1C0032EF4
 * Callers:
 *     Controller_Start @ 0x1C0014F3C (Controller_Start.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0035200 (Controller_TimeSyncStartTrackingWorker.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C0033490 (Controller_GetFrameNumber.c)
 */

__int64 __fastcall Controller_DetectFrameMicroframeBoundary(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v3; // r15d
  bool v4; // zf
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  LARGE_INTEGER v8; // rdi
  int FrameNumber; // eax
  int v10; // r12d
  LARGE_INTEGER v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int *v14; // rbx
  int Ulong; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+34h] [rbp-34h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF
  int v23; // [rsp+50h] [rbp-18h]
  int v24; // [rsp+54h] [rbp-14h]
  int v25; // [rsp+58h] [rbp-10h]
  int v26; // [rsp+5Ch] [rbp-Ch]
  KIRQL NewIrql; // [rsp+B0h] [rbp+48h]
  int v28; // [rsp+B8h] [rbp+50h] BYREF
  int v29; // [rsp+C0h] [rbp+58h] BYREF
  int v30; // [rsp+C8h] [rbp+60h] BYREF

  v1 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v29 = 0;
  v30 = 0;
  v28 = 0;
  v19 = 0;
  NewIrql = KeGetCurrentIrql();
  KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = 1;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 )
      NewIrql = KfRaiseIrql(2u);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v3 == 1 )
      v6 = 100 * PerformanceFrequency.QuadPart;
    else
      v6 = 10 * PerformanceFrequency.QuadPart;
    v7 = v6 / 1000;
    Controller_GetFrameNumber(a1, 0LL, &v29, &v30);
    do
    {
      v8 = KeQueryPerformanceCounter(0LL);
      FrameNumber = Controller_GetFrameNumber(a1, 0LL, &v28, &v19);
      v10 = v19;
      v20 = FrameNumber;
    }
    while ( v8.QuadPart - PerformanceCounter.QuadPart <= v7 && v29 == v28 && v30 == v19 );
    v11 = KeQueryPerformanceCounter(0LL);
    v12 = 1000000 * (v11.QuadPart - v8.QuadPart) / PerformanceFrequency.QuadPart;
    if ( v3 == 2 )
      KeLowerIrql(NewIrql);
    if ( (v29 != v28 || v30 != v10) && v12 <= 10 )
      break;
    v4 = ++v3 == 2;
    if ( v3 > 2 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 1144))(
        WdfDriverGlobals,
        **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
        Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
        a1 + 664);
      DynamicLock_Acquire(*(_QWORD *)(a1 + 672));
      v13 = *(_QWORD *)(a1 + 88);
      v14 = *(unsigned int **)(v13 + 32);
      Ulong = XilRegister_ReadUlong(v13, v14);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v14, Ulong & 0xFFFFFBFF);
      v16 = *(_QWORD *)(a1 + 672);
      *(_BYTE *)(a1 + 664) = 0;
      DynamicLock_Release(v16);
      return (unsigned int)-1073741823;
    }
  }
  v26 = 0;
  v22[0] = a1 + 664;
  v23 = v20;
  v17 = *(_QWORD *)(a1 + 128);
  v22[1] = v11.QuadPart;
  v24 = v28;
  v25 = v10;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, __int64 *), _QWORD *))(WdfFunctions_01023 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(v17 + 40),
    Interrupter_SetBusEdgeInformationRoutineWithIsrSync,
    v22);
  return v1;
}
