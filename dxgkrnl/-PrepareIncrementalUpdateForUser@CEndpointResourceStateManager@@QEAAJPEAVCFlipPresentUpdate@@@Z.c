__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2)
{
  CEndpointResourceStateManager *v2; // r9
  int v3; // r11d
  CEndpointResourceStateManager *v4; // rbx
  signed int v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // r10
  char v8; // al
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  signed int v12; // eax
  char *v13; // r10
  unsigned int v14; // eax
  bool v15; // cf
  char **v16; // r14
  char **v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r8d
  int v25; // eax
  CEndpointResourceStateManager **v26; // rsi
  _DWORD *v27; // r13
  _DWORD *v28; // r12
  CEndpointResourceStateManager *v29; // r8
  __int64 v30; // r14
  char v31; // cl
  __int64 v32; // rcx
  __int64 v33; // r15
  int v34; // eax
  _DWORD *v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rax
  _DWORD *v38; // rdx
  unsigned int v39; // r13d
  char *v40; // r14
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  _DWORD *v44; // rdx
  char *v45; // rsi
  __int64 v46; // r9
  _DWORD *v47; // rdi
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r14
  int v51; // eax
  _DWORD *v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rax
  char *v55; // r13
  unsigned int v56; // r12d
  char *v57; // r15
  __int64 v58; // rbx
  char *v59; // r13
  __int64 v60; // rcx
  __int64 v61; // r12
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r14
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // r15d
  char *v71; // r12
  __int64 v72; // rbx
  __int64 v73; // rcx
  _DWORD *v74; // rdx
  __int64 v75; // rax
  CEndpointResourceStateManager *v77; // [rsp+20h] [rbp-89h]
  __int64 v78; // [rsp+20h] [rbp-89h]
  __int64 v79; // [rsp+28h] [rbp-81h]
  __int64 v80; // [rsp+28h] [rbp-81h]
  _DWORD *v81; // [rsp+30h] [rbp-79h]
  PVOID P; // [rsp+40h] [rbp-69h] BYREF
  int v83; // [rsp+48h] [rbp-61h]
  __int128 v84; // [rsp+50h] [rbp-59h]
  __int128 v85; // [rsp+60h] [rbp-49h]
  __int64 v86; // [rsp+70h] [rbp-39h]
  __int64 v87; // [rsp+78h] [rbp-31h]
  __int64 v88; // [rsp+80h] [rbp-29h]
  int v89; // [rsp+88h] [rbp-21h]
  __int64 v90; // [rsp+98h] [rbp-11h]
  _QWORD *v91; // [rsp+A0h] [rbp-9h]
  char *v92; // [rsp+A8h] [rbp-1h]
  char *v93; // [rsp+B0h] [rbp+7h]
  int v96; // [rsp+120h] [rbp+77h]
  _DWORD *v97; // [rsp+128h] [rbp+7Fh]
  __int64 v98; // [rsp+128h] [rbp+7Fh]

  v2 = *this;
  v3 = 0;
  P = 0LL;
  v83 = 0;
  v4 = (CEndpointResourceStateManager *)this;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v5 = 0;
  v87 = 0LL;
  v6 = 0;
  v88 = 0LL;
  v89 = 0;
  do
  {
    if ( v2 == v4 )
      break;
    v7 = (__int64)v2 + 24;
    if ( !v2 )
      v7 = 32LL;
    v8 = *(_BYTE *)v7;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v9 = (__int64)v2 + 16;
      v10 = v3;
      if ( !v2 )
        v9 = 24LL;
      v11 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
      if ( v11 )
        v10 = *(_DWORD *)(v11 + 32);
      v12 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x18u, v10);
      v6 = HIDWORD(v87);
      v5 = v12;
      v8 = *v13;
    }
    if ( v5 >= 0 && (v8 & 2) != 0 )
    {
      v14 = v6 + 16;
      v15 = v6 + 16 < v6;
      v6 = -1;
      if ( !v15 )
        v6 = v14;
      v5 = v15 ? 0xC0000095 : 0;
      HIDWORD(v87) = v6;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v5 >= 0 );
  v16 = (char **)((char *)v4 + 16);
  v17 = (char **)*((_QWORD *)v4 + 2);
  v93 = (char *)v4 + 16;
  if ( v5 >= 0 )
  {
    while ( v17 != v16 )
    {
      v18 = (__int64)(v17 + 3);
      if ( !v17 )
        v18 = 32LL;
      if ( (*(_BYTE *)v18 & 1) != 0 )
      {
        v19 = (__int64)(v17 + 2);
        v20 = v3;
        if ( !v17 )
          v19 = 24LL;
        v21 = *(_QWORD *)(*(_QWORD *)v19 + 32LL);
        if ( v21 )
          v20 = *(_DWORD *)(v21 + 32);
        v5 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v20);
      }
      if ( v5 >= 0 )
      {
        v22 = (__int64)(v17 + 7);
        if ( !v17 )
          v22 = 64LL;
        if ( (*(_BYTE *)v22 & 1) == 0 )
          goto LABEL_36;
        v23 = (__int64)(v17 + 4);
        v24 = v3;
        if ( !v17 )
          v23 = 40LL;
        if ( *(_QWORD *)v23 )
          v24 = *(_DWORD *)(*(_QWORD *)v23 + 32LL);
        v5 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
               (CResourceStateUpdateSerializer *)&P,
               0x20u,
               v24);
        if ( v5 >= 0 )
        {
LABEL_36:
          if ( (*(_BYTE *)v18 & 2) != 0 )
          {
            v25 = -1;
            if ( (unsigned int)(HIDWORD(v88) + 16) >= HIDWORD(v88) )
              v25 = HIDWORD(v88) + 16;
            v5 = (unsigned int)(HIDWORD(v88) + 16) < HIDWORD(v88) ? 0xC0000095 : 0;
            HIDWORD(v88) = v25;
          }
        }
      }
      v17 = (char **)*v17;
      if ( v5 < 0 )
        goto LABEL_111;
    }
    v96 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
    v5 = v96;
    if ( v96 >= 0 )
    {
      v26 = *(CEndpointResourceStateManager ***)v4;
      if ( *(CEndpointResourceStateManager **)v4 != v4 )
      {
        v27 = (_DWORD *)*((_QWORD *)&v84 + 1);
        v28 = (_DWORD *)v84;
        do
        {
          v29 = *v26;
          v30 = (__int64)(v26 + 3);
          v77 = *v26;
          if ( !v26 )
            v30 = 32LL;
          v79 = v30;
          v31 = *(_BYTE *)v30;
          if ( (*(_BYTE *)v30 & 1) != 0 )
          {
            v32 = (__int64)(v26 + 2);
            if ( !v26 )
              v32 = 24LL;
            v33 = *(_QWORD *)(*(_QWORD *)v32 + 32LL);
            v34 = 0;
            if ( v33 )
              v34 = *(_DWORD *)(v33 + 32);
            *v28 = 2;
            v35 = v28;
            v36 = (unsigned int)(v34 + 24);
            v37 = *(_QWORD *)v32;
            v28 = (_DWORD *)((char *)v35 + v36);
            *(_QWORD *)&v84 = v28;
            *((_QWORD *)v35 + 1) = *(_QWORD *)(v37 + 40);
            if ( v33 )
            {
              v35[4] = *(_DWORD *)(v33 + 32);
              v38 = v35 + 6;
              if ( *(_DWORD *)(v33 + 12) )
              {
                v39 = 0;
                v40 = *(char **)(v33 + 24);
                do
                {
                  v41 = 32LL * v39;
                  *(_OWORD *)v38 = *(_OWORD *)(v41 + *(_QWORD *)(v33 + 16));
                  v38[4] = *(_DWORD *)(v41 + *(_QWORD *)(v33 + 16) + 16);
                  v97 = v38 + 5;
                  memmove(v38 + 5, v40, *(unsigned int *)(v41 + *(_QWORD *)(v33 + 16) + 16));
                  ++v39;
                  v42 = *(unsigned int *)(v41 + *(_QWORD *)(v33 + 16) + 16);
                  v38 = (_DWORD *)((char *)v97 + v42);
                  v40 += v42;
                }
                while ( v39 < *(_DWORD *)(v33 + 12) );
                v30 = v79;
                v27 = (_DWORD *)*((_QWORD *)&v84 + 1);
                v4 = (CEndpointResourceStateManager *)this;
              }
            }
            else
            {
              v35[4] = 0;
            }
            *(_BYTE *)v30 |= 4u;
            v31 = *(_BYTE *)v30;
            v29 = v77;
          }
          v43 = (__int64)(v26 + 2);
          if ( (v31 & 2) != 0 )
          {
            *v27 = 0;
            v44 = v27;
            v27 += 4;
            *((_QWORD *)&v84 + 1) = v27;
            if ( !v26 )
              v43 = 24LL;
            *((_QWORD *)v44 + 1) = *(_QWORD *)(*(_QWORD *)v43 + 40LL);
            *(_BYTE *)v30 |= 8u;
          }
          v26 = (CEndpointResourceStateManager **)v29;
        }
        while ( v29 != v4 );
        v5 = v96;
        v16 = (char **)((char *)v4 + 16);
      }
      v45 = *v16;
      if ( *v16 != (char *)v16 )
      {
        v46 = v86;
        v47 = (_DWORD *)v85;
        v78 = v86;
        v81 = (_DWORD *)*((_QWORD *)&v85 + 1);
        do
        {
          v48 = (__int64)(v45 + 24);
          v92 = *(char **)v45;
          if ( !v45 )
            v48 = 32LL;
          v80 = v48;
          if ( (*(_BYTE *)v48 & 1) != 0 )
          {
            v49 = (__int64)(v45 + 16);
            if ( !v45 )
              v49 = 24LL;
            v50 = *(_QWORD *)(*(_QWORD *)v49 + 32LL);
            v51 = 0;
            if ( v50 )
              v51 = *(_DWORD *)(v50 + 32);
            *v47 = 3;
            v52 = v47;
            v53 = (unsigned int)(v51 + 24);
            v54 = *(_QWORD *)v49;
            v47 = (_DWORD *)((char *)v52 + v53);
            *(_QWORD *)&v85 = v47;
            *((_QWORD *)v52 + 1) = *(_QWORD *)(v54 + 40);
            if ( v50 )
            {
              v55 = (char *)(v52 + 6);
              v52[4] = *(_DWORD *)(v50 + 32);
              v56 = 0;
              if ( *(_DWORD *)(v50 + 12) )
              {
                v57 = *(char **)(v50 + 24);
                do
                {
                  v58 = 32LL * v56;
                  *(_OWORD *)v55 = *(_OWORD *)(v58 + *(_QWORD *)(v50 + 16));
                  *((_DWORD *)v55 + 4) = *(_DWORD *)(v58 + *(_QWORD *)(v50 + 16) + 16);
                  v59 = v55 + 20;
                  memmove(v59, v57, *(unsigned int *)(v58 + *(_QWORD *)(v50 + 16) + 16));
                  ++v56;
                  v60 = *(unsigned int *)(v58 + *(_QWORD *)(v50 + 16) + 16);
                  v55 = &v59[v60];
                  v57 += v60;
                }
                while ( v56 < *(_DWORD *)(v50 + 12) );
                v48 = v80;
                v46 = v78;
              }
            }
            else
            {
              v52[4] = 0;
            }
            *(_BYTE *)v48 |= 4u;
          }
          v61 = (__int64)(v45 + 56);
          v62 = (__int64)(v45 + 16);
          if ( !v45 )
            v61 = 64LL;
          v91 = v45 + 16;
          v90 = v61;
          if ( (*(_BYTE *)v61 & 1) != 0 )
          {
            v63 = (__int64)(v45 + 32);
            if ( !v45 )
              v63 = 40LL;
            v64 = *(_QWORD *)v63;
            v65 = 0;
            if ( v64 )
              v65 = *(_DWORD *)(v64 + 32);
            *(_DWORD *)v46 = 4;
            v78 = v46 + (unsigned int)(v65 + 32);
            v86 = v78;
            v66 = (__int64)(v45 + 16);
            if ( !v45 )
              v66 = 24LL;
            v67 = (__int64)(v45 + 40);
            if ( !v45 )
              v67 = 48LL;
            *(_QWORD *)(v46 + 8) = *(_QWORD *)(*(_QWORD *)v66 + 40LL);
            if ( *(_QWORD *)v67 )
              v68 = *(_QWORD *)(*(_QWORD *)v67 + 40LL);
            else
              v68 = 0LL;
            *(_QWORD *)(v46 + 16) = v68;
            if ( v64 )
            {
              v69 = v46 + 32;
              *(_DWORD *)(v46 + 24) = *(_DWORD *)(v64 + 32);
              if ( *(_DWORD *)(v64 + 12) )
              {
                v70 = 0;
                v71 = *(char **)(v64 + 24);
                do
                {
                  v72 = 32LL * v70;
                  *(_OWORD *)v69 = *(_OWORD *)(*(_QWORD *)(v64 + 16) + v72);
                  *(_DWORD *)(v69 + 16) = *(_DWORD *)(*(_QWORD *)(v64 + 16) + v72 + 16);
                  v98 = v69 + 20;
                  memmove((void *)(v69 + 20), v71, *(unsigned int *)(*(_QWORD *)(v64 + 16) + v72 + 16));
                  ++v70;
                  v73 = *(unsigned int *)(*(_QWORD *)(v64 + 16) + v72 + 16);
                  v69 = v73 + v98;
                  v71 += v73;
                }
                while ( v70 < *(_DWORD *)(v64 + 12) );
                v48 = v80;
                v61 = v90;
              }
            }
            else
            {
              *(_DWORD *)(v46 + 24) = 0;
            }
            if ( *(_QWORD *)v67 )
            {
              CFlipResource::Release(*(CFlipResource **)v67);
              *(_QWORD *)v67 = 0LL;
            }
            *(_BYTE *)v61 |= 2u;
            v62 = (__int64)v91;
          }
          if ( (*(_BYTE *)v48 & 2) != 0 )
          {
            v74 = v81;
            if ( !v45 )
              v62 = 24LL;
            *v81 = 1;
            v81 += 4;
            v75 = *(_QWORD *)v62;
            *((_QWORD *)&v85 + 1) = v81;
            *((_QWORD *)v74 + 1) = *(_QWORD *)(v75 + 40);
            *(_BYTE *)v48 |= 8u;
          }
          v45 = v92;
          v46 = v78;
        }
        while ( v92 != v93 );
        v5 = v96;
        v4 = (CEndpointResourceStateManager *)this;
      }
      CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, a2);
      CEndpointResourceStateManager::CommitPendingUpdates(v4);
    }
  }
LABEL_111:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
