__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // ebp
  char v11; // r8
  int v12; // r10d
  int v13; // r9d
  int v14; // r12d
  int v15; // r11d
  char v16; // r14
  char v17; // cl
  char v18; // si
  unsigned __int8 v19; // r13
  char v20; // r14
  char v21; // al
  int v22; // ecx
  int v23; // r15d
  int v24; // r15d
  unsigned int v25; // ecx
  char *PoolWithTag; // rax
  char v27; // r9
  char *v28; // r8
  __int64 v29; // rdx
  char v30; // r8
  unsigned __int32 v31; // edx
  __int128 v33; // xmm0
  unsigned __int8 v34; // dl
  int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+24h] [rbp-54h]
  char v37; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v39 = 16;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v13 = 16;
    v11 |= 0x20u;
  }
  else
  {
    v13 = 0;
  }
  v14 = 32;
  v35 = v13;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v15 = 0;
  }
  else
  {
    v15 = 32;
    v11 |= 8u;
  }
  v16 = *(_BYTE *)(a3 + 66);
  v36 = v15;
  v17 = v11 | 4;
  v18 = v16 & 0x10;
  if ( (v16 & 0x10) == 0 )
    v17 = v11;
  if ( *a4 )
  {
    if ( (v16 & 2) != 0 )
      return 3221225523LL;
    v17 |= 2u;
  }
  else
  {
    v14 = 0;
  }
  v19 = (v16 >> 7) & 0x30;
  v20 = v16 & 0x20;
  v21 = v17 | 1;
  if ( !v20 )
    v21 = v17;
  v37 = v21;
  if ( !a7 )
  {
    v37 = v21;
LABEL_47:
    v22 = 0;
    v39 = 0;
    goto LABEL_16;
  }
  if ( !*a7 && !a7[1] )
    goto LABEL_47;
  v22 = 48;
  v37 = v21 | 0x40;
LABEL_16:
  v23 = 80;
  if ( !v20 )
    v23 = 48;
  v24 = v39 + v14 + v15 + v13 + v12 + (v18 != 0 ? 0x10 : 0) + v23;
  v25 = v24 + v19 + v22;
  if ( v25 + a5 < v25 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)(*(_DWORD *)(a3 + 100) | 0x400),
                          v25 + a5,
                          *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  v27 = v37;
  if ( v19 )
  {
    v34 = -(char)(v24 + (_BYTE)PoolWithTag) & 0x3F;
    if ( v34 )
    {
      PoolWithTag += v34;
      v27 = v37 | 0x80;
      *((_DWORD *)PoolWithTag - 1) = v34;
    }
  }
  if ( v39 )
  {
    v28 = &PoolWithTag[v24 + a5];
    *(_QWORD *)PoolWithTag = v28;
    *(_OWORD *)v28 = 0LL;
    *((_OWORD *)v28 + 1) = 0LL;
    *((_OWORD *)v28 + 2) = 0LL;
    v29 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v29 + 24) = *a7;
  }
  if ( v35 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v36 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v18 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v14 )
  {
    v33 = *(_OWORD *)a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v33;
    PoolWithTag += 32;
  }
  if ( v20 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[26] = v27;
  v30 = 1;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = 1;
  if ( v18 )
  {
    PoolWithTag[27] = 65;
    v30 = 65;
  }
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v30 |= 2u;
    PoolWithTag[27] = v30;
    if ( (*a1 & 0x10000) != 0 )
    {
      v30 |= 4u;
      PoolWithTag[27] = v30;
    }
  }
  if ( (*a1 & 0x10) != 0 )
  {
    v30 |= 0x10u;
    PoolWithTag[27] = v30;
  }
  if ( (*a1 & 0x20) != 0 )
    PoolWithTag[27] = v30 | 8;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v31 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v31 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v31;
  *a6 = PoolWithTag;
  return 0LL;
}
