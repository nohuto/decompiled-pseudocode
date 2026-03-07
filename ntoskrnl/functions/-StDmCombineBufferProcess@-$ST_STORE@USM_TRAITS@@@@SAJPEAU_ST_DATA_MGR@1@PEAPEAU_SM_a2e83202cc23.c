__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(
        __int64 a1,
        unsigned __int16 **a2,
        __int64 a3,
        struct _MDL *a4)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  unsigned __int16 *v8; // rdx
  int v9; // eax
  int v10; // edi
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rdi
  int v13; // esi
  unsigned __int16 *v14; // rsi
  _DWORD *PreviousEntry; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // r15
  char *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int128 v24; // [rsp+20h] [rbp-60h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  _OWORD v27[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+68h] [rbp-18h]

  v4 = a1 + 88;
  v6 = *(_QWORD *)(a1 + 800);
  v8 = *a2;
  v25 = 0LL;
  DWORD2(v25) = -1;
  v26 = 1LL;
  v24 = 0LL;
  if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
  {
    *((_QWORD *)&v27[0] + 1) = v8;
    *(_QWORD *)&v27[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v27[1] = 0LL;
    v28 = 0LL;
    v9 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v6, 5, v27, 0xCu);
    v10 = v9;
    if ( v9 )
    {
      if ( v9 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v10 = DWORD2(v28);
    }
  }
  else
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v6 + 6232, v8, 0, a4);
  }
  if ( v10 >= 0 )
  {
    v11 = *a2;
    v12 = v11 + 4;
    v13 = (*((_DWORD *)v11 + 2) >> 4) | (*(_DWORD *)v11 << *(_DWORD *)(a1 + 812));
    if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        v4);
    *(_DWORD *)(v4 + 32) &= ~1u;
    **(_DWORD **)(a1 + 760) = v13;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                v4,
                a1 + 64,
                *(_DWORD *)(a1 + 768)) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    v14 = (unsigned __int16 *)((char *)v11 + v11[3]);
    while ( v12 < v14 )
    {
      if ( *((_BYTE *)v12 + 7) < 0x10u )
      {
        *(_DWORD *)v12 >>= 4;
        do
        {
          PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                      a1 + 64,
                                      v4);
          v16 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v17, v16);
          v18 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460)))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17))));
        }
        while ( (*(_DWORD *)(a1 + 808) & *v18) != *(_DWORD *)v12 );
        if ( (v18[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)&v12[4 * *((unsigned __int8 *)v12 + 7) + 4] << *(_DWORD *)(a1 + 812)) | (*(_DWORD *)&v12[4 * *((unsigned __int8 *)v12 + 7) + 6] >> 4);
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      a1 + 64,
                      *(_DWORD *)(a1 + 768),
                      (__int64)&v24) >= 0 )
          {
            if ( DWORD2(v25) == -1 || !DWORD2(v25) )
              v19 = (char *)&v24 + 8;
            else
              v19 = (char *)(v24 + 16LL * (unsigned int)(DWORD2(v25) - 1));
            v20 = (_DWORD *)*((_QWORD *)v19 + 1);
            v21 = (unsigned int)(*v20 >> *(_DWORD *)(a1 + 456));
            _BitScanReverse((unsigned int *)&v22, v21);
            if ( (*(_DWORD *)(*(unsigned int *)(a1 + 472)
                            + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v20 & *(_DWORD *)(a1 + 460)))
                            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22)))
                            + 4LL) & 0xFFFFF000) != 0xFFFFF000 )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v18, v4);
          }
        }
      }
      v12 += 4 * *((unsigned __int8 *)v12 + 6) + 4;
    }
    v10 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    (__int64)&v24,
    0);
  return (unsigned int)v10;
}
