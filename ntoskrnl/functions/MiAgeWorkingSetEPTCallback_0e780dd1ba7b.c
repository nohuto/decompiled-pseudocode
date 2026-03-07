__int64 __fastcall MiAgeWorkingSetEPTCallback(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // r14
  int v7; // esi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v7 = a3;
  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v16 = v9;
  v10 = *a2;
  v11 = 0;
  v12 = (__int64)a5;
  if ( (v10 & 2) != 0 )
  {
    v13 = (v9 >> 5) & 1;
    v11 = v13 | 2;
    if ( (*a5 & 3) == 0 )
      v11 = v13;
  }
  else if ( (v10 & 1) != 0 )
  {
    v11 = 1;
    if ( (*(_BYTE *)a5 & 3) != 0 )
      v11 = 5;
  }
  v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16);
  MiAgePteWorker(v5, v7, a4, 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v12, v11);
  return 0LL;
}
