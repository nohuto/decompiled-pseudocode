int __fastcall RIMSetContactEndState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rbx
  int result; // eax

  v5 = a2 + 2368;
  if ( !*(_QWORD *)(a1 + 784) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1940);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1942);
  *(_OWORD *)v5 = *(_OWORD *)(a2 + 2608);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 2624);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 2640);
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(a2 + 2656);
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(a2 + 2672);
  *(_OWORD *)(v5 + 80) = *(_OWORD *)(a2 + 2688);
  *(_OWORD *)(v5 + 96) = *(_OWORD *)(a2 + 2704);
  *(_OWORD *)(v5 + 112) = *(_OWORD *)(a2 + 2720);
  *(_OWORD *)(v5 + 128) = *(_OWORD *)(a2 + 2736);
  *(_OWORD *)(v5 + 144) = *(_OWORD *)(a2 + 2752);
  *(_OWORD *)(v5 + 160) = *(_OWORD *)(a2 + 2768);
  *(_OWORD *)(v5 + 176) = *(_OWORD *)(a2 + 2784);
  *(_OWORD *)(v5 + 192) = *(_OWORD *)(a2 + 2800);
  *(_OWORD *)(v5 + 208) = *(_OWORD *)(a2 + 2816);
  *(_OWORD *)(v5 + 224) = *(_OWORD *)(a2 + 2832);
  *(_DWORD *)(v5 + 48) = 0;
  *(_WORD *)(v5 + 58) = 0;
  result = *(_DWORD *)(v5 + 76) & 0x2000000;
  *(_DWORD *)(v5 + 128) = a4;
  *(_QWORD *)(v5 + 144) = a3;
  *(_DWORD *)(v5 + 76) = result;
  if ( a5 )
  {
    result |= 0x8000u;
    *(_DWORD *)(v5 + 76) = result;
  }
  *(_DWORD *)(v5 + 164) = 0;
  return result;
}
