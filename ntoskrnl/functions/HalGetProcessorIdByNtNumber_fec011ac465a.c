__int64 __fastcall HalGetProcessorIdByNtNumber(__int64 a1)
{
  _DWORD *ProcessorStateByNtIndex; // rax
  _DWORD *v2; // rdx

  if ( (unsigned int)a1 >= (unsigned int)HalpInterruptProcessorCount )
    return 3221225485LL;
  ProcessorStateByNtIndex = (_DWORD *)HalpGetProcessorStateByNtIndex(a1);
  if ( !ProcessorStateByNtIndex )
    return 3221226021LL;
  *v2 = *ProcessorStateByNtIndex;
  return 0LL;
}
