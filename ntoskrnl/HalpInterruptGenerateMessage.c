__int64 __fastcall HalpInterruptGenerateMessage(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  ULONG_PTR v4; // rdi
  int v6; // ecx
  char v7; // r15
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, __int128 *, _QWORD *, _QWORD *); // rax
  int v16; // r8d
  unsigned int v17; // r8d
  int v19; // ecx
  __int64 v20; // rcx
  int ProcessorIdByNtNumber; // eax
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]

  v4 = HalpInterruptController;
  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *(_DWORD *)a1;
  v7 = 0;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v11 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v11 )
  {
    v12 = HalpInterruptDestinationToTarget(v11, a1, (__int64)&v23 + 8);
    if ( v12 >= 0 )
      goto LABEL_3;
    HalpInterruptSetProblemEx(0, 21, v12, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1987);
    return (unsigned int)-1073741811;
  }
  v19 = v11 - 2;
  if ( !v19 )
  {
    DWORD2(v23) = 1;
    goto LABEL_3;
  }
  if ( v19 != 3 )
    return (unsigned int)-1073741637;
  v20 = *(unsigned int *)(a1 + 8);
  v7 = 1;
  DWORD2(v23) = 4;
  ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v20, &v24);
  if ( ProcessorIdByNtNumber < 0 )
  {
    HalpInterruptSetProblemEx(
      0,
      21,
      ProcessorIdByNtNumber,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      1971);
    return (unsigned int)-1073741811;
  }
LABEL_3:
  v13 = 16;
  LODWORD(v22) = 2;
  DWORD2(v22) = 1;
  DWORD1(v23) = 1;
  if ( !v7 )
    v13 = 18;
  LODWORD(v23) = -1;
  HIDWORD(v22) = v13;
  LODWORD(v25) = *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
  {
    v14 = *(_DWORD **)(a1 + 16);
    if ( (*v14 & 0x3FFFFFFF) != 0x3FFFFFFE )
    {
      DWORD2(v23) = 7;
      LODWORD(v24) = *v14 & 0x3FFFFFFF;
    }
  }
  v15 = *(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD *, _QWORD *))(v4 + 136);
  v16 = -1073741637;
  if ( v15 && (v16 = v15(*(_QWORD *)(v4 + 16), &v22, a3, a4), v16 >= 0) )
  {
    v17 = -1073740768;
    if ( (((-(__int64)(HalpApicGuestX2Mode != 0) & 0xFF00000100000000uLL) - 0x100000000LL) & *a3) == 0 )
      return (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 0xC0000420 : 0;
  }
  else
  {
    HalpInterruptSetProblemEx(v4, 8, v16, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2049);
  }
  return v17;
}
