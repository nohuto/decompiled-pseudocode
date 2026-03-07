__int64 __fastcall MiSimpleAgePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  BOOL v10; // esi
  unsigned int *v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v13 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v3, a2, v7, a3 == 0, &v13) )
    return 0LL;
  v9 = *(_QWORD **)(a1 + 168);
  v10 = MiGetVaAge(v8, (__int64)(a2 << 25) >> 16) == 0;
  if ( (v13 & 0x20) != 0 )
  {
    v11 = (unsigned int *)v9[31];
    if ( v11 && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v11, (__int64)(a2 << 25) >> 16) )
        return MiSimpleAgeWorkingSetTail(a1);
    }
    else
    {
      MiAgePteWorker(v3, a2, (__int64)(a2 << 25) >> 16, v7, (__int64)v9, 3);
    }
  }
  if ( v10 )
    return ++v9[5] >= v9[6] ? 4 : 0;
  else
    return 0LL;
}
