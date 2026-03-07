__int64 __fastcall VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned __int64 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16)
{
  unsigned __int8 *v16; // rdi
  struct _VIDMM_DMA_BUFFER *v17; // r13
  unsigned __int64 v19; // rbx
  char *v20; // r12
  unsigned __int64 v21; // r10
  int v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // ebp
  unsigned int v25; // edx
  unsigned int v26; // r11d
  unsigned int v27; // r9d
  size_t v28; // r14
  char *v29; // r15
  unsigned __int64 v30; // r8
  unsigned int v31; // r12d
  unsigned int v32; // edi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r9d
  unsigned int v38; // edx
  unsigned int *v39; // r11
  int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // r9d
  unsigned __int64 v43; // rdx
  unsigned int v44; // ecx
  unsigned __int64 v45; // r8
  unsigned int v46; // esi
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  char *v53; // rbx
  __int64 v54; // rsi
  char *v55; // rdi
  char *v56; // rbp
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rdi
  unsigned int v59; // [rsp+20h] [rbp-68h]
  unsigned int v60; // [rsp+24h] [rbp-64h]
  void *Src[12]; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v65; // [rsp+A8h] [rbp+20h]
  int v66; // [rsp+B0h] [rbp+28h]
  unsigned int v67; // [rsp+B8h] [rbp+30h]
  unsigned int v68; // [rsp+C0h] [rbp+38h]

  v16 = a3;
  v17 = a2;
  if ( a4 < 0x48 )
    return 0LL;
  v19 = *((_QWORD *)a2 + 5);
  v20 = (char *)(a4 - 72);
  v21 = a16;
  v22 = 0;
  v67 = 0;
  v23 = 0;
  v66 = 0;
  v24 = 0;
  v25 = a13;
  v26 = -1;
  v27 = a12;
  v28 = 0LL;
  v29 = 0LL;
  v68 = 0;
  v65 = 0;
  v30 = (unsigned __int64)v20;
  v59 = 0;
  v60 = -1;
  Src[0] = v20;
  if ( v20 )
  {
    v31 = 0;
    v32 = a12;
    while ( 1 )
    {
      if ( v21 )
      {
        v33 = 64LL;
        if ( v30 < 0x40 )
          v33 = v30;
        if ( v33 >= v21 )
        {
          v34 = v21;
        }
        else
        {
          v34 = 64LL;
          if ( v30 < 0x40 )
            v34 = v30;
        }
        v29 += v34;
        v21 -= v34;
        v30 -= v34;
        Src[1] = v29;
        if ( !v19 )
          goto LABEL_49;
      }
      else if ( !v19 )
      {
        goto LABEL_50;
      }
      v35 = 1024LL;
      if ( v30 < 0x400 )
        v35 = v30;
      if ( v35 >= v19 )
      {
        v36 = v19;
      }
      else
      {
        v36 = 1024LL;
        if ( v30 < 0x400 )
          v36 = v30;
      }
      v28 += v36;
      v19 -= v36;
      v30 -= v36;
      if ( v25 )
      {
        v37 = 0;
        v38 = v32;
        if ( v32 < a13 )
        {
          v39 = (unsigned int *)(*((_QWORD *)v17 + 15) + 8 * (3LL * v32 + 2));
          do
          {
            v40 = v37;
            if ( *v39 < v28 )
            {
              v67 = v38;
              v41 = v38;
              if ( !v37 )
                v37 = 1;
              if ( v40 )
                v41 = v24;
              v24 = v41;
            }
            ++v38;
            v39 += 6;
          }
          while ( v38 < a13 );
          v26 = v60;
          v23 = v68;
          v32 = a12;
          v59 = v24;
        }
        v42 = v24;
        v43 = v30 / 0x18;
        v44 = v67 - v24 - v23 + 1;
        if ( (unsigned int)(v30 / 0x18) >= v44 )
          v43 = v44;
        v23 += v43;
        v68 = v23;
        v45 = v30 - 24 * v43;
        if ( v24 <= v67 )
        {
          v46 = v66;
          do
          {
            v47 = *(_DWORD *)(*((_QWORD *)v17 + 15) + 24LL * v42);
            v48 = v47;
            if ( v26 < v47 )
              v48 = v26;
            v26 = v48;
            if ( v46 > v47 )
              v47 = v46;
            ++v42;
            v46 = v47;
          }
          while ( v42 <= v67 );
          v17 = a2;
          v31 = v47;
          v23 = v68;
          v24 = v59;
          v32 = a12;
          v60 = v48;
        }
        v49 = *((_DWORD *)v17 + 13) - 1;
        if ( v31 < v49 )
          v49 = v31;
        v66 = v49;
        v31 = v49;
        v50 = v49 - v26 - v65 + 1;
        v51 = v45 / 0x18;
        if ( (unsigned int)(v45 / 0x18) >= v50 )
          v51 = v50;
        v22 = v51 + v65;
        v65 += v51;
        v52 = 3 * v51;
        v25 = a13;
        v30 = v45 - 8 * v52;
      }
LABEL_49:
      if ( !v30 )
      {
LABEL_50:
        v16 = a3;
        v20 = (char *)Src[0];
        v27 = a12;
        break;
      }
    }
  }
  v53 = v20;
  *(_QWORD *)v16 = a8;
  *((_QWORD *)v16 + 1) = a9;
  *((_DWORD *)v16 + 4) = a16;
  *((_DWORD *)v16 + 5) = a10;
  *((_DWORD *)v16 + 6) = a11;
  *((_DWORD *)v16 + 7) = v27;
  *((_DWORD *)v16 + 8) = v25;
  *((_DWORD *)v16 + 9) = a14;
  *((_DWORD *)v16 + 10) = a15;
  *((_DWORD *)v16 + 11) = (_DWORD)v29;
  *((_DWORD *)v16 + 12) = 0;
  *((_DWORD *)v16 + 13) = v28;
  *((_DWORD *)v16 + 14) = v24;
  *((_DWORD *)v16 + 15) = v23;
  v54 = 72LL;
  *((_DWORD *)v16 + 16) = v26;
  *((_DWORD *)v16 + 17) = v22;
  v55 = (char *)(v16 + 72);
  v56 = v55;
  if ( v29 && v29 <= v20 )
  {
    memmove(v55, *((const void **)v17 + 16), (size_t)v29);
    v54 = (__int64)(v29 + 72);
    v56 = &v29[(_QWORD)v55];
    v53 = (char *)(v20 - v29);
  }
  if ( v28 && v28 <= (unsigned __int64)v53 )
  {
    Src[0] = 0LL;
    VIDMM_DMA_POOL::BeginCPUAccess(this, v17, Src);
    memmove(v56, Src[0], v28);
    v56 += v28;
    v54 += v28;
    v53 -= v28;
  }
  v57 = 24LL * v68;
  if ( v68 && v57 <= (unsigned __int64)v53 )
  {
    memmove(v56, (const void *)(*((_QWORD *)v17 + 15) + 24LL * v59), 24LL * v68);
    v56 += v57;
    v54 += v57;
    v53 -= v57;
  }
  v58 = 24LL * v65;
  if ( v65 )
  {
    if ( v58 <= (unsigned __int64)v53 )
    {
      memmove(v56, (const void *)(*((_QWORD *)v17 + 14) + 24LL * v60), 24LL * v65);
      v54 += v58;
    }
  }
  return v54;
}
