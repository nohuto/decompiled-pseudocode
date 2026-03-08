/*
 * XREFs of KiMarkBugCheckRegions @ 0x1403DE604
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x140567894 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     MmQueryApiSetSchema @ 0x1402F3614 (MmQueryApiSetSchema.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     MmIsAddressValid @ 0x1403A9A20 (MmIsAddressValid.c)
 *     sub_1403ED56C @ 0x1403ED56C (sub_1403ED56C.c)
 */

char __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v6; // esi
  int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // edi
  ULONG *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  BOOL v13; // r8d
  int v14; // edx
  int v15; // r9d
  int v16; // ebx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // r14
  int *v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  ULONG *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  BOOL v26; // r8d
  int v27; // edx
  int v28; // r9d
  int v29; // ebx
  __int64 v30; // rcx
  ULONG *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  int v34; // r8d
  __int64 v35; // rcx
  char result; // al
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-49h] BYREF
  ULONG v38[2]; // [rsp+40h] [rbp-29h] BYREF
  ULONG v39[2]; // [rsp+60h] [rbp-9h] BYREF
  PVOID VirtualAddress; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+7Fh] BYREF

  _mm_lfence();
  v6 = 4;
  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
  if ( qword_140C0DF20 )
  {
    *(_QWORD *)&KiMismatchSummary = qword_140C0DF20;
    IoAddTriageDumpDataBlock((ULONG)&KiMismatchSummary, (PVOID)8);
  }
  v7 = 3;
  if ( (_DWORD)a4 == 257 && dword_140C0DF18 )
  {
    v8 = qword_140C0DF08;
    v9 = 0;
    do
    {
      _mm_lfence();
      if ( MmIsAddressValid((PVOID)((v8 + v9) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v10 = MaxDataSize;
        v11 = 4LL;
        v12 = MmPteBase + ((((v8 + v9) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *(_QWORD *)v10 = v12;
          v10 += 2;
          v12 = MmPteBase + ((v12 >> 9) & 0x7FFFFFFFF8LL);
          --v11;
        }
        while ( v11 );
        v13 = 0;
        v14 = 3;
        do
        {
          v15 = v14;
          if ( v13 )
          {
            *(_QWORD *)&MaxDataSize[2 * v14] = 0LL;
          }
          else
          {
            if ( !v14 )
              break;
            v13 = **(char **)&MaxDataSize[2 * v14] < 0;
          }
          --v14;
        }
        while ( v15 );
        v16 = 4;
        do
        {
          v17 = *(_QWORD *)&MaxDataSize[2 * (v16 - 1)];
          if ( !v17 )
            break;
          IoAddTriageDumpDataBlock(v17, (PVOID)8);
          --v16;
        }
        while ( v16 );
      }
      v9 += 4096;
    }
    while ( v9 < dword_140C0DF18 );
    dword_140C0DF18 = 4096;
  }
  v18 = &qword_140C0DF08;
  v19 = 2LL;
  v20 = &dword_140C0DF18;
  do
  {
    v21 = (unsigned int)*v20;
    if ( (_DWORD)v21 )
      IoAddTriageDumpDataBlock(*v18, (PVOID)v21);
    ++v20;
    ++v18;
    --v19;
  }
  while ( v19 );
  if ( a3 )
  {
    IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, (PVOID)0x1000);
    v22 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    IoAddTriageDumpDataBlock((a3 & 0xFFFFF000) + 4096, (PVOID)0x1000);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v23 = v38;
      v24 = 4LL;
      v25 = MmPteBase + (((a3 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v23 = v25;
        v23 += 2;
        v25 = MmPteBase + ((v25 >> 9) & 0x7FFFFFFFF8LL);
        --v24;
      }
      while ( v24 );
      v26 = 0;
      v27 = 3;
      do
      {
        v28 = v27;
        if ( v26 )
        {
          *(_QWORD *)&v38[2 * v27] = 0LL;
        }
        else
        {
          if ( !v27 )
            break;
          v26 = **(char **)&v38[2 * v27] < 0;
        }
        --v27;
      }
      while ( v28 );
      v29 = 4;
      do
      {
        v30 = *(_QWORD *)&v38[2 * (v29 - 1)];
        if ( !v30 )
          break;
        IoAddTriageDumpDataBlock(v30, (PVOID)8);
        --v29;
      }
      while ( v29 );
    }
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v22) )
    {
      v31 = v39;
      v32 = 4LL;
      v33 = MmPteBase + ((v22 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v31 = v33;
        v31 += 2;
        v33 = MmPteBase + ((v33 >> 9) & 0x7FFFFFFFF8LL);
        --v32;
      }
      while ( v32 );
      do
      {
        v34 = v7;
        if ( (_DWORD)v32 )
        {
          *(_QWORD *)&v39[2 * v7] = 0LL;
        }
        else
        {
          if ( !v7 )
            goto LABEL_47;
          LODWORD(v32) = **(char **)&v39[2 * v7] < 0;
        }
        --v7;
      }
      while ( v34 );
      do
      {
LABEL_47:
        v35 = *(_QWORD *)&v39[2 * (v6 - 1)];
        if ( !v35 )
          break;
        IoAddTriageDumpDataBlock(v35, (PVOID)8);
        --v6;
      }
      while ( v6 );
    }
    if ( (PVOID)a3 == HvlpHypercallCodeVa )
      IoAddTriageDumpDataBlock((ULONG)&HvlpHypercallCodeVa, (PVOID)8);
    if ( a3 == *(_QWORD *)&HvlpVsmVtlCallVa )
      IoAddTriageDumpDataBlock((ULONG)&HvlpVsmVtlCallVa, (PVOID)8);
    MmQueryApiSetSchema(&VirtualAddress, &v43);
    if ( MmIsAddressValid(VirtualAddress) && a3 == *(_QWORD *)VirtualAddress )
      IoAddTriageDumpDataBlock((ULONG)VirtualAddress, (PVOID)8);
  }
  result = sub_1403ED56C(a1, a2, a3, a4);
  if ( *(_QWORD *)&::MaxDataSize )
    return IoAddTriageDumpDataBlock(::MaxDataSize, (PVOID)0xAA0);
  return result;
}
