__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  BOOL v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned int VaAge; // r15d
  unsigned int v14; // ebp
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = (__int64)(a2 << 25) >> 16;
  v7 = a3 == 0;
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = *(_QWORD *)(a1 + 168);
  v16 = v8;
  if ( (unsigned int)MiTrimmedEnough(v5, v9) )
    return 4LL;
  **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = MiComputeNextWalkPte(a2, v7);
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = 48 * ((v10 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v5, a2, 48 * (unsigned int)(v10 >> 12), v7, (__int64)&v16) )
    return 0LL;
  VaAge = (unsigned __int8)MiGetVaAge(v12, v6);
  v14 = *(_DWORD *)v9 & 0xF;
  if ( (unsigned int)MiTrimPteWorker(a1, a2, v6, v11, v9, (v16 >> 5) & 1, (__int64)&v17) )
    return 4LL;
  if ( v17 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v9 + 248), v6) )
  {
    MiTrimWorkingSetTail(a1);
    return 0LL;
  }
  if ( VaAge < v14 )
    return 0LL;
  return ++*(_QWORD *)(v9 + 40) >= *(_QWORD *)(v9 + 48) ? 4 : 0;
}
