__int64 __fastcall EtwpInitializeProviderInfoBuffer(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  EtwpInitializeBufferHeader((__int16 *)a1, (_DWORD *)a2);
  *(_DWORD *)a2 = a3;
  EtwpResetBufferHeader(a2, 7);
  *(_DWORD *)(a2 + 44) = 3;
  result = 1LL;
  *(_WORD *)(a2 + 52) = 1;
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 304);
  v7 = *(_QWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) ^ *(_DWORD *)(a1 + 200)) & 7;
  *(_QWORD *)(a2 + 32) = v7;
  switch ( *(_DWORD *)(a1 + 200) )
  {
    case 1:
      goto LABEL_2;
    case 3:
      result = v7 & 7 | (8LL * (unsigned int)EtwCPUSpeedInMHz);
      *(_QWORD *)(a2 + 32) = result;
      return result;
    case 4:
LABEL_2:
      result = 8 * EtwPerfFreq.QuadPart;
      *(_QWORD *)(a2 + 32) = (8 * EtwPerfFreq.QuadPart) | v7 & 7;
      break;
  }
  return result;
}
