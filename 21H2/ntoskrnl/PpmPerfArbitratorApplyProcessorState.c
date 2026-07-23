/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x140398DF4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 *     PoSetProcessorQoS @ 0x14056E79C (PoSetProcessorQoS.c)
 * Callees:
 *     KeUpdateQosGroupingSets @ 0x140398F4C (KeUpdateQosGroupingSets.c)
 *     PpmEventProcessorPerfStateChange @ 0x140398FD8 (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r14
  char v8; // r9
  __int64 v10; // r8
  char v12; // di
  char v13; // si
  signed int v14; // ebp
  int v15; // edx
  _DWORD *v16; // rcx
  int v18; // eax
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // r10
  unsigned __int64 v23; // r11

  v4 = *(_QWORD *)(a1 + 33136);
  v5 = a1 + 33128;
  v6 = *(_QWORD *)(a1 + 33128);
  v8 = a3;
  v10 = 0LL;
  v12 = 1;
  v13 = 0;
  if ( PpmPerfQosEnabled )
    v14 = *(_DWORD *)(a1 + 33264);
  else
    v14 = 0;
  v15 = *(_DWORD *)(v6 + 548);
  if ( v14 != *(_DWORD *)(a1 + 33268) )
  {
    if ( !*(_BYTE *)(v6 + 355) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
    {
      v18 = *(unsigned __int16 *)(a1 + 33272);
      v16 = (_DWORD *)(v4 + 104);
      if ( !_bittest(&v18, v14) || *v16 != v15 )
      {
        *v16 = v15;
        v8 = 1;
        a2 = 1;
      }
      *(_DWORD *)(a1 + 33268) = v14;
      v13 = 1;
      goto LABEL_7;
    }
    return 0;
  }
  v16 = (_DWORD *)(v4 + 104);
  if ( *(_DWORD *)(v4 + 104) != v15 )
  {
    if ( !v14 )
    {
LABEL_6:
      *v16 = v15;
      v8 = 1;
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v6 + 355) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
    {
      a2 = 1;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_7:
  if ( v8 )
  {
    if ( a3 )
      *v16 = 0;
    LOBYTE(a4) = a3;
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 72);
    LOBYTE(v10) = a2;
    *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 76);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(v6 + 40LL * v14 + 552);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(v6 + 40LL * v14 + 568);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(v6 + 40LL * v14 + 584);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v6 + 288))(*(_QWORD *)(v4 + 8), v4 + 64, v10, a4);
    if ( PopHeteroSystem )
    {
      v19 = *(_WORD *)(v6 + 2LL * v14 + 536);
      v20 = *(_WORD *)(a1 + 33272);
      if ( v19 != v20 )
      {
        *(_WORD *)(a1 + 33272) = v19;
        v21 = 0;
        v22 = *(_QWORD *)(a1 + 192);
        do
        {
          if ( (v19 & 1) != (v20 & 1) )
          {
            v23 = *(unsigned __int8 *)(a1 + 209);
            if ( (v19 & 1) != 0 )
              _interlockedbittestandset64((volatile signed __int32 *)(v22 + 8LL * v21 + 304), v23);
            else
              _interlockedbittestandreset64((volatile signed __int32 *)(v22 + 8LL * v21 + 304), v23);
          }
          v19 >>= 1;
          ++v21;
          v20 >>= 1;
        }
        while ( v21 < 5 );
      }
    }
    KeUpdateQosGroupingSets(a1, (unsigned int)v14);
    v5 = a1 + 33128;
    if ( !a3 )
      v13 = 1;
  }
  if ( v13 )
    PpmEventProcessorPerfStateChange(v5, a2, *(unsigned int *)(a1 + 33268));
  return v12;
}
