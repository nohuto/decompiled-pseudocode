char PfpFlushBuffers()
{
  struct _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r13
  int v3; // ebp
  PSLIST_ENTRY v4; // rax
  struct _SLIST_ENTRY *v5; // rcx
  struct _SLIST_ENTRY *v6; // r12
  struct _SLIST_ENTRY *v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  _SLIST_ENTRY *Next; // r14
  struct _SLIST_ENTRY *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  struct _SLIST_ENTRY *v16; // rcx
  _SLIST_ENTRY *v17; // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rax
  int v22[4]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v23; // [rsp+40h] [rbp-78h] BYREF
  __int128 v24; // [rsp+50h] [rbp-68h] BYREF
  __int128 v25; // [rsp+60h] [rbp-58h] BYREF
  __int64 Src; // [rsp+70h] [rbp-48h] BYREF
  int v27; // [rsp+78h] [rbp-40h]
  __int64 v28; // [rsp+7Ch] [rbp-3Ch]
  int v29; // [rsp+84h] [rbp-34h]

  v0 = 0LL;
  v23 = 0LL;
  DWORD2(v23) = 1;
  v1 = 0LL;
  v25 = 0LL;
  v2 = 0LL;
  v24 = 0LL;
  v22[0] = PfpFlushEventBuffers();
  v3 = v22[0];
  if ( v22[0] < 0 )
    return 0;
  v4 = RtlpInterlockedFlushSList(&stru_140D0BE80);
  if ( !v4 )
    return 1;
  do
  {
    v5 = v4;
    v6 = v0;
    v4 = v4->Next;
    v5->Next = v0;
    v0 = v5;
  }
  while ( v4 );
  while ( 1 )
  {
    v7 = v0;
    v28 = 0LL;
    v0 = v6;
    v8 = MEMORY[0xFFFFF78000000004] * HIDWORD(*((_QWORD *)&v7[1].Next + 1));
    v9 = (MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*((_QWORD *)&v7[1].Next + 1)) >> 24;
    HIDWORD(v28) = dword_140C64C2C
                 + ((((MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v7[1].Next >> 32)) << 8)
                   + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v7[1].Next) >> 24)) >> 10);
    v27 = HIDWORD(v28);
    v29 = dword_140C64C2C + (((v8 << 8) + v9) >> 10);
    Src = 163851LL;
    PfpCopyEvent(&Src);
    if ( *((int *)&v7->Next + 2) > 1 )
      break;
    *((_QWORD *)&v24 + 1) = *((unsigned int *)&v7->Next + 3);
    *(_QWORD *)&v24 = 94215LL;
    PfpCopyEvent((__int64 *)&v24);
    if ( *((int *)&v7->Next + 2) > 1 )
      break;
    v10 = *((_QWORD *)&v7[3].Next + 1);
    Next = v7[3].Next;
    if ( v10 == 1 )
    {
      LODWORD(v10) = LODWORD(v7[4].Next) + 1;
    }
    else if ( v10 && (!*(_QWORD *)(v10 + 1088) || !*(_QWORD *)(v10 + 1128)) )
    {
      v3 = v22[0];
      goto LABEL_16;
    }
    v2 = &v7[4].Next + 1;
    v12 = v7 + 2;
    v1 = (struct _SLIST_ENTRY *)((char *)v7 + 72);
    if ( (_SLIST_ENTRY *)(&v7[4].Next + 1) < v7[2].Next )
    {
      while ( PfpLogPageAccess(v10, (_DWORD)v1, (unsigned int)&v23, (_DWORD)Next, 0) )
      {
        v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
        if ( v1 >= v12->Next )
          goto LABEL_13;
      }
      v3 = -1073741432;
      goto LABEL_19;
    }
LABEL_13:
    v3 = v22[0];
LABEL_14:
    if ( v3 < 0 )
      goto LABEL_19;
LABEL_15:
    v13 = (unsigned int)*((_QWORD *)&v7[1].Next + 1);
    v14 = HIDWORD(*((_QWORD *)&v7[1].Next + 1));
    *(_QWORD *)&v25 = 147463LL;
    *((_QWORD *)&v25 + 1) = dword_140C64C2C
                          + (unsigned int)((((MEMORY[0xFFFFF78000000004] * v14) << 8)
                                          + (((unsigned __int64)MEMORY[0xFFFFF78000000004] * v13) >> 24)) >> 10);
    PfpCopyEvent((__int64 *)&v25);
LABEL_16:
    MmFreeAccessPfnBuffer(v7, 0);
    if ( !v6 )
      goto LABEL_22;
    v6 = v6->Next;
  }
  v17 = v7[2].Next;
  v12 = v7 + 2;
  if ( (unsigned __int64)v17 > *((_QWORD *)&v7[2].Next + 1) )
    goto LABEL_14;
  while ( 1 )
  {
    v18 = (unsigned __int64)v17->Next;
    v22[0] = 0;
    v19 = PfTAcquireLogEntry(&unk_140C64DD8, v22, 1LL);
    if ( !v19 )
      break;
    v20 = (unsigned __int64 *)(16LL * (unsigned int)v22[0] + ((v19 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
    v21 = *v20 & 0xFFFFFFFFFFFC6007uLL;
    v20[1] = v18;
    v3 = 0;
    *v20 = v21 | 0x6007;
    v22[0] = 0;
    v17 = (_SLIST_ENTRY *)((char *)v17 + 8);
    if ( (unsigned __int64)v17 > *((_QWORD *)&v7[2].Next + 1) )
      goto LABEL_15;
  }
  v3 = -1073741670;
  v12->Next = v17;
LABEL_19:
  if ( *((int *)&v7->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v12->Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v12->Next = (_SLIST_ENTRY *)((char *)v12->Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  PfpReturnAccessBuffer(v7);
LABEL_22:
  if ( v3 >= 0 )
    return 1;
  if ( v6 )
  {
    do
    {
      v16 = v0;
      v0 = v0->Next;
      PfpReturnAccessBuffer(v16);
    }
    while ( v0 );
  }
  return 0;
}
