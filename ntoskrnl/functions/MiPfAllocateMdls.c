__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, _SLIST_ENTRY *a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // r11
  __int64 v7; // rcx
  _QWORD *v8; // r14
  _SLIST_ENTRY *v9; // r9
  unsigned __int64 v10; // r12
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // rdi
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r15
  PSLIST_ENTRY v22; // rax
  PSLIST_ENTRY v23; // rsi
  _SLIST_ENTRY *v24; // r10
  SIZE_T v25; // r8
  __int64 v26; // rsi
  __int64 *v27; // rdi
  unsigned int v28; // r12d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  PSLIST_ENTRY *v31; // rcx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v33; // rax
  ULONG v34; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // [rsp+20h] [rbp-A8h]
  __int64 v40; // [rsp+28h] [rbp-A0h]
  _QWORD *v41; // [rsp+30h] [rbp-98h]
  _QWORD *v42; // [rsp+38h] [rbp-90h]
  unsigned int v43; // [rsp+40h] [rbp-88h]
  unsigned int v44; // [rsp+44h] [rbp-84h]
  __int64 *v45; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *v46; // [rsp+50h] [rbp-78h]
  PMDL Mdl; // [rsp+58h] [rbp-70h]
  __int64 v48; // [rsp+60h] [rbp-68h]
  PSLIST_ENTRY v49; // [rsp+68h] [rbp-60h]
  unsigned __int64 v50; // [rsp+70h] [rbp-58h]
  unsigned __int64 v51; // [rsp+78h] [rbp-50h]

  v43 = *(_DWORD *)(a1 + 80);
  v5 = *(_DWORD *)(a1 + 84);
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0LL;
  v39 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v11 = *(_QWORD **)(a1 + 96);
  v12 = a1 + 8 * (*(unsigned int *)(a1 + 92) + 17LL);
  v44 = v5;
  v48 = v7;
  v50 = v12;
  v41 = v11;
  if ( (unsigned __int64)v11 >= v12 )
    return 0;
  v13 = v7 + 128;
  v14 = v11 + 1;
  if ( *(_QWORD *)(a1 + 16) )
    v13 = *(_QWORD *)(a1 + 16);
  v42 = v11 + 1;
  v40 = v13;
  v15 = 0;
  while ( 1 )
  {
    v16 = *v11;
    v17 = (*v11 >> 2) & 0x3FFFFFFFLL;
    if ( (*v11 & 2) != 0 )
      break;
LABEL_6:
    if ( (v16 & 1) != 0 )
    {
      if ( v17 )
      {
        v33 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v8 )
        {
          if ( (__int64)(v33 - v10) >> 3 > dword_140C692D4 )
            goto LABEL_17;
        }
        else
        {
          v9 = (_SLIST_ENTRY *)v11;
          v46 = (_SLIST_ENTRY *)v11;
        }
        v8 = v11;
        v10 = v33;
      }
      if ( v8 )
        goto LABEL_18;
    }
    else
    {
      v18 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 )
      {
        if ( (__int64)(v18 - v10) >> 3 > dword_140C692D4 )
          goto LABEL_17;
      }
      else
      {
        v9 = (_SLIST_ENTRY *)v11;
        v46 = (_SLIST_ENTRY *)v11;
      }
      v8 = v11;
      v10 = v18;
      if ( v14 == (_QWORD *)v12 )
        goto LABEL_18;
    }
LABEL_10:
    ++v11;
    ++v14;
    v41 = v11;
    v42 = v14;
    if ( (unsigned __int64)v11 >= v12 )
      return v15;
  }
  if ( !v8 )
  {
    if ( !v17 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( !v17 )
    goto LABEL_18;
LABEL_17:
  v41 = v11 - 1;
  v42 = v14 - 1;
LABEL_18:
  v51 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
  v20 = (unsigned __int64)v9->Next & 0xFFFFFFFFFFFFFFFCuLL;
  v21 = ((__int64)(v51 - v20) >> 3) + 1;
  v22 = MiGetInPageSupportBlock(0, v6);
  v49 = v22;
  v23 = v22;
  if ( !v22 )
    return (unsigned int)-1073741670;
  *((_QWORD *)&v22[15].Next + 1) = 0LL;
  MiSetInPagePriority((__int64)v22, v44, v43);
  v25 = v21 << 12;
  if ( v21 <= 0x10 )
  {
    Mdl = (PMDL)&v23[17];
    *((_WORD *)&v23[17].Next + 4) = 8 * (((__int64)(v51 - v20) >> 3) + 7);
    v23[17].Next = v24;
    *((_WORD *)&v23[17].Next + 5) = (_WORD)v24;
    v23[19].Next = v24;
    *((_DWORD *)&v23[19].Next + 3) = (_DWORD)v24;
    *((_DWORD *)&v23[19].Next + 2) = v25;
    goto LABEL_21;
  }
  Mdl = MmCreateMdl(0LL, 0LL, v25);
  if ( Mdl )
  {
LABEL_21:
    v26 = v40;
    v27 = v45;
    v28 = v39;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v26 + 8);
      if ( v20 >= v29 && v20 < v29 + 8LL * *(unsigned int *)(v26 + 44) )
        break;
      if ( (*(_BYTE *)(v26 + 34) & 2) != 0 && (*(_DWORD *)(v48 + 56) & 0x8000000) != 0 )
      {
        if ( *(_QWORD *)(v26 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v48, a2, v26);
          if ( SharedProtos )
          {
            v36 = *(_QWORD *)(SharedProtos + 72);
            if ( v20 >= v36 && v20 < v36 + 8LL * *(unsigned int *)(v26 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v48 + 56) & 0x20) != 0 )
      {
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v26);
        if ( SubsectionDriverProtos )
        {
          v37 = *(_QWORD *)(SubsectionDriverProtos + 72);
          if ( v20 >= v37 && v20 < v37 + 8LL * *(unsigned int *)(v26 + 44) )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( v27 )
        {
          if ( v28 >= *((_DWORD *)v27 + 4) )
          {
            v27 = (__int64 *)*v27;
            v28 = 1;
            v26 = v27[3];
          }
          else
          {
            v38 = v28++;
            v26 = v27[v38 + 3];
          }
        }
        else
        {
          v27 = *(__int64 **)(a1 + 24);
          v28 = 1;
          v26 = v27[3];
        }
      }
      else
      {
        v26 = *(_QWORD *)(v26 + 16);
      }
    }
    v39 = v28;
    v45 = v27;
    v40 = v26;
    v30 = MiStartingOffset((__int64 *)v26, v20, a2);
    v11 = v41;
    v14 = v42;
    v12 = v50;
    v10 = v51;
    v49[6].Next = (_SLIST_ENTRY *)v30;
    if ( (*(_BYTE *)v8 & 1) != 0 && (*(_DWORD *)(v48 + 56) & 0x20) != 0 )
    {
      v34 = MiEndingOffsetWithLock((_QWORD *)v26) - v30;
      if ( v34 <= Mdl->ByteCount )
        Mdl->ByteCount = (v34 + 511) & 0xFFFFFE00;
    }
    v9 = v46;
    v49[15].Next = v46;
    *((_QWORD *)&v49[12].Next + 1) = v8;
    v49[13].Next = (_SLIST_ENTRY *)v26;
    v49[14].Next = a3;
    if ( a3 )
      LODWORD(v49[12].Next) |= 0x8000u;
    v49[16].Next = (_SLIST_ENTRY *)Mdl;
    v31 = *(PSLIST_ENTRY **)(a1 + 128);
    if ( *v31 != (PSLIST_ENTRY)(a1 + 120) )
      __fastfail(3u);
    v6 = a4;
    v49->Next = (_SLIST_ENTRY *)(a1 + 120);
    *((_QWORD *)&v49->Next + 1) = v31;
    *v31 = v49;
    *(_QWORD *)(a1 + 128) = v49;
    ++*(_DWORD *)(a1 + 108);
    v15 = 0;
    v8 = 0LL;
    goto LABEL_10;
  }
  MiFreeInPageSupportBlock(v23);
  return (unsigned int)-1073741670;
}
