/*
 * XREFs of Amd64ConfigureCounter @ 0x140526AA0
 * Callers:
 *     Amd64DisableMonitoring @ 0x140526BF0 (Amd64DisableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x140526CE0 (Amd64EnableMonitoring.c)
 *     Amd64RestartProfiling @ 0x140A95C40 (Amd64RestartProfiling.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Amd64ConfigureCounter(unsigned int a1, char a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v11; // r11
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 result; // rax

  v5 = a1;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v7 = HalpCounterStatus;
  else
    v7 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  v8 = 0LL;
  if ( a1 < Amd64NumberCoreCounters )
  {
    _mm_lfence();
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8LL * a1) + 16LL) + 8LL) )
    {
      v9 = a1 + 1;
      if ( !a2 )
      {
        v12 = *((_DWORD *)&Amd64EventSelectRegisters + v9);
        LODWORD(v13) = 0;
        LODWORD(v14) = 0;
        v11 = v5;
LABEL_11:
        __writemsr(v12, __PAIR64__(v14, v13));
        goto LABEL_12;
      }
      _mm_lfence();
      v10 = **(_QWORD **)(*(_QWORD *)(v7 + 8LL * (a1 + 1)) + 16LL) | 0x400000LL;
      __writemsr(*((_DWORD *)&Amd64PerfCounterRegisters + v9), (unsigned __int16)-(a5 != 0));
      __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + v9), v10);
      v11 = a1;
LABEL_10:
      v12 = *((_DWORD *)&Amd64PerfCounterRegisters + v11);
      v13 = -(a3 & -(__int64)(a5 != 0));
      v14 = HIDWORD(v13);
      v8 = a4 | (a5 != 0 ? 5242880LL : 0x400000LL);
      goto LABEL_11;
    }
  }
  v11 = a1;
  if ( a2 )
    goto LABEL_10;
LABEL_12:
  result = v8;
  __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + v11), v8);
  return result;
}
