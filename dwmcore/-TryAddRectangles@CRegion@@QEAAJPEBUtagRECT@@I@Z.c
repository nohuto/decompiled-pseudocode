__int64 __fastcall CRegion::TryAddRectangles(
        struct FastRegion::Internal::CRgnData **this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  int v3; // edi
  _DWORD *v4; // rbx
  unsigned int v5; // r15d
  unsigned int v6; // esi
  LONG *p_right; // r12
  LONG v9; // r11d
  struct FastRegion::Internal::CRgnData *v10; // r9
  LONG v11; // r10d
  LONG v12; // ecx
  LONG v13; // edx
  int v14; // esp
  unsigned int v15; // r10d
  int v16; // r8d
  int v17; // eax
  signed int v18; // edi
  int v19; // edi
  signed int v20; // edx
  char *v21; // r10
  char *v22; // r9
  _DWORD *v23; // r11
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r10
  CRegion *v28; // rdi
  int *v29; // r14
  int v30; // eax
  int v31; // esi
  int v33; // eax
  int v34; // eax
  struct FastRegion::Internal::CRgnData *v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  LONG v38; // [rsp+44h] [rbp-C4h]
  LONG v39; // [rsp+48h] [rbp-C0h]
  LONG v40; // [rsp+4Ch] [rbp-BCh] BYREF
  signed int v41; // [rsp+50h] [rbp-B8h]
  _DWORD v42[13]; // [rsp+54h] [rbp-B4h] BYREF
  struct FastRegion::Internal::CRgnData *v43; // [rsp+88h] [rbp-80h] BYREF
  _DWORD Mem[18]; // [rsp+90h] [rbp-78h] BYREF
  int v45; // [rsp+D8h] [rbp-30h] BYREF
  void *lpMem; // [rsp+E0h] [rbp-28h]
  _BYTE v47[256]; // [rsp+E8h] [rbp-20h] BYREF

  v3 = 0;
  Mem[0] = 0;
  v4 = Mem;
  v5 = 0;
  v43 = (struct FastRegion::Internal::CRgnData *)Mem;
  v6 = a3;
  if ( !a3 )
  {
LABEL_35:
    if ( Mem != v4 )
      operator delete(v4);
    return (unsigned int)v3;
  }
  p_right = &a2->right;
  while ( 1 )
  {
    v9 = p_right[1];
    v10 = (struct FastRegion::Internal::CRgnData *)&v37;
    v11 = *(p_right - 1);
    v12 = *p_right;
    v13 = *(p_right - 2);
    v36 = (struct FastRegion::Internal::CRgnData *)&v37;
    if ( v11 >= v9 || v13 >= v12 )
    {
      v15 = v41;
      v16 = 0;
    }
    else
    {
      v40 = v11;
      v39 = v12;
      v42[3] = v12;
      v15 = v14 + 84 - (unsigned int)&v40;
      v38 = v13;
      v41 = v15;
      v42[2] = v13;
      v42[0] = v9;
      v42[1] = v14 + 84 - (unsigned int)v42 + 8;
      v16 = 2;
    }
    v37 = v16;
    if ( !v16 )
    {
      v3 = 0;
      goto LABEL_21;
    }
    if ( *v4 )
    {
      v33 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
              (const struct FastRegion::Internal::CRgnData *)v4,
              (const struct FastRegion::Internal::CRgnData *)&v37);
      v45 = 0;
      lpMem = v47;
      v3 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v45, v33);
      if ( v3 < 0 )
        goto LABEL_56;
      FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, v43, v36);
      v3 = FastRegion::CRegion::SaveResult(
             (FastRegion::CRegion *)&v43,
             (struct FastRegion::Internal::CWorkBuffer *)&v45);
      if ( v47 != lpMem )
        operator delete(lpMem);
      goto LABEL_19;
    }
    v17 = Mem[0];
    v18 = (unsigned int)(&v40 + 2 * v16 - 2) + *(&v40 + 2 * v16 - 1) + 8 * v16 - v15 - (unsigned int)&v40 + 12;
    if ( Mem == v4 )
      v17 = 60;
    if ( v17 >= v18 )
      goto LABEL_11;
    v4 = DefaultHeap::Alloc(v18);
    if ( v4 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v43);
      v16 = v37;
      v43 = (struct FastRegion::Internal::CRgnData *)v4;
      Mem[0] = v18;
LABEL_11:
      *v4 = v16;
      v19 = 0;
      v4[1] = v38;
      v4[2] = v39;
      v20 = v41;
      v21 = (char *)&v40 + v41;
      v22 = (char *)&v4[2 * v16 + 3];
      if ( v16 > 0 )
      {
        v23 = v4 + 3;
        do
        {
          *v23 = *(_DWORD *)((char *)v23 + (char *)&v37 - (char *)v4);
          v23 += 2;
          v24 = v19++;
          v4[2 * v24 + 4] = (unsigned int)(&v40 + 2 * v24)
                          + 4 * ((v22 - v21) >> 2)
                          + *(&v40 + 2 * v24 + 1)
                          - ((_DWORD)v4
                           + 8 * v24
                           + 12);
        }
        while ( v19 < *v4 );
        v20 = v41;
        v6 = a3;
      }
      v25 = (unsigned __int64)(int)(*(&v40 + 2 * v37 - 1) - v20 - (unsigned int)&v40 + (unsigned int)&v40
                                                                                     + 8 * (v37 - 1)) >> 2;
      v26 = (int)v25;
      if ( (int)v25 > 0 )
      {
        v27 = v21 - v22;
        do
        {
          *(_DWORD *)v22 = *(_DWORD *)&v22[v27];
          v22 += 4;
          --v26;
        }
        while ( v26 );
      }
      v3 = 0;
      goto LABEL_19;
    }
    v3 = -2147024882;
LABEL_19:
    if ( v3 < 0 )
      goto LABEL_57;
    v4 = v43;
    v10 = v36;
LABEL_21:
    if ( v5 != 5 * (v5 / 5) && v5 != v6 - 1 )
      goto LABEL_32;
    if ( *v4 )
      break;
    v3 = 0;
LABEL_31:
    *v4 = 0;
    v4 = v43;
    v10 = v36;
    v6 = a3;
LABEL_32:
    if ( &v37 != (int *)v10 )
    {
      operator delete(v10);
      v4 = v43;
    }
    ++v5;
    p_right += 4;
    if ( v5 >= v6 )
      goto LABEL_35;
  }
  v28 = *this;
  if ( !*(_DWORD *)*this )
  {
    if ( this == &v43 )
      goto LABEL_29;
    v29 = (int *)(this + 1);
    v30 = 60;
    v31 = v4[2 * *v4 + 2] + 8 * *v4 - v4[4] - 12 + 8 * (*v4 - 1) + 24;
    if ( this + 1 != (struct FastRegion::Internal::CRgnData **)v28 )
      v30 = *v29;
    if ( v30 >= v31 )
    {
LABEL_28:
      FastRegion::Internal::CRgnData::Copy(v28, (const struct FastRegion::Internal::CRgnData *)v4);
      v4 = v43;
LABEL_29:
      v3 = 0;
LABEL_30:
      if ( v3 < 0 )
        goto LABEL_57;
      goto LABEL_31;
    }
    v28 = (CRegion *)DefaultHeap::Alloc(v31);
    if ( v28 )
    {
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = v28;
      *v29 = v31;
      goto LABEL_28;
    }
    v3 = -2147024882;
LABEL_46:
    v4 = v43;
    goto LABEL_30;
  }
  v34 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, (const struct FastRegion::Internal::CRgnData *)v4);
  v45 = 0;
  lpMem = v47;
  v3 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v45, v34);
  if ( v3 >= 0 )
  {
    FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *this, v43);
    v3 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v45);
    if ( v47 != lpMem )
      operator delete(lpMem);
    goto LABEL_46;
  }
LABEL_56:
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v45);
LABEL_57:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v36);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v43);
  return (unsigned int)v3;
}
