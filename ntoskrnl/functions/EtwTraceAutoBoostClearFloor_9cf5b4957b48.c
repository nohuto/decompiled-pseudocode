void __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int IsEnabledNoReporting; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  v7 = *(_DWORD *)(a1 + 1232);
  v6 = a2;
  v8 = a3;
  IsEnabledNoReporting = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReporting();
  v5 = *(_QWORD *)(a1 + 544);
  v10 = 16;
  v9 = &v6;
  v11 = 0;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(v5 + 2160),
    (__int64)&v9,
    1u,
    0x20000200u,
    0x543u,
    IsEnabledNoReporting != 0 ? 5250562 : 5249538);
}
