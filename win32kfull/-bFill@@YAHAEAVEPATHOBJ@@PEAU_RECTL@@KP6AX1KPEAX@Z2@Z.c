__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        __int64 a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int i; // r12d
  unsigned int v12; // ecx
  __int64 v13; // r13
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edi
  unsigned int j; // r12d
  unsigned int v18; // ecx
  __int64 v19; // r13
  __int64 v21; // rax
  _BYTE *v22; // r12
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // r13d
  __int128 *v26; // r9
  unsigned int v27; // edi
  unsigned int v28; // esi
  __int128 *v29; // rdx
  unsigned int v30; // r10d
  __int128 *v31; // rdi
  int *v32; // r9
  int v33; // r11d
  int v34; // ecx
  int v35; // ecx
  int v36; // r11d
  int *v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // [rsp+20h] [rbp-658h]
  unsigned int v40; // [rsp+24h] [rbp-654h]
  char *v41; // [rsp+30h] [rbp-648h]
  char v42; // [rsp+38h] [rbp-640h]
  int *v43; // [rsp+60h] [rbp-618h]
  int v44; // [rsp+70h] [rbp-608h]
  __int128 v45; // [rsp+88h] [rbp-5F0h]
  __int128 v46; // [rsp+98h] [rbp-5E0h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-5D0h]
  __int128 v48; // [rsp+B8h] [rbp-5C0h]
  _OWORD v49[3]; // [rsp+C8h] [rbp-5B0h] BYREF
  _BYTE *v50; // [rsp+F8h] [rbp-580h] BYREF
  int v51; // [rsp+100h] [rbp-578h]
  int v52; // [rsp+104h] [rbp-574h]
  _OWORD *v53; // [rsp+108h] [rbp-570h] BYREF
  int v54; // [rsp+110h] [rbp-568h]
  int v55; // [rsp+114h] [rbp-564h]
  __int128 v56; // [rsp+118h] [rbp-560h] BYREF
  _BYTE v57[320]; // [rsp+130h] [rbp-548h] BYREF
  _BYTE v58[960]; // [rsp+270h] [rbp-408h] BYREF

  v42 = a3;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(v49, 0, sizeof(v49));
  if ( (a3 & 1) != 0 )
  {
    v8 = (__int64 *)((char *)a1 + 48);
    v41 = (char *)a1 + 48;
    v9 = *((_QWORD *)a1 + 6);
    if ( v9 )
    {
      if ( a2 )
      {
        v10 = 0;
        for ( i = 0; ; ++i )
        {
          v12 = *((_DWORD *)a1 + 14);
          if ( i >= v12 )
            break;
          v13 = *v8;
          v53 = *(_OWORD **)(*v8 + 16LL * i);
          v54 = *(_DWORD *)(v13 + 16LL * i + 8);
          v55 = *(_DWORD *)(v13 + 16LL * i + 12);
          if ( a2->left >= *(_DWORD *)(v13 + 16LL * i)
            || a2->top >= *(_DWORD *)(v13 + 16LL * i + 4)
            || a2->right <= *(_DWORD *)(v13 + 16LL * i + 8)
            || a2->bottom <= *(_DWORD *)(v13 + 16LL * i + 12) )
          {
            ERECTL::operator*=((int *)&v53, &a2->left);
            if ( v10 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v13 + 16LL * (i - v10), v10, a5);
              v10 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)&v53) )
              ((void (__fastcall *)(_OWORD **, __int64, void *))a4)(&v53, 1LL, a5);
          }
          else
          {
            ++v10;
          }
          v8 = (__int64 *)v41;
        }
        if ( v10 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*v8 + 16LL * (v12 - v10), v10, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v9, *((unsigned int *)a1 + 14), a5);
      }
      return 1LL;
    }
  }
  if ( (a3 & 3) == 2 )
  {
    v14 = (__int64 *)((char *)a1 + 64);
    v15 = *((_QWORD *)a1 + 8);
    if ( v15 )
    {
      if ( a2 )
      {
        v16 = 0;
        for ( j = 0; ; ++j )
        {
          v18 = *((_DWORD *)a1 + 15);
          if ( j >= v18 )
            break;
          v19 = *v14;
          if ( a2->left >= *(_DWORD *)(*v14 + 16LL * j)
            || a2->top >= *(_DWORD *)(v19 + 16LL * j + 4)
            || a2->right <= *(_DWORD *)(v19 + 16LL * j + 8)
            || a2->bottom <= *(_DWORD *)(v19 + 16LL * j + 12) )
          {
            LODWORD(v50) = *(_DWORD *)(*v14 + 16LL * j);
            HIDWORD(v50) = *(_DWORD *)(v19 + 16LL * j + 4);
            v51 = *(_DWORD *)(v19 + 16LL * j + 8);
            v52 = *(_DWORD *)(v19 + 16LL * j + 12);
            ERECTL::operator*=((int *)&v50, &a2->left);
            if ( v16 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v19 + 16LL * (j - v16), v16, a5);
              v16 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)&v50) )
              ((void (__fastcall *)(_BYTE **, __int64, void *))a4)(&v50, 1LL, a5);
          }
          else
          {
            ++v16;
          }
          v14 = (__int64 *)((char *)a1 + 64);
        }
        if ( v16 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*v14 + 16LL * (v18 - v16), v16, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v15, *((unsigned int *)a1 + 15), a5);
      }
      return 1LL;
    }
  }
  v21 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v21 > 0x14 )
  {
    v24 = 48 * v21;
    if ( (unsigned __int64)(48 * v21) > 0xFFFFFFFF )
      return 0LL;
    v22 = v24 ? (_BYTE *)Win32AllocPool(v24, 1734632775LL, a3, a4) : 0LL;
    v50 = v22;
    if ( !v22 )
      return 0LL;
    v23 = 1;
  }
  else
  {
    v22 = v58;
    v50 = v58;
    v23 = 0;
  }
  v44 = v23;
  v43 = (int *)v57;
  v25 = 0;
  v45 = 0LL;
  v56 = 0LL;
  if ( a2 )
  {
    v45 = (__int128)*a2;
    DWORD1(v56) = 16 * a2->top;
    HIDWORD(v56) = 16 * a2->bottom;
    v26 = &v56;
  }
  else
  {
    v26 = 0LL;
  }
  v53 = v49;
  v27 = bConstructGET(a1, v49, v22, v26);
  v40 = v27;
  if ( !v27 )
    goto LABEL_85;
  v28 = 0x80000000;
  v29 = &v46;
  *(_QWORD *)&v46 = &v46;
  LODWORD(v47) = 0;
  HIDWORD(v46) = 0x7FFFFFFF;
  while ( v29 != &v46 )
  {
    vAdvanceAETEdges(&v46);
    v29 = (__int128 *)v46;
    if ( (__int128 *)v46 == &v46 )
      break;
    if ( *(__int128 **)v46 != &v46 )
    {
      vXSortAETEdges(&v46);
      v29 = (__int128 *)v46;
    }
LABEL_60:
    v30 = v28;
    v39 = v28;
    if ( *(_DWORD *)(*(_QWORD *)&v49[0] + 16LL) == v28 )
    {
      vMoveNewEdges(v49, &v46, v28);
      v29 = (__int128 *)v46;
      v30 = v28;
    }
    v31 = v29;
    v28 = v30 + 1;
    v32 = v43;
    do
    {
      v33 = *((_DWORD *)v31 + 3);
      if ( (v42 & 2) != 0 )
      {
        v34 = *((_DWORD *)v31 + 10);
        do
        {
          v31 = *(__int128 **)v31;
          v34 += *((_DWORD *)v31 + 10);
        }
        while ( v34 );
      }
      else
      {
        v31 = *(__int128 **)v31;
      }
      if ( v33 < *((_DWORD *)v31 + 3) )
      {
        if ( a2 )
        {
          v35 = v45;
          if ( v33 >= (int)v45 )
            v35 = v33;
          *v32 = v35;
          v36 = DWORD2(v45);
          if ( *((_DWORD *)v31 + 3) <= SDWORD2(v45) )
            v36 = *((_DWORD *)v31 + 3);
          v37 = v32 + 4;
          if ( v35 >= v36 )
            v37 = v32;
          v43 = v37;
          v38 = v25 + 1;
          if ( v35 >= v36 )
            v38 = v25;
          v25 = v38;
        }
        else
        {
          *v32 = v33;
          ++v25;
          v43 = v32 + 4;
          v36 = *((_DWORD *)v31 + 3);
        }
        v32[2] = v36;
        v32[1] = v39;
        v32[3] = v28;
        v32 = v43;
        if ( v25 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *, int *))a4)(v57, 20LL, a5, v43);
          v32 = (int *)v57;
          v43 = (int *)v57;
          v25 = 0;
          v29 = (__int128 *)v46;
        }
      }
      v31 = *(__int128 **)v31;
    }
    while ( v31 != &v46 );
  }
  if ( *(_OWORD **)&v49[0] != v53 )
  {
    v28 = *(_DWORD *)(*(_QWORD *)&v49[0] + 16LL);
    goto LABEL_60;
  }
  if ( v25 )
    ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v57, v25, a5);
  v27 = v40;
LABEL_85:
  if ( v44 )
    Win32FreePool(v22);
  return v27;
}
