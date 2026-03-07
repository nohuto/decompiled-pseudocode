void __fastcall VidSchExitIndependentFlipInternal(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        bool *a7,
        _QWORD *a8)
{
  int v8; // r13d
  __int64 v9; // r14
  int v10; // edx
  _DWORD *v12; // rcx
  int v13; // r8d
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v14; // rsi
  _QWORD *v15; // r10
  __int64 v16; // r11
  unsigned int v17; // eax
  int v18; // r15d
  unsigned int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  int v27; // ecx
  BOOL v28; // r10d
  unsigned int v29; // r15d
  unsigned int v30; // edi
  unsigned int v31; // ebx
  struct VIDSCH_FLIP_QUEUE *v32; // r9
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v33; // rsi
  unsigned int v34; // r15d
  unsigned int v35; // edi
  unsigned int v36; // ebx
  __int64 v37; // r13
  struct VIDSCH_FLIP_QUEUE *v38; // r9
  int v39; // r13d
  __int64 v40; // rcx
  unsigned int v41; // edi
  char v42; // r15
  unsigned int v43; // ebx
  __int64 v44; // rsi
  unsigned int v45; // r8d
  __int64 v46; // r11
  unsigned int v47; // r9d
  unsigned int v48; // r10d
  int v49; // r8d
  __int64 v50; // r9
  _QWORD *v51; // rdx
  int v52; // [rsp+68h] [rbp-71h]
  unsigned int v53; // [rsp+6Ch] [rbp-6Dh] BYREF
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v54; // [rsp+70h] [rbp-69h]
  unsigned int v55; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v56; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v57; // [rsp+80h] [rbp-59h]
  __int64 v58; // [rsp+88h] [rbp-51h]
  unsigned int v59; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v60; // [rsp+94h] [rbp-45h]
  unsigned int v61; // [rsp+98h] [rbp-41h]
  __int64 v62; // [rsp+A0h] [rbp-39h]
  unsigned int v63; // [rsp+A8h] [rbp-31h] BYREF
  int v64; // [rsp+ACh] [rbp-2Dh]
  unsigned int v65; // [rsp+B0h] [rbp-29h]
  __int64 v66; // [rsp+B8h] [rbp-21h]
  _DWORD v67[4]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-9h]

  v8 = 0;
  v9 = a2;
  v52 = 0;
  v10 = *(_DWORD *)(a2 + 3512);
  *a7 = 0;
  if ( v10 >= 0 )
  {
    v12 = *(_DWORD **)(v9 + 3328);
    v13 = *a3;
    do
    {
      if ( *v12 == v13 && v12[1] == a3[1] )
        break;
      ++v8;
      v12 += 40;
    }
    while ( v8 <= v10 );
    v52 = v8;
  }
  v54 = (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)(*(_QWORD *)(v9 + 3328) + 160LL * v8);
  v14 = v54;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v55,
    v54);
  v17 = v55;
  v18 = 3;
  v19 = v57;
  while ( v17 )
  {
    v20 = v58;
    v21 = v19;
    WdLogSingleEntry4(8LL, *v15, v16, *(unsigned int *)(v58 + 4LL * v19), a6);
    v15 = a3;
    v16 = a4;
    v22 = *((_QWORD *)v14 + 11);
    v23 = *(_QWORD *)(v9 + 8LL * v56 + 3200) + 152LL + 288LL * *(unsigned int *)(v20 + 4 * v21);
    v24 = 5LL * *(unsigned int *)(v23 + 216);
    *(_QWORD *)(v23 + 8 * v24 + 88) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v23 + 8 * v24 + 56) = 0;
    *(_BYTE *)(v23 + 8 * v24 + 57) = a6;
    *(_QWORD *)(v23 + 8 * v24 + 60) = *(_QWORD *)a3;
    *(_QWORD *)(v23 + 8 * v24 + 72) = a4;
    *(_QWORD *)(v23 + 8 * v24 + 80) = v22;
    *(_DWORD *)(v23 + 216) = (*(_DWORD *)(v23 + 216) + 1) & 3;
    v25 = v55 >> 1 == 0;
    v17 = v55 >> 1;
    v55 >>= 1;
    if ( !v25 )
    {
      do
      {
        if ( (v17 & 1) != 0 )
          break;
        ++v56;
        v17 >>= 1;
      }
      while ( v17 );
      v55 = v17;
    }
    v19 = ++v57;
  }
  v26 = *((_QWORD *)v14 + 11);
  *((_QWORD *)v14 + 19) = 0LL;
  ++*(_QWORD *)(v9 + 3504);
  v27 = *((_DWORD *)v14 + 28);
  *a8 = v26;
  if ( (unsigned int)(v27 - 1) <= 1 )
  {
    if ( a6 || v27 != 1 )
      v18 = 0;
    *((_DWORD *)v14 + 28) = v18;
    *((_WORD *)v14 + 48) = 0;
    *((_BYTE *)v14 + 98) = 0;
    *(_QWORD *)((char *)v14 + 100) = 0LL;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v59,
      v14);
    v34 = v61;
    v35 = v60;
    v36 = v59;
    v37 = v62;
    while ( v36 )
    {
      v38 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v9 + 8LL * v35 + 3200)
                                         + 8LL * *(unsigned int *)(v37 + 4LL * v34)
                                         + 40);
      if ( v38 )
      {
        if ( *(_BYTE *)(v9 + 59) == v28 )
        {
          VidSchiCancelIndependentFlips((__int64)a1, v9, v35, (__int64)v38, a7, 0xFFFFFFFF, -1);
        }
        else
        {
          v53 = *((_DWORD *)v38 + 17);
          VidSchiCancelIndependentFlipsHwQueue(
            a1,
            (struct _VIDSCH_GLOBAL *)v9,
            v35,
            v38,
            a7,
            &v53,
            ((unsigned __int8)*((_DWORD *)v38 + 14) - 1) & 0x3F,
            2u);
        }
      }
      VidSchiFlushPendingTokenList(a1, (struct _VIDSCH_GLOBAL *)v9, v35, *(_DWORD *)(v37 + 4LL * v34));
      while ( 1 )
      {
        v36 >>= 1;
        if ( !v36 || (v36 & 1) != 0 )
          break;
        ++v35;
      }
      ++v34;
      LOBYTE(v28) = 0;
    }
    v33 = v54;
  }
  else
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v59,
      v14);
    v29 = v61;
    v30 = v60;
    v31 = v59;
    while ( v31 )
    {
      v32 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v9 + 8LL * v30 + 3200)
                                         + 8LL * *(unsigned int *)(v62 + 4LL * v29)
                                         + 40);
      if ( v32 )
      {
        if ( *(_BYTE *)(v9 + 59) == v28 )
        {
          VidSchiCancelIndependentFlips((__int64)a1, v9, v30, (__int64)v32, a7, 0xFFFFFFFF, -1);
        }
        else
        {
          v53 = *((_DWORD *)v32 + 17);
          VidSchiCancelIndependentFlipsHwQueue(
            a1,
            (struct _VIDSCH_GLOBAL *)v9,
            v30,
            v32,
            a7,
            &v53,
            ((unsigned __int8)*((_DWORD *)v32 + 14) - 1) & 0x3F,
            2u);
        }
        v28 = 0;
      }
      while ( 1 )
      {
        v31 >>= 1;
        if ( !v31 || (v31 & 1) != 0 )
          break;
        ++v30;
      }
      ++v29;
    }
    v33 = v54;
    *((_DWORD *)v54 + 28) = v28;
  }
  v25 = bTracingEnabled == v28;
  v39 = v52;
  *a7 = v28;
  if ( !v25 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v63,
      v33);
    v41 = v65;
    v42 = v64;
    v43 = v63;
    v44 = v66;
    while ( v43 )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        McTemplateK0txqqqtxtx_EtwWriteTransfer(
          v40,
          *a7,
          v41,
          0,
          *(_QWORD *)a3,
          v42,
          *(_DWORD *)(v44 + 4LL * v41),
          a5,
          *a7,
          a4,
          a6,
          *a8);
        LOBYTE(v28) = 0;
      }
      while ( 1 )
      {
        v43 >>= 1;
        if ( !v43 || (v43 & 1) != 0 )
          break;
        ++v42;
      }
      ++v41;
    }
    v33 = v54;
    v9 = a2;
    v39 = v52;
  }
  if ( a6 != v28 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v67,
      v33);
    v45 = v67[0];
    v46 = v68;
    v47 = v67[2];
    v48 = v67[1];
    while ( v45 )
    {
      *(_DWORD *)(288LL * *(unsigned int *)(v46 + 4LL * v47) + *(_QWORD *)(v9 + 8LL * v48 + 3200) + 188) = -1;
      while ( 1 )
      {
        v45 >>= 1;
        if ( !v45 || (v45 & 1) != 0 )
          break;
        ++v48;
      }
      ++v47;
    }
    *(_QWORD *)v33 = 0LL;
    *((_DWORD *)v33 + 4) = 0;
    if ( v39 == *(_DWORD *)(v9 + 3512) )
    {
      v49 = v39 - 1;
      if ( v39 - 1 >= 0 )
      {
        v50 = v49;
        v51 = (_QWORD *)(*(_QWORD *)(v9 + 3328) + 160LL * v49);
        do
        {
          if ( *v51 )
            break;
          --v49;
          v51 -= 20;
          --v50;
        }
        while ( v50 >= 0 );
      }
      *(_DWORD *)(v9 + 3512) = v49;
    }
  }
}
