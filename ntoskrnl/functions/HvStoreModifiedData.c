__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  bool v3; // zf
  void *v5; // rsi
  PVOID *v6; // r14
  unsigned int v7; // r12d
  unsigned int *v8; // r15
  PVOID *v9; // r13
  size_t v10; // rax
  size_t v11; // rdi
  void *Pool2; // rax
  int v13; // eax
  unsigned int SizeOfBitMap; // edi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  void *v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm1
  unsigned int *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // kr00_8
  unsigned int v30; // eax
  PVOID v31; // rax
  int v32; // eax
  PVOID *v33; // rdi
  __int64 v34; // rsi
  PVOID *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // [rsp+40h] [rbp-49h] BYREF
  int v38; // [rsp+48h] [rbp-41h]
  int v39; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v40; // [rsp+50h] [rbp-39h]
  PVOID P; // [rsp+58h] [rbp-31h] BYREF
  PVOID v42; // [rsp+60h] [rbp-29h]
  int v43; // [rsp+68h] [rbp-21h]
  RTL_BITMAP BitMapHeader; // [rsp+70h] [rbp-19h] BYREF
  __int64 v45; // [rsp+80h] [rbp-9h]
  size_t v46; // [rsp+88h] [rbp-1h]
  __int128 v47; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+67h]
  unsigned int v51; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  v45 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0;
  v51 = 0;
  v8 = 0LL;
  v39 = 0;
  v9 = 0LL;
  v48 = 0;
  v42 = 0LL;
  v47 = 0LL;
  BitMapHeader = 0LL;
  if ( !v3 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 1728) = (unsigned __int8)HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
    return 1;
  v10 = *(unsigned int *)(BugCheckParameter2 + 108);
  v11 = (unsigned int)v10;
  v40 = *(_DWORD *)(BugCheckParameter2 + 108);
  v46 = v10;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v10, 808799555LL);
    v5 = Pool2;
    if ( !Pool2 )
      return 2;
    memmove(Pool2, *(const void **)(BugCheckParameter2 + 96), (unsigned int)v11);
    v38 = *(_DWORD *)(BugCheckParameter2 + 88);
    LODWORD(v47) = v38;
    *((_QWORD *)&v47 + 1) = v5;
    v13 = HvpGenerateLogEntry(BugCheckParameter2, &P, &v51, &v39);
    v6 = (PVOID *)P;
    v7 = v51;
    if ( v13 < 0 )
    {
      v18 = 2;
      goto LABEL_49;
    }
  }
  else
  {
    v38 = v47;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v20 = (void *)ExAllocatePool2(256LL, 4096LL, 808799555LL);
  v42 = v20;
  if ( !v20 )
  {
LABEL_50:
    v18 = 2;
    goto LABEL_16;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 280);
  v21 = v20;
  v22 = *(_OWORD **)(BugCheckParameter2 + 64);
  v23 = 4LL;
  do
  {
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    v21[6] = v22[6];
    v21 += 8;
    v24 = v22[7];
    v22 += 8;
    *(v21 - 1) = v24;
    --v23;
  }
  while ( v23 );
  if ( a3 )
  {
    v25 = (unsigned int *)ExAllocatePool2(256LL, v11, 808799555LL);
    v8 = v25;
    if ( v25 )
    {
      memmove(v25, *(const void **)(BugCheckParameter2 + 120), v11);
      LODWORD(P) = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)P;
      BitMapHeader.Buffer = v8;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v47);
      v48 = HvpCountSetRangesInVector(&BitMapHeader);
      v26 = ExAllocatePool2(256LL, 24LL * v48, 842353987LL);
      v9 = (PVOID *)v26;
      if ( v26 )
      {
        v51 = 0;
        v43 = 0;
        if ( v48 )
        {
          v27 = v26 + 8;
          do
          {
            if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v37 + 4, (__int64)&v37, 1) )
              break;
            v28 = v45;
            if ( !v45 )
              goto LABEL_50;
            v29 = v37;
            *(_DWORD *)(v27 + 8) = HIDWORD(v37);
            *(_DWORD *)(v27 - 8) = v29;
            v30 = v51 + 1;
            *(_QWORD *)v27 = v28;
            v27 += 24LL;
            LODWORD(v37) = HIDWORD(v29) + v29;
            v51 = v30;
          }
          while ( v30 < v48 );
          v11 = v46;
        }
        memmove(v8, *(const void **)(BugCheckParameter2 + 120), v11);
        SizeOfBitMap = (unsigned int)P;
        goto LABEL_9;
      }
    }
    goto LABEL_50;
  }
LABEL_8:
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
  v15 = *(_DWORD *)(BugCheckParameter2 + 280);
  if ( *(_DWORD *)(BugCheckParameter2 + 1792) < v15 || *(_DWORD *)(BugCheckParameter2 + 1728) )
    *(_DWORD *)(BugCheckParameter2 + 1792) = v15;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    *(_DWORD *)(BugCheckParameter2 + 1688) = v38;
    v16 = v40;
    *(_QWORD *)(BugCheckParameter2 + 1696) = v5;
    v5 = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1704) = v16;
    v17 = v39;
    *(_QWORD *)(BugCheckParameter2 + 1712) = v6;
    v6 = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1724) = v17;
    *(_DWORD *)(BugCheckParameter2 + 1720) = v7;
    HvResetDirtyData(BugCheckParameter2);
  }
  if ( a2 || a3 )
  {
    v31 = v42;
    v42 = 0LL;
    v3 = *(_BYTE *)(BugCheckParameter2 + 195) == 0;
    *(_QWORD *)(BugCheckParameter2 + 1776) = v31;
    if ( !v3 )
      *(_BYTE *)(BugCheckParameter2 + 1732) = 1;
    if ( a3 )
    {
      v32 = v40;
      *(_QWORD *)(BugCheckParameter2 + 1744) = v8;
      v8 = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1736) = SizeOfBitMap;
      *(_QWORD *)(BugCheckParameter2 + 1760) = v9;
      v9 = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1752) = v32;
      *(_DWORD *)(BugCheckParameter2 + 1768) = v48;
      if ( *(_QWORD *)(BugCheckParameter2 + 120) )
      {
        RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
        *(_DWORD *)(BugCheckParameter2 + 128) = 0;
        *(_BYTE *)(BugCheckParameter2 + 195) = 0;
      }
    }
  }
  v18 = 0;
LABEL_16:
  if ( v5 )
LABEL_49:
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
  {
    if ( v7 )
    {
      v33 = v6 + 1;
      v34 = v7;
      do
      {
        if ( *v33 )
        {
          ExFreePoolWithTag(*v33, 0);
          *v33 = 0LL;
        }
        v33 += 3;
        --v34;
      }
      while ( v34 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
  {
    if ( v48 )
    {
      v35 = v9 + 1;
      v36 = v48;
      do
      {
        if ( *v35 )
          ExFreePoolWithTag(*v35, 0);
        v35 += 3;
        --v36;
      }
      while ( v36 );
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  return v18;
}
