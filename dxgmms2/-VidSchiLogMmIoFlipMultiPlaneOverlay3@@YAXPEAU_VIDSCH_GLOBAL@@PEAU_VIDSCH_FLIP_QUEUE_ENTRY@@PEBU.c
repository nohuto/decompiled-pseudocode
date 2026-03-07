void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        _DWORD *a2,
        LARGE_INTEGER *a3,
        char a4,
        char a5,
        char a6)
{
  char v6; // r14
  LARGE_INTEGER v10; // rax
  int *QuadPart; // rax
  int v12; // edi
  char v13; // si
  unsigned int HighPart; // eax
  LONGLONG v15; // r9
  _OWORD *v16; // r8
  _DWORD *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v21; // r8
  DWORD v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r9
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // kr00_8
  unsigned __int64 v27; // rdx
  unsigned __int128 v28; // rtt
  unsigned __int64 v29; // r10
  __int64 i; // rsi
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // r15
  unsigned int v34; // r14d
  __int64 v35; // r9
  unsigned int j; // edi
  unsigned int v37; // r9d
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  int v43; // [rsp+100h] [rbp-78h]
  __int128 v44; // [rsp+108h] [rbp-70h]
  __int128 v45; // [rsp+118h] [rbp-60h]
  _OWORD v46[2]; // [rsp+130h] [rbp-48h] BYREF
  __int64 v47; // [rsp+150h] [rbp-28h]
  _DWORD v48[20]; // [rsp+158h] [rbp-20h] BYREF
  _BYTE v49[64]; // [rsp+1A8h] [rbp+30h] BYREF
  _BYTE v50[64]; // [rsp+1E8h] [rbp+70h] BYREF
  _BYTE v51[64]; // [rsp+228h] [rbp+B0h] BYREF
  char v52[64]; // [rsp+268h] [rbp+F0h] BYREF

  v6 = a4;
  if ( bTracingEnabled )
  {
    v10 = a3[4];
    v45 = 0LL;
    v44 = 0LL;
    if ( v10.QuadPart )
    {
      v45 = *(_OWORD *)(v10.QuadPart + 4);
      v44 = *(_OWORD *)(v10.QuadPart + 20);
    }
    QuadPart = (int *)a3[6].QuadPart;
    LOBYTE(v12) = 0;
    if ( QuadPart )
      v12 = *QuadPart;
    v13 = QuadPart != 0LL;
    memset(v48, 0, sizeof(v48));
    v47 = 0LL;
    HighPart = a3[2].HighPart;
    memset(v46, 0, sizeof(v46));
    if ( HighPart )
    {
      v15 = a3[3].QuadPart - (_QWORD)v48;
      v16 = v46;
      v17 = v48;
      v18 = HighPart;
      do
      {
        v19 = *(_QWORD *)((char *)v17 + v15);
        v16 = (_OWORD *)((char *)v16 + 4);
        v17 += 2;
        *((_QWORD *)v17 - 1) = *(_QWORD *)(v19 + 8);
        *((_DWORD *)v16 - 1) = *(_DWORD *)v19;
        --v18;
      }
      while ( v18 );
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = a3[7];
    v22 = 0;
    if ( v21.QuadPart > (unsigned __int64)PerformanceCounter.QuadPart )
      v22 = v21.LowPart - PerformanceCounter.LowPart;
    v23 = *(_QWORD *)(a1 + 2624);
    v24 = v22;
    v26 = v22;
    v25 = v22 * (unsigned __int128)0x3E8uLL;
    if ( is_mul_ok(v26, 0x3E8uLL) )
    {
      v28 = v25;
      v27 = v25 % v23;
      v29 = v28 / v23;
    }
    else
    {
      v29 = 1000 * (v24 % v23) / v23;
      v41 = v24 / v23;
      v27 = v24 % v23;
      LODWORD(v23) = 1000 * (v24 / v23);
      LOBYTE(v29) = -24 * v41 + v29;
    }
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqqXR2qqddddddddtqtdqiiqQR2q_EtwWriteTransfer(
        (a2[284] >> 12) & 1,
        v27,
        v21.LowPart,
        *(_QWORD *)(a1 + 16),
        a3[1].LowPart,
        a3[2].HighPart,
        (__int64)v48,
        a3[1].HighPart,
        a3[2].LowPart,
        v45,
        SBYTE8(v45),
        SBYTE4(v45),
        SBYTE12(v45),
        v44,
        SBYTE8(v44),
        SBYTE4(v44),
        SBYTE12(v44),
        v13,
        v12,
        (a2[284] & 0x1000) != 0,
        a5,
        a3[5].LowPart,
        a6,
        v21.QuadPart,
        v29,
        (__int64)v46,
        a2[262]);
    for ( i = 0LL; (unsigned int)i < a3[2].HighPart; i = (unsigned int)(i + 1) )
    {
      v31 = *(_QWORD *)(a3[3].QuadPart + 8 * i);
      v32 = *(_DWORD *)v31;
      v43 = *(_DWORD *)v31;
      if ( (*(_DWORD *)(v31 + 16) & 1) != 0 )
      {
        if ( *(_DWORD *)(v31 + 28) )
        {
          v33 = *(_QWORD *)(v31 + 136);
          v34 = *(_DWORD *)(v31 + 128);
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            v35 = **(_QWORD **)(v31 + 32);
            McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
              *(unsigned __int16 *)(v35 + 16),
              v31,
              v32,
              *(_QWORD *)(a1 + 16),
              a3[1].LowPart,
              v32,
              v43,
              *(_QWORD *)(v35 + 8),
              *(_QWORD *)(v35 + 24),
              *(_WORD *)(v35 + 16),
              a2[264],
              a2[270],
              *(_DWORD *)(v31 + 60),
              *(_DWORD *)(v31 + 68),
              *(_DWORD *)(v31 + 64),
              *(_DWORD *)(v31 + 72),
              *(_DWORD *)(v31 + 76),
              *(_DWORD *)(v31 + 84),
              *(_DWORD *)(v31 + 80),
              *(_DWORD *)(v31 + 88),
              *(_DWORD *)(v31 + 92),
              *(_DWORD *)(v31 + 100),
              *(_DWORD *)(v31 + 96),
              *(_DWORD *)(v31 + 104),
              *(_DWORD *)(v31 + 116),
              a4,
              1,
              *(_DWORD *)(v31 + 124),
              *(_DWORD *)(v31 + 128));
          }
          for ( j = 0; j < v34; j += 16 )
          {
            v37 = 0;
            v38 = v34 - j;
            if ( v34 - j > 0x10 )
            {
              v39 = 16;
            }
            else
            {
              v39 = v34 - j;
              if ( !v38 )
                goto LABEL_25;
            }
            v31 = 0LL;
            do
            {
              v40 = v37 + j;
              ++v37;
              v23 = 2 * v40;
              v31 += 4LL;
              *(_DWORD *)&v51[v31 + 60] = *(_DWORD *)(v33 + 8 * v23);
              *(_DWORD *)&v50[v31 + 60] = *(_DWORD *)(v33 + 8 * v23 + 8);
              *(_DWORD *)&v49[v31 + 60] = *(_DWORD *)(v33 + 8 * v23 + 4);
              *(_DWORD *)((char *)&v48[19] + v31) = *(_DWORD *)(v33 + 8 * v23 + 12);
            }
            while ( v37 < v39 );
LABEL_25:
            if ( (byte_1C00769C1 & 1) != 0 )
              McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer(
                v23,
                v31,
                v38,
                v38 <= 0x10,
                v39,
                (__int64)v52,
                (__int64)v51,
                (__int64)v50,
                (__int64)v49);
          }
          v6 = a4;
        }
      }
      else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
          v23,
          v31,
          v32,
          *(_QWORD *)(a1 + 16),
          a3[1].LowPart,
          v32,
          v43,
          0,
          0,
          0,
          a2[264],
          a2[270],
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v6,
          0,
          0,
          0);
      }
    }
  }
}
