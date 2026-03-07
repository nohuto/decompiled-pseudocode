char __fastcall PpmTraceExitLatency(__int64 a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  int v9; // r10d
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // ecx
  _DWORD v13[6]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-30h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]

  v9 = -1;
  if ( PopFxSystemLatencyLimit == -1 )
    return 0;
  if ( a5 != -1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = a5 + PpmConvertTime(PerformanceCounter.QuadPart - *a6, PopQpcFrequency, 0x989680uLL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x4000000) != 0 )
  {
    v13[1] = a3;
    v12 = a4 | 4;
    v13[2] = a2;
    v13[3] = a5;
    v13[4] = v9;
    if ( a5 != -1 )
      v12 = a4;
    v15 = 20;
    v16 = 0;
    v13[0] = v12;
    v14 = v13;
    EtwTraceKernelEvent((__int64)&v14, 1u, 0x44000000u, 0x123Cu, 0x602u);
  }
  return 1;
}
