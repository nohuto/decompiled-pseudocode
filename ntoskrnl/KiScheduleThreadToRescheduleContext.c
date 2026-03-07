__int64 __fastcall KiScheduleThreadToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  unsigned __int8 v6; // r14
  unsigned int v8; // r8d
  __int64 v12; // r10
  int v13; // edx
  unsigned int v14; // r11d
  __int64 v15; // rcx
  __int64 v16; // rbp
  char v17; // si
  char v18; // cl
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  unsigned __int8 *v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // cl
  bool v28; // al
  __int64 v29; // r13
  __int64 v30; // rcx
  unsigned __int8 v31; // cl
  int v32; // eax
  __int64 v33; // r13
  unsigned __int8 *v34; // r10
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int8 v38; // cl
  bool v39; // al
  __int64 v40; // r12
  __int64 v41; // rcx
  unsigned __int8 v42; // al
  char v43; // al
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // al

  v5 = 0;
  v6 = 0;
  v8 = *a1;
  v12 = 0LL;
  v13 = 0;
  if ( *a1 )
  {
    while ( *(_QWORD *)&a1[40 * v13 + 16] != a3 )
    {
      if ( ++v13 >= v8 )
        goto LABEL_4;
    }
    v12 = (__int64)&a1[40 * v13 + 16];
  }
LABEL_4:
  v14 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  if ( v14 < ((*(unsigned __int8 *)(v12 + 32) >> 1) & 1u) )
  {
    if ( (_BYTE)v8 )
    {
      do
      {
        v22 = *(_QWORD *)&a1[40 * v5 + 16];
        v23 = &a1[40 * v5];
        v24 = *((_QWORD *)v23 + 5);
        v25 = v24 - 1;
        if ( v22 == a3 )
        {
          if ( v25 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v24) )
          {
            if ( (v23[49] & 1) != 0 )
              *(_DWORD *)(v26 + 116) |= 2u;
            *(_BYTE *)(v26 + 565) = 1;
            KiInsertDeferredReadyList(a5, v26);
          }
          v27 = v23[48] & 0xFE;
          *((_QWORD *)v23 + 4) = a2;
          v23[48] = v27;
          v28 = (*(_DWORD *)(a2 + 120) & 2) != 0;
          *((_QWORD *)v23 + 5) = a2;
          v23[48] = v27 & 0xC5 | (2 * (v28 | 2));
          v23[49] ^= (v23[49] ^ a4) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(a2) )
            *(_DWORD *)(a2 + 536) = *(_DWORD *)(v22 + 36);
        }
        else
        {
          v29 = *(_QWORD *)(v22 + 24);
          if ( v25 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v24) )
          {
            if ( (v23[49] & 1) != 0 )
              *(_DWORD *)(v30 + 116) |= 2u;
            *(_BYTE *)(v30 + 565) = 1;
            KiInsertDeferredReadyList(a5, v30);
          }
          v31 = v23[48] | 1;
          *((_QWORD *)v23 + 4) = v29;
          v23[48] = v31;
          v32 = *(_DWORD *)(v29 + 120);
          v23[49] &= ~1u;
          *((_QWORD *)v23 + 5) = v29;
          v23[48] = v31 & 0xC5 | (2 * (((v32 & 2) != 0) | 2));
          if ( !(unsigned __int8)KiIsPrcbThread(v29) )
            *(_DWORD *)(v29 + 536) = *(_DWORD *)(v22 + 36);
        }
        ++v5;
      }
      while ( v5 < *a1 );
    }
    v6 = 1;
  }
  else if ( v14 )
  {
    if ( (_BYTE)v8 )
    {
      do
      {
        v33 = *(_QWORD *)&a1[40 * v5 + 16];
        v34 = &a1[40 * v5];
        v35 = *((_QWORD *)v34 + 5);
        v36 = v35 - 1;
        if ( v33 == a3 )
        {
          if ( v36 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v35) )
          {
            if ( (v34[49] & 1) != 0 )
              *(_DWORD *)(v37 + 116) |= 2u;
            *(_BYTE *)(v37 + 565) = 1;
            KiInsertDeferredReadyList(a5, v37);
          }
          v38 = v34[48] & 0xFE;
          *((_QWORD *)v34 + 4) = a2;
          v34[48] = v38;
          v39 = (*(_DWORD *)(a2 + 120) & 2) != 0;
          *((_QWORD *)v34 + 5) = a2;
          v34[48] = v38 & 0xC5 | (2 * (v39 | 2));
          v34[49] ^= (v34[49] ^ a4) & 1;
          if ( !(unsigned __int8)KiIsPrcbThread(a2) )
            *(_DWORD *)(a2 + 536) = *(_DWORD *)(v33 + 36);
        }
        else
        {
          v40 = *(_QWORD *)(v33 + 34944);
          if ( v36 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v35) )
          {
            if ( (v34[49] & 1) != 0 )
              *(_DWORD *)(v41 + 116) |= 2u;
            *(_BYTE *)(v41 + 565) = 1;
            KiInsertDeferredReadyList(a5, v41);
          }
          v42 = v34[48] & 0xFE;
          *((_QWORD *)v34 + 4) = a2;
          v34[48] = v42;
          v43 = v42 & 0xE5 | (2 * (((*(_DWORD *)(a2 + 120) & 2) != 0) | 2));
          v44 = v43 | 0x20;
          v45 = v43 & 0xDF;
          if ( a2 == v40 )
            v44 = v45;
          v34[48] = v44;
          v34[49] &= ~1u;
          *((_QWORD *)v34 + 5) = v40;
          if ( !(unsigned __int8)KiIsPrcbThread(v40) )
            *(_DWORD *)(v40 + 536) = *(_DWORD *)(v33 + 36);
        }
        ++v5;
      }
      while ( v5 < *a1 );
      v6 = 0;
    }
  }
  else
  {
    v15 = *(_QWORD *)(v12 + 24);
    v16 = *(_QWORD *)v12;
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v15) )
    {
      if ( (*(_BYTE *)(v12 + 33) & 1) != 0 )
        *(_DWORD *)(v21 + 116) |= 2u;
      *(_BYTE *)(v21 + 565) = 1;
      KiInsertDeferredReadyList(a5, v21);
    }
    *(_BYTE *)(v12 + 32) &= ~1u;
    v17 = *(_BYTE *)(v12 + 33) ^ a4;
    v18 = *(_BYTE *)(v12 + 32) & 0xC5;
    *(_QWORD *)(v12 + 16) = a2;
    v19 = *(_DWORD *)(a2 + 120);
    *(_BYTE *)(v12 + 33) ^= v17 & 1;
    *(_QWORD *)(v12 + 24) = a2;
    *(_BYTE *)(v12 + 32) = v18 | (2 * (((v19 & 2) != 0) | 2));
    if ( !(unsigned __int8)KiIsPrcbThread(a2) )
      *(_DWORD *)(a2 + 536) = *(_DWORD *)(v16 + 36);
  }
  result = v6;
  *((_DWORD *)a1 + 1) = v14;
  return result;
}
