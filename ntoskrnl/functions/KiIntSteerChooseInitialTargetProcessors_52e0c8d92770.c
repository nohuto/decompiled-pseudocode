__int64 __fastcall KiIntSteerChooseInitialTargetProcessors(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v11; // ebp
  int v12; // r9d
  int SteeringMode; // r14d
  __int64 v14; // rdx
  bool v15; // zf
  unsigned int v16; // ecx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-28h]

  v7 = a3 + 24;
  v19 = a3 + 24;
  v8 = a3;
  v11 = 0;
  *(_OWORD *)a6 = 0LL;
  v12 = *(_DWORD *)(a3 + 16);
  LOBYTE(a3) = a5;
  SteeringMode = KeIntSteerGetSteeringMode(a1, a2, a3, v12, v19);
  if ( SteeringMode != 2 || (v11 = KiIntRedirectConnnect(a1, a2, v8), v11 >= 0) )
  {
    v14 = *(unsigned __int16 *)(v7 + 8);
    *(_WORD *)(a6 + 8) = v14;
    if ( SteeringMode )
    {
      v15 = (*(_QWORD *)v7 & qword_140C41268[v14]) == 0;
      *(_QWORD *)a6 = *(_QWORD *)v7 & qword_140C41268[v14];
      if ( !v15 )
        v7 = a6;
      v16 = KiProcessorIndexToNumberMappingTable[(unsigned int)KiIntPartGetLowestClassProcessorInMask(v7)];
      *(_DWORD *)(a6 + 10) = 0;
      *(_WORD *)(a6 + 14) = 0;
      *(_QWORD *)a6 = 1LL << (v16 & 0x3F);
      *(_WORD *)(a6 + 8) = v16 >> 6;
      goto LABEL_6;
    }
    v18 = *(_QWORD *)v7;
    *(_QWORD *)a6 = *(_QWORD *)v7;
    if ( (unsigned __int16)KiIntSteerAffinitizedInterrupts <= (unsigned __int16)v14 )
    {
      if ( HIWORD(KiIntSteerAffinitizedInterrupts) <= (unsigned __int16)v14 )
      {
LABEL_6:
        *a7 = SteeringMode;
        return (unsigned int)v11;
      }
      LOWORD(KiIntSteerAffinitizedInterrupts) = v14 + 1;
    }
    qword_140C41148[v14] |= v18;
    goto LABEL_6;
  }
  return (unsigned int)v11;
}
