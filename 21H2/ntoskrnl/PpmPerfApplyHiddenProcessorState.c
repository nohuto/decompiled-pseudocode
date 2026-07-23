/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x14056E8EC
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x140398AA0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmEventProcessorPerfStateChange @ 0x140398FD8 (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  bool v6; // si
  char result; // al
  int v8; // eax
  __int64 v9; // rdx

  v4 = a3;
  v6 = *(_BYTE *)(a1 + 358) || *(_BYTE *)(a1 + 353) != 0xFD && (_BYTE)a3;
  result = *(_DWORD *)(a2 + 104) != *(_DWORD *)(a1 + 548);
  if ( (_BYTE)a3 )
  {
    *(_DWORD *)(a2 + 104) = 0;
    result = 1;
  }
  if ( result )
  {
    v8 = *(_DWORD *)(a2 + 72);
    v9 = a2 + 64;
    *(_DWORD *)(a2 + 112) = v8;
    LOBYTE(a4) = a3;
    LOBYTE(a3) = v6;
    *(_DWORD *)(a2 + 108) = *(_DWORD *)(v9 + 12);
    *(_OWORD *)v9 = *(_OWORD *)(a1 + 552);
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(a1 + 568);
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(a1 + 584);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 296))(*(_QWORD *)(a2 + 8), v9, a3, a4);
  }
  if ( *(_DWORD *)(a2 + 16) == 1 && !v4 )
    return PpmEventProcessorPerfStateChange(*(_QWORD *)a2, v6, 0);
  return result;
}
