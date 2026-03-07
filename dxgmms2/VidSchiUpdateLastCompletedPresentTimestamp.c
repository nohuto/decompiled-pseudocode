__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  LARGE_INTEGER *v4; // rsi
  char v6; // r12
  char v7; // bl
  LARGE_INTEGER v8; // rdi
  __int64 v9; // rbp
  LARGE_INTEGER v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  LARGE_INTEGER v14; // r11
  __int64 v15; // r9
  LARGE_INTEGER v16; // r15
  unsigned __int64 v17; // rsi
  unsigned __int64 QuadPart; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  char v27; // bp
  int v28; // esi
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  __int64 *v31; // rcx
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned int i; // esi
  __int64 *v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // rcx
  unsigned int refreshed; // eax
  __int64 v39; // r11
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // rcx
  int v42; // ecx
  unsigned __int64 v43; // r11
  __int16 v44; // r12
  __int64 v45; // rdx
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  LONGLONG v48; // rcx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // r11
  union _LARGE_INTEGER v53; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-70h]
  __int64 v55; // [rsp+60h] [rbp-68h]
  unsigned __int64 v56; // [rsp+68h] [rbp-60h]
  LARGE_INTEGER v57; // [rsp+70h] [rbp-58h]
  LARGE_INTEGER *v58; // [rsp+78h] [rbp-50h]
  __int64 v59; // [rsp+80h] [rbp-48h]
  unsigned int v60; // [rsp+D0h] [rbp+8h]
  int v62; // [rsp+E8h] [rbp+20h]

  *((_QWORD *)&v3 + 1) = a2;
  v4 = *(LARGE_INTEGER **)(a1 + 104);
  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 404);
  v6 = a3;
  v58 = v4;
  v7 = BYTE8(v3);
  v8 = v4[4];
  v9 = gulPriorityToYieldPriorityBand[(_QWORD)v3];
  v62 = v9;
  if ( !(_DWORD)v9 || (_DWORD)v9 == 3 )
    return v3;
  v53.QuadPart = 0LL;
  v10 = KeQueryPerformanceCounter(&v53);
  v14 = v4[23];
  v15 = v9;
  v57 = v10;
  v16 = v10;
  v55 = v9;
  if ( !v14.QuadPart && !v6 )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
        *(_QWORD *)(v8.QuadPart + 16),
        1,
        *(_DWORD *)(a1 + 404),
        v10.QuadPart,
        0,
        0);
LABEL_60:
      v27 = v60;
      goto LABEL_26;
    }
    goto LABEL_41;
  }
  v17 = v10.QuadPart - v14.QuadPart;
  v56 = v10.QuadPart - v14.QuadPart;
  if ( v7 || v6 )
  {
    QuadPart = v53.QuadPart;
  }
  else
  {
    QuadPart = v53.QuadPart;
    if ( is_mul_ok(v17, 0x989680uLL) )
    {
      if ( v53.QuadPart == 10000000 )
      {
        *(_QWORD *)&v3 = 7609472 * v17;
        v19 = 10000000 * v17 / 0x989680;
      }
      else
      {
        *(_QWORD *)&v3 = 10000000 * v17 / v53.QuadPart;
        v19 = v3;
      }
    }
    else
    {
      *(_QWORD *)&v3 = v17 / v53.QuadPart;
      v19 = 10000000 * (v17 / v53.QuadPart) + 10000000 * (v17 % v53.QuadPart) / v53.QuadPart;
    }
    if ( v19 < *(_QWORD *)(v8.QuadPart + 2872) )
      return v3;
    v15 = v9;
  }
  v60 = *(_DWORD *)(v8.QuadPart + 4 * v15 + 204);
  v20 = v17 * v60;
  v3 = v20 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v21 = v20 / 0x64;
  if ( !v21 && !v6 )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         0,
                         DWORD2(v3),
                         QuadPart,
                         *(_QWORD *)(v8.QuadPart + 16),
                         2,
                         *(_DWORD *)(a1 + 404),
                         LOBYTE(v16.LowPart) - LOBYTE(v14.LowPart),
                         0,
                         0);
    return v3;
  }
  v22 = 10000000 * v21;
  v54 = 0LL;
  v23 = 10000000 * v21;
  if ( is_mul_ok(v21, 0x989680uLL) )
  {
    if ( QuadPart == 10000000 )
    {
      v24 = v23 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v25 = v23 / 0x989680;
    }
    else
    {
      *((_QWORD *)&v24 + 1) = v22 % QuadPart;
      v25 = v22 / QuadPart;
    }
  }
  else
  {
    *((_QWORD *)&v24 + 1) = v21 % QuadPart;
    v23 = 10000000 * (v21 / QuadPart);
    v25 = v23 + 10000000 * (v21 % QuadPart) / QuadPart;
  }
  v26 = *(_QWORD *)(v8.QuadPart + 2864);
  v54 = v25;
  if ( v25 > v26 )
  {
    if ( !v6 )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        McTemplateK0pqxxxx_EtwWriteTransfer(
          v23,
          DWORD2(v24),
          QuadPart,
          *(_QWORD *)(v8.QuadPart + 16),
          1,
          *(_DWORD *)(a1 + 404),
          v16.QuadPart,
          v14.QuadPart,
          0);
        goto LABEL_60;
      }
LABEL_41:
      v27 = v60;
      goto LABEL_27;
    }
    v54 = v26;
    if ( is_mul_ok(v26, QuadPart) )
    {
      v21 = v26 * QuadPart / 0x989680;
    }
    else
    {
      v21 = QuadPart * (v26 / 0x989680) + QuadPart * (v26 % 0x989680) / 0x989680;
      v15 = v9;
    }
  }
  v27 = 0;
  v28 = (1 << *(_DWORD *)(a1 + 404)) - 1;
  v29 = 0LL;
  if ( !*(_DWORD *)(v8.QuadPart + 80) )
    goto LABEL_27;
  v30 = v56;
  do
  {
    v31 = *(__int64 **)(v8.QuadPart + 632);
    if ( (unsigned int)v29 < *(_DWORD *)(v8.QuadPart + 704) )
      v31 += v29;
    v32 = *v31;
    if ( (v28 & *(_DWORD *)(*v31 + 1768)) == 0 && (v28 & *(_DWORD *)(v32 + 1772)) == 0 )
      goto LABEL_23;
    v39 = v55;
    v40 = *(_QWORD *)(v32 + 8 * v55 + 1968);
    v41 = v30 * (100 - v60) / 0x64;
    if ( v40 <= v41 && !v6 )
    {
      if ( (byte_1C00769C1 & 1) == 0 )
      {
LABEL_23:
        LOBYTE(v33) = v54;
        goto LABEL_24;
      }
      v59 = 0LL;
      if ( is_mul_ok(v30, 0x989680uLL) )
      {
        v43 = v30 * (unsigned __int128)0x989680uLL / QuadPart;
      }
      else
      {
        v41 = 10000000 * (v30 / QuadPart);
        v43 = v41 + 10000000 * (v30 % QuadPart) / QuadPart;
      }
      v44 = *(_WORD *)(v32 + 4);
      v59 = 0LL;
      if ( is_mul_ok(v40, 0x989680uLL) )
      {
        v45 = v40 * (unsigned __int128)0x989680uLL % QuadPart;
        v46 = v40 * (unsigned __int128)0x989680uLL / QuadPart;
      }
      else
      {
        v45 = v40 % QuadPart;
        v41 = 10000000 * (v40 / QuadPart);
        v46 = v41 + 10000000 * (v40 % QuadPart) / QuadPart;
      }
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v41,
        v45,
        QuadPart,
        *(_QWORD *)(v8.QuadPart + 16),
        5,
        *(_DWORD *)(a1 + 404),
        v46,
        v44,
        v43);
LABEL_78:
      QuadPart = v53.QuadPart;
      v6 = a3;
      goto LABEL_23;
    }
    v33 = v54;
    v27 = 1;
    *(_BYTE *)(v32 + 2024) = 1;
    *(_QWORD *)(v32 + 2000) = 0LL;
    *(_QWORD *)(v32 + 2016) = v33;
    *(_QWORD *)(v32 + 2008) = v21;
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      LODWORD(v48) = v53.LowPart;
      if ( is_mul_ok(v30, 0x989680uLL) )
        v50 = v30 * (unsigned __int128)0x989680uLL / (unsigned __int64)v53.QuadPart;
      else
        v50 = 10000000 * (v30 / v53.QuadPart) + 10000000 * (v30 % v53.QuadPart) / v53.QuadPart;
      v51 = *(_QWORD *)(v32 + 8 * v39 + 1968);
      if ( is_mul_ok(v51, 0x989680uLL) )
      {
        v47 = v51 * (unsigned __int128)0x989680uLL % (unsigned __int64)v53.QuadPart;
        v49 = v51 * (unsigned __int128)0x989680uLL / (unsigned __int64)v53.QuadPart;
      }
      else
      {
        v47 = v51 % v53.QuadPart;
        v48 = 10000000 * (v51 / v53.QuadPart);
        v49 = v48 + 10000000 * (v51 % v53.QuadPart) / v53.QuadPart;
      }
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v48,
        v47,
        v49,
        *(_QWORD *)(v8.QuadPart + 16),
        0,
        *(_DWORD *)(a1 + 404),
        v49,
        *(_WORD *)(v32 + 4),
        v50);
      goto LABEL_78;
    }
    QuadPart = v53.QuadPart;
LABEL_24:
    v29 = (unsigned int)(v29 + 1);
  }
  while ( (unsigned int)v29 < *(_DWORD *)(v8.QuadPart + 80) );
  v16 = v57;
  if ( v27 )
  {
    v42 = *(_DWORD *)(a1 + 404) - 1;
    *(_DWORD *)(v8.QuadPart + 200) = v42;
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(
        v42,
        (unsigned int)&EventYieldStartAdapter,
        QuadPart,
        *(_QWORD *)(v8.QuadPart + 16),
        v42,
        v33);
  }
LABEL_26:
  v15 = v55;
LABEL_27:
  for ( i = 0; i < *(_DWORD *)(v8.QuadPart + 80); ++i )
  {
    v35 = *(__int64 **)(v8.QuadPart + 632);
    if ( i < *(_DWORD *)(v8.QuadPart + 704) )
      v35 += i;
    v36 = *v35;
    *(_QWORD *)(v36 + 8 * v15 + 1936) = 0LL;
    *(_QWORD *)(v36 + 8 * v15 + 1968) = 0LL;
    *(LARGE_INTEGER *)(v36 + 8 * v15 + 1904) = v16;
    v37 = *(_QWORD *)(v36 + 8LL * *(unsigned int *)(v36 + 1560) + 1568);
    if ( v37 && gulPriorityToYieldPriorityBand[*(unsigned int *)(v37 + 404)] >= v62 && v16.QuadPart )
      *(LARGE_INTEGER *)(v36 + 8 * v15 + 1936) = v16;
    if ( v27
      && *(_BYTE *)(v36 + 2024)
      && !*(_QWORD *)(v36 + 2000)
      && v37
      && *(_DWORD *)(v37 + 404) <= *(_DWORD *)(v8.QuadPart + 200) )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v36);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v36,
        (LARGE_INTEGER)v16.QuadPart,
        (union _LARGE_INTEGER)v53.QuadPart,
        refreshed);
      v15 = v62;
    }
  }
  *(_QWORD *)&v3 = v58;
  v58[23] = v16;
  return v3;
}
