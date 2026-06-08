/*
 * XREFs of InitEnergyCounters @ 0x1C00270D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0004AC0 (memset.c)
 *     InitEnergyCountersMsr @ 0x1C0027224 (InitEnergyCountersMsr.c)
 *     GetProcessorArchitectureIndex @ 0x1C0027250 (GetProcessorArchitectureIndex.c)
 *     ProbeMsr @ 0x1C00273BC (ProbeMsr.c)
 *     RetrieveModelParameters @ 0x1C0027480 (RetrieveModelParameters.c)
 *     InitEnergyCountersMsrEx @ 0x1C002BC60 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C002BD20 (ProbeFixedFunctionCounters.c)
 */

__int64 InitEnergyCounters()
{
  unsigned int Number; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  int ProcessorArchitectureIndex; // esi
  unsigned __int64 *p_Lock; // r8
  unsigned __int64 v6; // rax
  double v7; // xmm1_8
  __int64 SystemArgument1_low; // r9
  unsigned __int64 v9; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = -1073741637;
  ProcessorArchitectureIndex = GetProcessorArchitectureIndex();
  if ( ProcessorArchitectureIndex == 2 )
    return v1;
  if ( Number )
    goto LABEL_3;
  memset(&WPP_MAIN_CB.DeviceQueue.Size + 1, 0, 0xDCuLL);
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = ProcessorArchitectureIndex & 1;
  RetrieveModelParameters(&WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 && !(unsigned __int8)ProbeFixedFunctionCounters() )
  {
    memset(&WPP_MAIN_CB.Dpc.DeferredContext, 0, 0x98uLL);
    LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
    WPP_MAIN_CB.Dpc.SystemArgument1 = (void *)0x63900000001LL;
  }
  if ( (unsigned __int8)ProbeMsr(&WPP_MAIN_CB.Dpc.DeferredContext) )
  {
    v6 = __readmsr(0x606u);
    v2 = (unsigned __int64)HIDWORD(v6) << 32;
    p_Lock = (unsigned __int64 *)v6;
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type ^= (LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) ^ (unsigned __int8)((unsigned int)v6 >> 7)) & 0x3E;
    if ( ProcessorArchitectureIndex == 1 )
    {
      p_Lock = (unsigned __int64 *)(((unsigned int)v6 >> 8) & 0x1F);
      v2 = 1LL << (BYTE1(v6) & 0x1F);
      if ( v2 < 0 )
      {
        v2 = (1LL << (BYTE1(v6) & 0x1F)) & 1;
        v7 = (double)(int)(v2 | ((unsigned __int64)(1LL << (BYTE1(v6) & 0x1F)) >> 1))
           + (double)(int)(v2 | ((unsigned __int64)(1LL << (BYTE1(v6) & 0x1F)) >> 1));
      }
      else
      {
        v7 = (double)(int)v2;
      }
      *(double *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 1.0 / v7;
    }
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
    {
      p_Lock = &WPP_MAIN_CB.DeviceQueue.Lock;
      SystemArgument1_low = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      do
      {
        v9 = __readmsr(*((_DWORD *)p_Lock + 15));
        v2 = (unsigned __int64)HIDWORD(v9) << 32;
        *(_DWORD *)p_Lock = v9;
        p_Lock = (unsigned __int64 *)((char *)p_Lock + 4);
        --SystemArgument1_low;
      }
      while ( SystemArgument1_low );
    }
LABEL_3:
    if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) == 1 )
        InitEnergyCountersMsrEx(Number, v2, p_Lock);
    }
    else
    {
      InitEnergyCountersMsr(Number);
    }
    return 0;
  }
  return v1;
}
