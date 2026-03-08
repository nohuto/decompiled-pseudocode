/*
 * XREFs of PpmPerfApplyHiddenProcessorState @ 0x14058AB3C
 * Callers:
 *     PpmPerfApplyProcessorStates @ 0x1402ED3A0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmEventProcessorPerfStateChange @ 0x1402ED92C (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfApplyHiddenProcessorState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  bool v6; // si
  char result; // al
  int v8; // eax
  __int64 v9; // rdx

  v4 = a3;
  v6 = *(_BYTE *)(a1 + 486) || *(_BYTE *)(a1 + 481) != 0xFD && (_BYTE)a3;
  result = *(_DWORD *)(a2 + 104) != *(_DWORD *)(a1 + 764);
  if ( (_BYTE)a3 )
  {
    *(_DWORD *)(a2 + 104) = 0;
  }
  else if ( *(_DWORD *)(a2 + 104) == *(_DWORD *)(a1 + 764) )
  {
    goto LABEL_10;
  }
  v8 = *(_DWORD *)(a2 + 72);
  v9 = a2 + 64;
  *(_DWORD *)(a2 + 112) = v8;
  LOBYTE(a4) = a3;
  LOBYTE(a3) = v6;
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(v9 + 12);
  *(_OWORD *)v9 = *(_OWORD *)(a1 + 768);
  *(_OWORD *)(v9 + 16) = *(_OWORD *)(a1 + 784);
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(a1 + 800);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a1 + 392))(*(_QWORD *)(a2 + 8), v9, a3, a4);
LABEL_10:
  if ( *(_DWORD *)(a2 + 16) == 1 && !v4 )
    return PpmEventProcessorPerfStateChange(*(_QWORD *)a2, v6, 0);
  return result;
}
