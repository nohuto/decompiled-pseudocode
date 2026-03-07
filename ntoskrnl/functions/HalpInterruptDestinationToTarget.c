__int64 __fastcall HalpInterruptDestinationToTarget(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rax
  unsigned __int8 v6; // si
  __int64 v7; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = a1;
  v3 = 0;
  *(_DWORD *)a3 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v5 = *(__int64 **)(a2 + 8);
      v6 = 0;
      LODWORD(ProcNumber) = 0;
      v7 = *v5;
      LOWORD(ProcNumber) = *((_WORD *)v5 + 4);
      while ( v7 )
      {
        if ( _bittest64(&v7, v6) )
        {
          v7 &= ~(1LL << v6);
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber);
          HalpInterruptAddTarget(a3, ProcessorIndexFromNumber);
        }
        BYTE2(ProcNumber) = ++v6;
      }
      break;
    case 3:
      *(_DWORD *)a3 = 1;
      break;
    case 4:
      *(_DWORD *)a3 = 2;
      break;
    case 5:
      *(_DWORD *)a3 = 3;
      break;
    case 6:
      v10 = 3LL * *(unsigned int *)(a2 + 8);
      v11 = HalpInterruptTargets;
      *(_OWORD *)a3 = *(_OWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)(a2 + 8));
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(v11 + 8 * v10 + 16);
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v3;
}
