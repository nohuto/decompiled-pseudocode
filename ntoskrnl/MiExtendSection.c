__int64 MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int128 *v6; // rbp
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdx
  char v10; // al
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned __int64 v13; // r14
  __int128 v14; // xmm1
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  int v18; // r13d
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // rbx
  unsigned int v24; // edi
  _QWORD *Pool; // rax
  _QWORD *v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rbp
  __int16 v33; // cx
  int appended; // eax
  __int16 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v38; // rbx
  _QWORD *v39; // rdi
  unsigned __int64 v40; // r14
  unsigned int v41; // eax
  PVOID v42; // r12
  __int64 v43; // r8
  __int64 v44; // rbp
  unsigned __int64 v45; // r14
  int SubsectionCharges; // edi
  __int64 ControlAreaPartition; // rax
  __int64 v48; // r8
  __int64 v49; // rbp
  __int64 v50; // [rsp+20h] [rbp-108h]
  unsigned __int64 v51; // [rsp+28h] [rbp-100h]
  __int64 v52; // [rsp+30h] [rbp-F8h]
  __int128 v53; // [rsp+40h] [rbp-E8h] BYREF
  __int128 Privileges; // [rsp+50h] [rbp-D8h]
  __int128 v55; // [rsp+60h] [rbp-C8h]
  __int128 v56; // [rsp+70h] [rbp-B8h]
  __int128 v57; // [rsp+80h] [rbp-A8h]
  __int128 v58; // [rsp+90h] [rbp-98h]
  __int128 v59; // [rsp+A0h] [rbp-88h]
  __int128 v60; // [rsp+B0h] [rbp-78h]
  __int128 v61; // [rsp+C0h] [rbp-68h]
  __int64 v62; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v63; // [rsp+130h] [rbp+8h]
  __int64 v67; // [rsp+148h] [rbp+20h]
  __int64 *v68; // [rsp+150h] [rbp+28h] BYREF
  va_list va; // [rsp+150h] [rbp+28h]
  va_list va1; // [rsp+158h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v68 = va_arg(va1, __int64 *);
  v4 = 8 * a4;
  v6 = &v53;
  v50 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  v8 = a3;
  *v68 = 0LL;
  v9 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v52 = *(_QWORD *)v5;
  v10 = *(_BYTE *)(v5 + 62);
  v11 = *(_OWORD *)(a1 + 16);
  v63 = v9;
  v53 = *(_OWORD *)a1;
  v12 = *(_OWORD *)(a1 + 32);
  Privileges = v11;
  v13 = 0LL;
  v14 = *(_OWORD *)(a1 + 48);
  v15 = (-(__int64)((v10 & 0xC) != 0) & 0x100000) + 0x100000;
  v16 = *(_QWORD *)(a1 + 144);
  v55 = v12;
  v17 = 0LL;
  v18 = 0;
  v51 = v15;
  v19 = *(_OWORD *)(a1 + 64);
  v56 = v14;
  v20 = *(_OWORD *)(a1 + 80);
  v57 = v19;
  v21 = *(_OWORD *)(a1 + 96);
  v58 = v20;
  v22 = *(_OWORD *)(a1 + 128);
  v59 = v21;
  v60 = *(_OWORD *)(a1 + 112);
  v61 = v22;
  v62 = v16;
  if ( v8 )
    DWORD1(v56) ^= (DWORD1(v56) ^ (DWORD1(v56) - v8)) & 0x3FFFFFFF;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v9 - v13 > v15 )
      v24 = v15;
    else
      v24 = v9 - v13;
    Pool = MiAllocatePool(64, 0x98uLL, 0x64536D4Du);
    v26 = Pool;
    if ( !Pool )
    {
      v38 = Privileges;
LABEL_48:
      SubsectionCharges = -1073741670;
      goto LABEL_49;
    }
    v27 = v24 >> 3;
    Pool[11] = Pool + 10;
    Pool[10] = Pool + 10;
    *((_QWORD *)v6 + 2) = Pool;
    *Pool = v50;
    *((_DWORD *)Pool + 11) = v24 >> 3;
    v13 += v24;
    if ( v13 > 8 * a4 )
      *((_DWORD *)Pool + 13) ^= (*((_DWORD *)Pool + 13) ^ ((v13 >> 3) - a4)) & 0x3FFFFFFF;
    v28 = v52;
    *((_WORD *)Pool + 16) = Pool[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v52 + 14) >> 1) & 0x1F));
    if ( v6 == &v53 )
    {
      v29 = *((_DWORD *)v6 + 11);
      v30 = *((unsigned __int16 *)v6 + 16);
      *((_WORD *)v6 + 17) &= 0xFu;
      *((_DWORD *)v6 + 10) = v29;
      v23 = *((unsigned int *)v6 + 9) | ((v30 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v31 = *((unsigned int *)v6 + 10);
    v32 = v63;
    v23 += v31;
    v33 = v26[4] & 0x3F | (WORD2(v23) << 6);
    *((_DWORD *)v26 + 9) = v23;
    *((_WORD *)v26 + 16) = v33;
    if ( v13 >= v63 )
      break;
    *((_DWORD *)v26 + 10) = v27;
    v6 = (__int128 *)v26;
    v9 = v63;
    v15 = v51;
  }
  *((_DWORD *)v26 + 10) = (*a2 >> 12) - v23;
  *((_WORD *)v26 + 17) = *((_WORD *)v26 + 17) & 0xF | (16 * *(_WORD *)a2);
  if ( v8 && (*(_BYTE *)(v50 + 62) & 0xC) != 0 && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *v68 = a1;
  }
  appended = MiAppendSubsectionChain(a1, (__int64)&v53, 0);
  if ( !appended )
  {
LABEL_14:
    v35 = *(_WORD *)(v28 + 12);
    v36 = (*(unsigned int *)(v28 + 8) | ((unsigned __int64)(v35 & 0x3FF) << 32)) + a4 + v8;
    *(_DWORD *)(v28 + 8) += a4 + v8;
    *(_WORD *)(v28 + 12) = v35 ^ (v35 ^ WORD2(v36)) & 0x3FF;
    return 0LL;
  }
  v38 = Privileges;
LABEL_16:
  if ( (appended & 1) != 0 )
  {
    v18 |= 1u;
    v39 = (_QWORD *)v38;
    v40 = 0LL;
    while ( 1 )
    {
      v41 = v32 - v40;
      if ( v32 - v40 > v51 )
        v41 = v51;
      v40 += v41;
      v42 = MiAllocatePool(274, v41, 0x74536D4Du);
      if ( !v42 )
        goto LABEL_48;
      MiInitializePrototypePtes((ULONG_PTR)v42);
      if ( (*(_BYTE *)(v50 + 62) & 0xC) != 0 )
      {
        if ( !*v68 )
          *v68 = (__int64)v39;
      }
      else if ( (v18 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount(v39, 0LL, v43);
      }
      MiSetSubsectionBase(v39, (__int64)v42, 0xFFFFFFFF, 0LL);
      MiUpdateSystemProtoPtesTree(v39 + 15, 1);
      v32 = v63;
      v39 = (_QWORD *)v39[2];
      if ( v40 >= v63 )
      {
        v8 = a3;
        goto LABEL_26;
      }
    }
  }
  v18 |= 2u;
  v44 = v38;
  while ( 1 )
  {
    v45 = *(_DWORD *)(v44 + 44) - (*(_DWORD *)(v44 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v44, v45);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v44, 56LL) <= 1 )
    {
      v17 += v45;
      break;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
      MiUpdateSubsectionCrossPartitionRefs((_DWORD *)v44, *(_DWORD *)(a1 + 48) & 0x3FFFFFFF);
    v44 = *(_QWORD *)(v44 + 16);
    if ( !v44 )
    {
      if ( v8 )
      {
        SubsectionCharges = MiGetSubsectionCharges(a1, v8);
        if ( SubsectionCharges < 0 )
          break;
        v17 += v8;
      }
      v32 = v63;
LABEL_26:
      appended = MiAppendSubsectionChain(a1, (__int64)&v53, v18);
      if ( !appended )
      {
        v28 = v52;
        goto LABEL_14;
      }
      goto LABEL_16;
    }
  }
LABEL_49:
  ControlAreaPartition = MiGetControlAreaPartition(v50);
  v67 = ControlAreaPartition;
  if ( v17 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1, v17);
    v17 = 0LL;
  }
  if ( v38 )
  {
    do
    {
      v49 = *(_QWORD *)(v38 + 16);
      if ( (*(_BYTE *)(v50 + 62) & 0xC) != 0 )
      {
        if ( *(_QWORD *)(v38 + 8) )
        {
          v68 = 0LL;
          MiDeleteSubsectionPages((_QWORD *)v38, (__int64 **)va);
        }
      }
      else
      {
        if ( (v18 & 2) != 0 && (*(_DWORD *)(v38 + 48) & 0x3FFFFFFF) != 0 )
          v17 += MiDecrementSubsectionViewCount((_QWORD *)v38, 24LL, v48);
        if ( *(_QWORD *)(v38 + 8) )
        {
          MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v38 + 120), 0);
          ExFreePoolWithTag(*(PVOID *)(v38 + 8), 0);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v38);
      v38 = v49;
    }
    while ( v49 );
    if ( v17 )
      MiReturnCrossPartitionSectionCharges(v67, 1, v17);
  }
  return (unsigned int)SubsectionCharges;
}
