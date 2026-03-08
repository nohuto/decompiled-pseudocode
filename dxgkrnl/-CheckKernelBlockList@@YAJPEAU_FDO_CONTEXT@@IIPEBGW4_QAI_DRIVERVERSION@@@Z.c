/*
 * XREFs of ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DEBC
 * Callers:
 *     DxgkInitializeBlockList @ 0x1C020DD10 (DxgkInitializeBlockList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C00271D8 (wcscmp_0.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C020E1FC (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C020E880 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C020EA5C (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall CheckKernelBlockList(
        struct _FDO_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  unsigned int BlockListStrings; // eax
  __int64 v7; // r15
  unsigned int v8; // edi
  struct _UNICODE_STRING *v10; // r14
  unsigned int v11; // esi
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  const wchar_t *v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // esi
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  const wchar_t *v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // esi
  unsigned __int16 v26; // ax
  unsigned __int64 v27; // r12
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  const wchar_t *v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // esi
  unsigned __int16 v33; // ax
  unsigned __int64 v34; // r12
  __int64 v35; // r13
  unsigned __int64 v36; // rax
  const wchar_t *v37; // rcx
  __int64 v38; // rdi
  unsigned int v39; // esi
  unsigned __int16 v40; // ax
  unsigned __int64 v41; // r12
  __int64 v42; // r13
  unsigned __int64 v43; // rax
  const wchar_t *v44; // rcx
  __int64 v45; // rdi
  int v46; // eax
  struct _UNICODE_STRING *v47; // rbx
  __int64 v48; // rsi
  unsigned int v49[4]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v50; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING v51; // [rsp+70h] [rbp-90h] BYREF

  v49[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Kernel",
                       a2,
                       a3,
                       a4,
                       a5,
                       v49,
                       &v51);
  v7 = v49[0];
  v8 = BlockListStrings;
  if ( v49[0] >= 0x14 )
  {
    WdLogSingleEntry1(1LL, 720LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"foundStringCount < MAX_TRUE_CONDITIONS",
      720LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v7 )
  {
    v10 = &v51;
    *(_QWORD *)v49 = v7;
    do
    {
      v11 = 0;
      v12 = _mm_cvtsi128_si32(*(__m128i *)v10);
      v50 = *(__m128i *)v10;
      v13 = v12;
      if ( v12 )
      {
        v14 = v50.m128i_i64[1];
        v15 = 0LL;
        do
        {
          v16 = (const wchar_t *)(v15 + v14);
          v17 = -1LL;
          do
            ++v17;
          while ( v16[v17] );
          if ( !(_DWORD)v17 )
            break;
          if ( !wcscmp_0(v16, L"GPU_PV_ALL") )
          {
            *((_DWORD *)a1 + 1426) |= 0x80u;
            break;
          }
          v11 += v17 + 1;
          v15 = 2LL * v11;
        }
        while ( v15 < v13 );
      }
      v18 = 0;
      v19 = _mm_cvtsi128_si32(*(__m128i *)v10);
      v50 = *(__m128i *)v10;
      v20 = v19;
      if ( v19 )
      {
        v21 = v50.m128i_i64[1];
        v22 = 0LL;
        do
        {
          v23 = (const wchar_t *)(v22 + v21);
          v24 = -1LL;
          do
            ++v24;
          while ( v23[v24] );
          if ( !(_DWORD)v24 )
            break;
          if ( !wcscmp_0(v23, L"GPU_PV_HIGH_SECURITY") )
          {
            *((_DWORD *)a1 + 1426) |= 0x200u;
            break;
          }
          v18 += v24 + 1;
          v22 = 2LL * v18;
        }
        while ( v22 < v20 );
      }
      v25 = 0;
      v26 = _mm_cvtsi128_si32(*(__m128i *)v10);
      v50 = *(__m128i *)v10;
      v27 = v26;
      if ( v26 )
      {
        v28 = v50.m128i_i64[1];
        v29 = 0LL;
        do
        {
          v30 = (const wchar_t *)(v29 + v28);
          v31 = -1LL;
          do
            ++v31;
          while ( v30[v31] );
          if ( !(_DWORD)v31 )
            break;
          if ( !wcscmp_0(v30, L"GPU_P_ALL") )
          {
            *((_DWORD *)a1 + 1426) |= 0x100u;
            break;
          }
          v25 += v31 + 1;
          v29 = 2LL * v25;
        }
        while ( v29 < v27 );
      }
      v32 = 0;
      v33 = _mm_cvtsi128_si32(*(__m128i *)v10);
      v50 = *(__m128i *)v10;
      v34 = v33;
      if ( v33 )
      {
        v35 = v50.m128i_i64[1];
        v36 = 0LL;
        do
        {
          v37 = (const wchar_t *)(v36 + v35);
          v38 = -1LL;
          do
            ++v38;
          while ( v37[v38] );
          if ( !(_DWORD)v38 )
            break;
          if ( !wcscmp_0(v37, L"DISABLE_MPO") )
          {
            *((_DWORD *)a1 + 1426) |= 0x400u;
            break;
          }
          v32 += v38 + 1;
          v36 = 2LL * v32;
        }
        while ( v36 < v34 );
      }
      v39 = 0;
      v40 = _mm_cvtsi128_si32(*(__m128i *)v10);
      v50 = *(__m128i *)v10;
      v41 = v40;
      if ( v40 )
      {
        v42 = v50.m128i_i64[1];
        v43 = 0LL;
        do
        {
          v44 = (const wchar_t *)(v43 + v42);
          v45 = -1LL;
          do
            ++v45;
          while ( v44[v45] );
          if ( !(_DWORD)v45 )
            break;
          if ( !wcscmp_0(v44, L"DISABLE_HWSCH") )
          {
            *((_DWORD *)a1 + 1426) |= 0x800u;
            break;
          }
          v39 += v45 + 1;
          v43 = 2LL * v39;
        }
        while ( v43 < v41 );
      }
      ++v10;
      --*(_QWORD *)v49;
    }
    while ( *(_QWORD *)v49 );
    v49[0] = 0;
    v46 = ConvertStringsToOneMultiString(&v51, v7, (unsigned __int16 **)a1 + 714, v49);
    v8 = v46;
    if ( v46 < 0 )
    {
      if ( v46 == -1073741637 )
        *((_BYTE *)a1 + 5724) = 1;
    }
    else
    {
      *((_DWORD *)a1 + 1430) = 2 * v49[0];
    }
    v47 = &v51;
    v48 = v7;
    do
    {
      DxgkFreeUnicodeString(v47++);
      --v48;
    }
    while ( v48 );
  }
  return v8;
}
