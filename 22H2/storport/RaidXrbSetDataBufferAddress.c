/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x1C00057D0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0003950 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0033060 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0042C0C (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  char v5; // si
  char v6; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  struct _MDL *v11; // r13
  unsigned int v12; // ebp
  bool v13; // cc
  int v14; // eax
  char v15; // al
  __int64 v16; // rcx
  __int64 result; // rax
  int v18; // ecx
  PMDL v19; // rcx
  PVOID v20; // rdi
  __int64 BidirectionalData; // rax
  unsigned int v22; // eax
  unsigned int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // ecx
  PMDL MemoryDescriptorList; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-50h]
  void *v34; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+90h] [rbp+8h]
  unsigned int Size; // [rsp+A0h] [rbp+18h]
  unsigned int *Src; // [rsp+A8h] [rbp+20h]

  v34 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v33 = 0LL;
  v9 = a1[21];
  if ( a3 )
  {
    BidirectionalData = RaidSrbExGetBidirectionalData(a1[21]);
    v10 = a1[19];
    v4 = BidirectionalData;
    v11 = (struct _MDL *)a1[17];
    v33 = BidirectionalData;
  }
  else
  {
    v10 = a1[14];
    v11 = (struct _MDL *)a1[13];
  }
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v12 = *(unsigned __int8 *)(v9 + 2);
    v5 = *(_BYTE *)(v9 + 72);
    v6 = *(_BYTE *)(v9 + 4);
    Src = *(unsigned int **)(v9 + 24);
    Size = *(_DWORD *)(v9 + 16);
    v35 = *(_DWORD *)(v9 + 12);
    goto LABEL_5;
  }
  v12 = *(_DWORD *)(v9 + 20);
  v35 = *(_DWORD *)(v9 + 24);
  if ( v4 && a3 )
  {
    v22 = *(_DWORD *)(v4 + 8);
    Src = *(unsigned int **)(v4 + 16);
  }
  else
  {
    Src = *(unsigned int **)(v9 + 64);
    v22 = *(_DWORD *)(v9 + 60);
  }
  Size = v22;
  if ( v12 )
  {
    v13 = v12 <= 0x17;
    if ( v12 != 23 )
    {
LABEL_6:
      if ( !v13 )
        goto LABEL_8;
      v14 = 8389124;
      if ( !_bittest(&v14, v12) )
        goto LABEL_8;
      goto LABEL_9;
    }
  }
  v23 = *(_DWORD *)(v9 + 56);
  v24 = 0LL;
  if ( !v23 )
  {
LABEL_5:
    v13 = v12 <= 0x17;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v25 = *(unsigned int *)(v9 + 4 * v24 + 120);
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_49;
    v26 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v25 > (unsigned int)v26 )
      goto LABEL_49;
    v27 = (unsigned int)v25;
    v28 = *(_DWORD *)(v25 + v9) - 64;
    if ( !v28 )
      break;
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 == 30 && v12 == 23 && v27 + 24 <= v26 )
        {
          v6 = *(_BYTE *)(v27 + v9 + 8);
          goto LABEL_9;
        }
      }
      else if ( !v12 && v27 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v27 + v9 + 12) )
          v5 = *(_BYTE *)(v27 + v9 + 32);
        goto LABEL_8;
      }
    }
    else if ( !v12 && v27 + 56 <= v26 )
    {
      goto LABEL_45;
    }
LABEL_49:
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= v23 )
      goto LABEL_5;
  }
  if ( v12 || v27 + 40 > v26 )
    goto LABEL_49;
LABEL_45:
  if ( *(_BYTE *)(v27 + v9 + 10) )
    v5 = *(_BYTE *)(v27 + v9 + 24);
LABEL_8:
  v15 = *(_BYTE *)(a2 + 417);
  if ( v15 != 3 && ((unsigned __int8)(v15 - 1) > 1u || !v12 && ((v5 - 8) & 0x5D) == 0) )
    return 0LL;
LABEL_9:
  if ( !v10 )
    return 0LL;
  v16 = *(_QWORD *)(a2 + 728);
  MemoryDescriptorList = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(v16 + 8) + 120LL))(
             v16,
             v10,
             v11,
             &MemoryDescriptorList);
  v18 = result;
  if ( (int)result < 0 )
  {
    v20 = v34;
  }
  else
  {
    v19 = MemoryDescriptorList;
    a1[18] = MemoryDescriptorList;
    if ( v11 == v19 )
    {
      v20 = 0LL;
      v18 = -2147483622;
    }
    else
    {
      v20 = (v19->MdlFlags & 5) != 0
          ? v19->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000020u);
      v18 = 0;
    }
    result = (unsigned int)v18;
  }
  if ( v18 == -2147483622 )
    return 0LL;
  if ( v18 >= 0 )
  {
    if ( !v20 )
      return 3221225626LL;
    if ( (v35 & 0x80u) == 0 || a3 )
    {
      v31 = Size;
      if ( v12 == 23 && v6 == 9 && *Src )
        v31 = *Src;
      memmove(v20, Src, v31);
    }
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( a3 )
        *(_QWORD *)(v33 + 16) = v20;
      else
        *(_QWORD *)(v9 + 64) = v20;
    }
    else
    {
      *(_QWORD *)(v9 + 24) = v20;
    }
    return 0LL;
  }
  return result;
}
