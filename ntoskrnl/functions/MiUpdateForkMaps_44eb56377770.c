ULONG_PTR __fastcall MiUpdateForkMaps(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v8; // r13d
  __int64 NextPageTable; // rax
  ULONG_PTR v10; // rdi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  ULONG_PTR v15; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 *v24; // rbx
  unsigned __int8 v25; // r9
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v30; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  LODWORD(v30) = 0;
  v8 = 4;
  v28 = 0LL;
  v29 = 0LL;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4, &v30);
  v27 = NextPageTable;
  v10 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  v12 = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( v12 )
  {
    v13 = v12;
    v14 = v12;
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
    v10 += 8LL;
    do
    {
      v10 = (__int64)(v10 << 25) >> 16;
      --v13;
    }
    while ( v13 );
  }
  else
  {
    if ( ((a1[6] ^ v10) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiFillPteHierarchy((__int64)(v10 << 25) >> 16, (unsigned __int64 *)&v28);
      v16 = *a1;
      v17 = (unsigned __int64 *)&v29 + 1;
      a1[6] = v10;
      v18 = *(_QWORD *)(v16 + 40) >> 12;
      v19 = 0LL;
      v20 = v18;
      v21 = 3LL;
      do
      {
        v30 = (__int64 *)(MiMapSinglePage(a1[7], v18, 1073741856, 0) + 8LL * ((*(_DWORD *)v17 >> 3) & 0x1FF));
        v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v30);
        v26 = v22;
        v23 = v22;
        if ( v22 )
        {
          if ( (v22 & 1) != 0 )
          {
            v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
          }
          else if ( qword_140C657C0 )
          {
            if ( (v22 & 0x10) != 0 )
              v23 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v23 = ~qword_140C657C0 & v22;
          }
          v18 = (v23 >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v24 = &a1[4 - v8];
          MiDoneWithThisPageGetAnother(v24 + 1, a5, *a1, a6);
          v18 = v24[1];
          MiBuildForkPageTable(*a1, v18, *v17, v30, v20, v8 - 1);
          ++*v31;
          if ( v19 )
            MiIncreaseUsedPtesCount(v19, 1u);
        }
        v19 = 48 * v18 - 0x220000000000LL;
        --v8;
        --v17;
        v20 = v18;
        --v21;
      }
      while ( v21 );
      v15 = MiMapSinglePage(a1[7], v18, 1073741856, 0);
      v10 = v27;
      a1[4] = v15;
      a1[8] = v19;
    }
    else
    {
      v15 = a1[4];
    }
    v25 = a6;
    a1[5] = v15 | v10 & 0xFFF;
    MiMakeSystemAddressValid(v10, 0LL, 0, v25, 1);
  }
  return v10;
}
