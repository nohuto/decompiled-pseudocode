__int64 Amd64InitializeDataFabricStatus()
{
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned int Number; // ebx
  __int64 v8; // rdi
  __int64 v9; // r11
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // edx
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax

  _RAX = 2147483678LL;
  __asm { cpuid }
  result = Amd64InitializeUncoreStatus(
             1LL,
             &Amd64DataFabricStatusHead,
             (unsigned __int8)_RCX,
             (unsigned int)Amd64NumberDataFabricCounters);
  v6 = result;
  if ( result )
  {
    Number = KeGetPcr()->Prcb.Number;
    v8 = Amd64CounterStatus + 24LL * Amd64NumberCounters * Number;
    v9 = HalpProfileInterface == &DefaultProfileInterface
       ? HalpCounterStatus
       : HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
    v10 = Amd64NumberCoreCounters;
    v11 = Amd64NumberCoreCounters;
    v12 = Amd64NumberDataFabricCounters;
    result = (unsigned int)(Amd64NumberDataFabricCounters + Amd64NumberCoreCounters);
    if ( Amd64NumberCoreCounters < (unsigned int)result )
    {
      v13 = Amd64NumberCoreCounters + Amd64NumberDataFabricCounters;
      do
      {
        v14 = v8 + 24LL * v11;
        v15 = v11;
        *(_QWORD *)(v14 + 8) = v6;
        if ( v11 < v13 )
        {
          if ( v11 >= v10 )
            v15 = v11 - v10;
        }
        else
        {
          v15 = v11 - v10 - v12;
        }
        v16 = *((_DWORD *)&Amd64EventSelectRegisters + v11);
        v17 = *(_QWORD *)(v6 + 24) + 40 * v15;
        *(_QWORD *)(v9 + 8LL * v11) = v17;
        *(_QWORD *)(v17 + 16) = v14;
        __writemsr(v16, 0LL);
        result = Amd64FreeCounter(v11);
        v10 = Amd64NumberCoreCounters;
        ++v11;
        v12 = Amd64NumberDataFabricCounters;
        v13 = Amd64NumberCoreCounters + Amd64NumberDataFabricCounters;
      }
      while ( v11 < Amd64NumberCoreCounters + Amd64NumberDataFabricCounters );
    }
  }
  return result;
}
