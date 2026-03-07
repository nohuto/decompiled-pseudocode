__int64 __fastcall HalpInterruptUpdateLocalUnitIdentifier(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // edx
  ULONG_PTR v9; // rax
  char v11; // cl
  __int64 v12; // r9
  __int64 ProcessorIndexFromNumber; // r15
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD, int *, __int64, __int64); // rax
  int v16; // r8d
  unsigned int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  int v21; // r11d
  int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 i; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // [rsp+58h] [rbp+10h] BYREF

  v28 = a2;
  v4 = a2;
  v6 = 0;
  if ( !(_DWORD)HalpInterruptProcessorCount )
  {
LABEL_5:
    HalpInterruptSetProblemEx(0LL, 21, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x3F1u);
    return 3221226021LL;
  }
  v9 = HalpInterruptProcessorState;
  while ( *(_DWORD *)v9 != a1 )
  {
    ++v6;
    v9 += 64LL;
    if ( v6 >= (unsigned int)HalpInterruptProcessorCount )
      goto LABEL_5;
  }
  v11 = *(_BYTE *)(v9 + 13);
  *(_DWORD *)v9 = v4;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)((v9 + 16) & -(__int64)(v11 != 0)));
  v14 = HalpInterruptTargets;
  *(_OWORD *)a3 = *(_OWORD *)(HalpInterruptTargets + 24 * ProcessorIndexFromNumber);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v14 + 24 * ProcessorIndexFromNumber + 16);
  if ( *(_DWORD *)(v14 + 24 * ProcessorIndexFromNumber) == 4 )
  {
    *(_DWORD *)(v14 + 24 * ProcessorIndexFromNumber + 8) = v4;
    v4 = v28;
  }
  v15 = *(__int64 (__fastcall **)(_QWORD, int *, __int64, __int64))(HalpInterruptController + 144);
  if ( v15 )
  {
    LOBYTE(v12) = 1;
    v16 = v15(*(_QWORD *)(HalpInterruptController + 16), &v28, a4, v12);
    if ( v16 < 0 )
    {
      HalpInterruptSetProblemEx(
        HalpInterruptController,
        9,
        v16,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
        0x414u);
      return v17;
    }
    v18 = HalpInterruptTargets;
    *(_OWORD *)(HalpInterruptTargets + 24 * ProcessorIndexFromNumber) = *(_OWORD *)a4;
    *(_QWORD *)(v18 + 24 * ProcessorIndexFromNumber + 16) = *(_QWORD *)(a4 + 16);
    v4 = v28;
  }
  v19 = 0;
  if ( HalpInterruptDynamicProcessorCount )
  {
    v20 = (_DWORD *)HalpInterruptDynamicProcessorState;
    while ( *v20 != a1 )
    {
      ++v19;
      v20 += 16;
      if ( v19 >= HalpInterruptDynamicProcessorCount )
        goto LABEL_18;
    }
    *v20 = v4;
  }
LABEL_18:
  v21 = -1;
  v22 = 29;
  if ( *(_DWORD *)a3 == 6 )
  {
    v23 = HalpInterruptClusterData;
    if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
    {
LABEL_22:
      HalpInterruptSetProblemEx(0LL, 29, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x44Bu);
    }
    else
    {
      while ( *(_DWORD *)v23 != *(_DWORD *)(a3 + 8) )
      {
        v23 += 24LL;
        if ( v23 >= HalpInterruptClusterDataEnd )
          goto LABEL_22;
      }
      v26 = *(_QWORD *)(v23 + 8) & ~(1LL << (KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F));
      *(_QWORD *)(v23 + 8) = v26;
      if ( !v26 )
        *(_DWORD *)v23 = -1;
    }
  }
  v24 = HalpInterruptTargets;
  *(_OWORD *)a4 = *(_OWORD *)(HalpInterruptTargets + 24 * ProcessorIndexFromNumber);
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v24 + 24 * ProcessorIndexFromNumber + 16);
  if ( *(_DWORD *)a4 == 6 )
  {
    for ( i = HalpInterruptClusterData; ; i += 24LL )
    {
      if ( i >= HalpInterruptClusterDataEnd )
      {
        HalpInterruptSetProblemEx(0LL, v22, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x46Eu);
        return 0LL;
      }
      if ( *(_DWORD *)i == v21 || *(_DWORD *)i == *(_DWORD *)(a4 + 8) )
        break;
    }
    v27 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber];
    *(_DWORD *)i = *(_DWORD *)(a4 + 8);
    *(_QWORD *)(i + 8) |= 1LL << (v27 & 0x3F);
  }
  return 0LL;
}
