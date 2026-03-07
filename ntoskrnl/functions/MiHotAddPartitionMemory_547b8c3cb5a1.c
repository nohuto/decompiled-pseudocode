__int64 __fastcall MiHotAddPartitionMemory(__int64 a1, unsigned __int64 *a2, int *a3)
{
  int *v4; // r13
  __int64 v5; // r15
  __int64 v6; // r9
  int updated; // ebx
  int v9; // ecx
  int v10; // edx
  __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  __int16 *v14; // rdi
  unsigned int v15; // ebx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // eax
  int v20; // esi
  int v21; // esi
  int v22; // r12d
  int v23; // r12d
  unsigned __int64 *i; // rdi
  unsigned __int64 *v25; // rax
  int v26; // r13d
  int v27; // r15d
  unsigned __int64 **v28; // rax
  unsigned __int64 *v29; // r14
  unsigned __int64 *v30; // rcx
  unsigned __int64 *v31; // rcx
  int v32; // eax
  int v33; // [rsp+38h] [rbp-69h]
  unsigned __int64 *v34; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-59h]
  int v36; // [rsp+4Ch] [rbp-55h]
  __int128 v37; // [rsp+50h] [rbp-51h] BYREF
  __int128 v38; // [rsp+60h] [rbp-41h]
  __int16 *v39[16]; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+120h] [rbp+7Fh]

  v4 = a3;
  v5 = a1;
  v37 = 0LL;
  v38 = 0LL;
  memset(v39, 0, 0x48uLL);
  v34 = 0LL;
  v42 = 14;
  if ( (unsigned __int16 *)v5 == MiSystemPartition && (*v4 & 4) == 0
    || (v9 = *v4, (*v4 & 8) != 0) && (unsigned __int16 *)v5 == MiSystemPartition
    || (v10 = *v4 & 4, (v9 & 4) != 0) && !(unsigned int)MiHugePagesSupported() )
  {
    updated = -1073741637;
LABEL_4:
    MiFreePartitionTree((__int16 *)v5, (unsigned __int64 *)&v34, 0, 0);
    return (unsigned int)updated;
  }
  v11 = 0LL;
  if ( (v9 & 0x60) != 0 )
  {
    if ( v10 )
    {
LABEL_12:
      updated = -1073741811;
      goto LABEL_4;
    }
    if ( (v9 & 0x20) != 0 )
    {
      if ( (v9 & 0x40) != 0 )
        goto LABEL_12;
      v11 = 512LL;
    }
    else
    {
      v11 = 0x40000LL;
    }
  }
  *((_QWORD *)v4 + 1) = 0LL;
  v12 = (unsigned int)v4[1];
  v35 = v4[1];
  if ( (v9 & 1) != 0 )
  {
    v33 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(v5 + 4) & 0x20) != 0 || v10 )
    {
      updated = -1073741584;
      goto LABEL_4;
    }
    v33 = 0;
  }
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( (_DWORD)v12 )
  {
    do
    {
      v16 = *a2;
      if ( *a2 < v13 )
        goto LABEL_12;
      v17 = a2[1];
      v13 = v17 + v16;
      if ( v17 + v16 <= v16 || (__int16 *)((char *)v14 + v17) <= v14 )
        goto LABEL_12;
      if ( (*v4 & 4) != 0 )
      {
        v18 = v16 | v17;
        if ( ((v16 | v17) & 0x3FFFF) != 0 )
          goto LABEL_12;
      }
      else
      {
        v18 = v17 | v16;
      }
      if ( v11 && ((v11 - 1) & v18) != 0 )
        goto LABEL_12;
      v14 = (__int16 *)((char *)v14 + v17);
      if ( !(unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v34, v16, v17, 0) )
      {
        updated = -1073741670;
        goto LABEL_4;
      }
      ++v15;
      a2 += 2;
    }
    while ( v15 < v35 );
  }
  v19 = *v4;
  if ( (*v4 & 4) != 0 )
  {
    BYTE2(v39[2]) = 1;
    HIDWORD(v39[2]) = (v19 & 2 | 4u) >> 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(v5, &v34, v12, v6);
    if ( updated < 0 )
      goto LABEL_4;
  }
  updated = 0;
  v20 = DWORD2(v38);
  if ( (*(_DWORD *)(v5 + 4) & 0x20) != 0 )
  {
    BYTE1(v39[2]) = 1;
    v20 = DWORD2(v38) | 8;
  }
  if ( v33 )
  {
    v22 = *v4;
    v35 = 16 * (*v4 & 8);
    v23 = v22 & 2;
    if ( !v23 )
      v20 |= 0x100u;
    v39[0] = (__int16 *)v5;
    v39[7] = (__int16 *)v11;
    v21 = v20 | 0x200;
    v36 = v21;
    v42 = 12 - (v23 != 0);
    i = 0LL;
    v25 = v34;
    DWORD2(v38) = v21;
    while ( v25 )
    {
      i = v25;
      v25 = (unsigned __int64 *)*v25;
    }
    if ( i )
    {
      v26 = v35;
      v27 = 0;
      do
      {
        v28 = (unsigned __int64 **)i[1];
        v29 = i;
        v30 = i;
        if ( v28 )
        {
          v31 = *v28;
          for ( i = (unsigned __int64 *)i[1]; v31; v31 = (unsigned __int64 *)*v31 )
            i = v31;
        }
        else
        {
          while ( 1 )
          {
            i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (unsigned __int64 *)*i == v30 )
              break;
            v30 = i;
          }
        }
        if ( !v27 )
        {
          MiActOnPartitionNodePages((__int64)v29, v42, v26, v39);
          if ( SLODWORD(v39[3]) < 0 )
          {
            updated = (int)v39[3];
            if ( v23 && RtlAreBitsClearEx(v29 + 4, 0LL, v29[4]) )
              i = v29;
            v27 = 1;
          }
          if ( v23 )
            continue;
        }
        RtlAvlRemoveNode((unsigned __int64 *)&v34, v29);
        MiDeletePartitionPageNode((PVOID *)v29);
      }
      while ( i );
      v21 = v36;
      v5 = a1;
      v4 = a3;
    }
    v14 = v39[6];
    if ( !v39[6] )
      goto LABEL_4;
    IoUpdateDumpPhysicalRanges();
  }
  else
  {
    v21 = v20 | 2;
    DWORD2(v38) = v21;
  }
  v32 = *v4;
  if ( (*v4 & 2) == 0 )
    DWORD2(v38) = v21 | 1;
  *(_QWORD *)&v37 = &v34;
  if ( (v32 & 4) != 0 )
  {
    MiFreePartitionTree((__int16 *)v5, (unsigned __int64 *)&v34, 0, 0);
  }
  else if ( v42 != 12 )
  {
    MiInsertPartitionPages((__int16 *)MiSystemPartition, v5, (__int64)&v37, (__int64)v14, 0LL);
  }
  *((_QWORD *)v4 + 1) = v14;
  return (unsigned int)updated;
}
