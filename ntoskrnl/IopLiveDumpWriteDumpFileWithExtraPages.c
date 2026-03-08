/*
 * XREFs of IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094C9E8
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     RtlClearAllBitsEx @ 0x1402D4520 (RtlClearAllBitsEx.c)
 *     RtlMergeBitMapsEx @ 0x14039F630 (RtlMergeBitMapsEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x14055BBE0 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlNumberOfSetBitsEx @ 0x1405A6770 (RtlNumberOfSetBitsEx.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x14094AF74 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094B0B8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetExtraMergePages @ 0x14094B4D0 (IopLiveDumpGetExtraMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x14094B7E0 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x14094C450 (IopLiveDumpWriteBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithExtraPages(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  _OWORD *Pool2; // r13
  int SecureDumpHeader; // edi
  __int64 *v6; // rdi
  LARGE_INTEGER v7; // rax
  void *v8; // r12
  __int64 v9; // rax
  char ExtraMergePages; // al
  int v11; // r15d
  __int64 *v12; // r9
  __int64 *v13; // rax
  int v14; // r8d
  _QWORD *v15; // r9
  _QWORD *v16; // r10
  char v17; // r11
  ULONG v18; // edi
  __int64 v19; // r14
  __int64 v20; // r15
  char v21; // al
  char v22; // r14
  bool v23; // zf
  char *v24; // rax
  char *v25; // rdx
  struct _MDL *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  int v29; // r14d
  __int32 v30; // eax
  __int128 v31; // xmm0
  int v32; // r15d
  unsigned int v33; // edi
  __int32 v34; // eax
  __int128 v35; // xmm0
  __int32 v36; // eax
  __int128 v37; // xmm0
  LARGE_INTEGER v38; // rdx
  _DWORD *v39; // rax
  void *v40; // r14
  ULONG v41; // r8d
  char v43; // [rsp+38h] [rbp-89h]
  char v44; // [rsp+39h] [rbp-88h]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-81h] BYREF
  int v46; // [rsp+48h] [rbp-79h] BYREF
  int v47; // [rsp+4Ch] [rbp-75h] BYREF
  char *v48; // [rsp+50h] [rbp-71h] BYREF
  char *v49; // [rsp+58h] [rbp-69h] BYREF
  _QWORD *v50; // [rsp+60h] [rbp-61h]
  __int64 v51; // [rsp+68h] [rbp-59h]
  __int64 v52; // [rsp+70h] [rbp-51h] BYREF
  __int64 *v53; // [rsp+78h] [rbp-49h]
  __int64 v54; // [rsp+80h] [rbp-41h] BYREF
  __int64 *v55; // [rsp+88h] [rbp-39h]
  PVOID Buffer; // [rsp+90h] [rbp-31h]
  __int64 v57; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-11h]
  void *v60; // [rsp+B8h] [rbp-9h]
  __m256i v61; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v62; // [rsp+E0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 1128);
  v2 = *(_QWORD *)(a1 + 560);
  ByteOffset.QuadPart = 0LL;
  v49 = 0LL;
  v54 = 0LL;
  Pool2 = 0LL;
  v46 = 0;
  v48 = 0LL;
  v52 = 0LL;
  v47 = 0;
  v60 = 0LL;
  v58 = v1;
  v62 = 0LL;
  memset(&v61, 0, sizeof(v61));
  if ( !v1 )
    goto LABEL_2;
  v6 = *(__int64 **)(a1 + 1136);
  v55 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 984) )
    v7.QuadPart = *(_QWORD *)(v2 + 8224) + *(unsigned int *)(a1 + 992);
  else
    v7 = *(LARGE_INTEGER *)(v2 + 8224);
  v8 = *(void **)(a1 + 64);
  ByteOffset = v7;
  v57 = -1LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 624);
  v51 = 0LL;
  v43 = 0;
  if ( *(_QWORD *)(a1 + 552) != v9 )
    RtlClearAllBitsEx(a1 + 616);
  if ( *(_QWORD *)(a1 + 624) != *(_QWORD *)(a1 + 640) )
    RtlClearAllBitsEx(a1 + 632);
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  IopLiveDumpGetNtMergePages(a1, (int)v6, &v48, &v47, &v52);
  v53 = v6;
  ExtraMergePages = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v1, &v49, &v46, &v54);
  v11 = v46;
  v44 = ExtraMergePages;
  v12 = (__int64 *)v1;
  v50 = (_QWORD *)v1;
  while ( v11 || v47 )
  {
    if ( v47 )
    {
      v13 = &v57;
      if ( v11 )
        v13 = v12;
      v50 = v13;
    }
    else
    {
      v53 = &v57;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_92;
    if ( !v11 || v15[v11 - 1] >= *v16 )
    {
      if ( v14 && v16[v14 - 1] < *v15 )
      {
        v19 = v52;
        Buffer = v48;
        v18 = v14 << 12;
        v43 = 1;
        v51 = v52;
        IopLiveDumpGetNtMergePages(a1, (int)v55, &v48, &v47, &v52);
        v53 = v55;
        goto LABEL_39;
      }
      v22 = 0;
      v23 = *v16 == *v15;
      if ( *v16 < *v15 )
      {
        v24 = v48;
        Buffer = v48;
        v18 = 4096;
        goto LABEL_31;
      }
      v25 = v49;
      v18 = 4096;
      Buffer = v49;
      v22 = 1;
      if ( v23 )
      {
        v24 = v48;
LABEL_31:
        v47 = v14 - 1;
        if ( v14 == 1 )
        {
          v43 = 1;
          v51 = v52;
          IopLiveDumpGetNtMergePages(a1, (int)v55, &v48, &v47, &v52);
          v15 = v50;
          v17 = v44;
          v53 = v55;
        }
        else
        {
          v48 = v24 + 4096;
          v53 = v16 + 1;
        }
        if ( !v22 )
          goto LABEL_38;
        v25 = v49;
      }
      v23 = v11-- == 1;
      v46 = v11;
      if ( !v23 )
      {
        v49 = v25 + 4096;
        v50 = v15 + 1;
LABEL_38:
        v19 = v51;
        goto LABEL_39;
      }
      goto LABEL_23;
    }
    Buffer = v49;
    v18 = v11 << 12;
LABEL_23:
    v19 = v54;
    v20 = v58;
    v43 = v17;
    v51 = v54;
    v21 = IopLiveDumpGetExtraMergePages((_QWORD *)a1, v58, &v49, &v46, &v54);
    v50 = (_QWORD *)v20;
    v11 = v46;
    v44 = v21;
LABEL_39:
    SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Buffer, v18, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_92;
    v12 = v50;
    if ( v43 )
    {
      v26 = *(struct _MDL **)(*(_QWORD *)(a1 + 760) + 8 * v19);
      if ( v26 )
      {
        MmFreePagesFromMdl(v26);
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v19), 0x706D644Cu);
        *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v19) = 0LL;
        v27 = *(_QWORD *)(a1 + 760);
LABEL_46:
        *(_QWORD *)(v27 + 8 * v19) = 0LL;
        goto LABEL_47;
      }
      if ( !*(_QWORD *)(a1 + 816) && !*(_QWORD *)(a1 + 856) )
      {
        MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v19), (unsigned int)BufferChunkSizeInBytes);
        v27 = *(_QWORD *)(a1 + 752);
        goto LABEL_46;
      }
LABEL_47:
      v12 = v50;
      v43 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 984) )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 4096LL, 1886217292LL);
    if ( !Pool2 )
    {
LABEL_2:
      SecureDumpHeader = -1073741670;
      goto LABEL_92;
    }
  }
  v28 = 1;
  LODWORD(v62) = 1886221636;
  *(_QWORD *)((char *)&v62 + 4) = 0x10626F6C42LL;
  HIDWORD(v62) = NtBuildNumber;
  if ( *(_BYTE *)(a1 + 984) )
  {
    *Pool2 = v62;
    goto LABEL_54;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v62, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v28 = 0;
LABEL_54:
    v29 = 32;
    v30 = *(_DWORD *)(a1 + 184);
    v31 = *(_OWORD *)(a1 + 160);
    v61.m256i_i32[0] = 32;
    v61.m256i_i32[5] = v30;
    *(_OWORD *)((char *)v61.m256i_i64 + 4) = v31;
    v61.m256i_i32[7] = 0;
    if ( *(_BYTE *)(a1 + 984) )
    {
      v32 = 4096;
      v61.m256i_i32[6] = 4064 - v28 * 16;
      *(__m256i *)&Pool2[v28] = v61;
      while ( 1 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(v8, Pool2, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_90;
        v32 -= 4096;
        memset(Pool2, 0, 0x1000uLL);
        if ( v29 != v61.m256i_i32[0] )
        {
          v33 = v61.m256i_i32[0] - v29;
          if ( (unsigned int)(v61.m256i_i32[0] - v29) > 0x1000 )
            v33 = 4096;
          memmove(Pool2, &v61.m256i_i8[v29], v33);
          v29 += v33;
        }
        if ( !v32 )
          goto LABEL_65;
      }
    }
    v61.m256i_i32[6] = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
    SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v61, 0x20u, &ByteOffset, a1, 1);
    if ( SecureDumpHeader >= 0 )
    {
      ByteOffset.QuadPart += v61.m256i_u32[6];
LABEL_65:
      SecureDumpHeader = IopLiveDumpWriteBuffer(v8, *(PVOID *)(a1 + 176), *(_DWORD *)(a1 + 184), &ByteOffset, a1, 0);
      if ( SecureDumpHeader >= 0 )
      {
        v34 = *(_DWORD *)(a1 + 1088);
        if ( !v34
          || (v35 = *(_OWORD *)(a1 + 1064),
              v61.m256i_i64[3] = 0LL,
              v61.m256i_i32[0] = 32,
              v61.m256i_i32[5] = v34,
              *(_OWORD *)((char *)v61.m256i_i64 + 4) = v35,
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v61, 0x20u, &ByteOffset, a1, 0),
              SecureDumpHeader >= 0)
          && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                   v8,
                                   *(PVOID *)(a1 + 1080),
                                   *(_DWORD *)(a1 + 1088),
                                   &ByteOffset,
                                   a1,
                                   0),
              SecureDumpHeader >= 0) )
        {
          v36 = *(_DWORD *)(a1 + 1040);
          if ( !v36
            || (v37 = *(_OWORD *)(a1 + 1016),
                v61.m256i_i64[3] = 0LL,
                v61.m256i_i32[0] = 32,
                v61.m256i_i32[5] = v36,
                *(_OWORD *)((char *)v61.m256i_i64 + 4) = v37,
                SecureDumpHeader = IopLiveDumpWriteBuffer(v8, &v61, 0x20u, &ByteOffset, a1, 0),
                SecureDumpHeader >= 0)
            && (SecureDumpHeader = IopLiveDumpWriteBuffer(
                                     v8,
                                     *(PVOID *)(a1 + 1032),
                                     *(_DWORD *)(a1 + 1040),
                                     &ByteOffset,
                                     a1,
                                     0),
                SecureDumpHeader >= 0) )
          {
            if ( *(_QWORD *)(a1 + 552) != *(_QWORD *)(a1 + 624) )
              RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 544), (__int64 *)(a1 + 616));
            if ( *(_QWORD *)(a1 + 624) != *(_QWORD *)(a1 + 640) )
              RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 544), (__int64 *)(a1 + 632));
            *(_DWORD *)(v2 + 0x2000) = 1347241043;
            *(_DWORD *)(v2 + 8196) = 1347245380;
            *(_QWORD *)(v2 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
            if ( *(_BYTE *)(a1 + 984) )
              *(_QWORD *)(v2 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 992);
            else
              *(LARGE_INTEGER *)(v2 + 4000) = ByteOffset;
            *(_DWORD *)(v2 + 4176) |= 0x10u;
            if ( *(_BYTE *)(a1 + 984) )
            {
              v38.QuadPart = *(unsigned int *)(a1 + 992);
              ByteOffset = v38;
              v39 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ExAllocatePool2)(
                                64LL,
                                (LARGE_INTEGER)v38.QuadPart,
                                1886217292LL);
              v40 = v39;
              if ( !v39 )
              {
                SecureDumpHeader = -1073741670;
                goto LABEL_90;
              }
              SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v2, v39, *(_DWORD *)(a1 + 992));
              if ( SecureDumpHeader >= 0 )
                goto LABEL_85;
            }
            else
            {
              v40 = v60;
              ByteOffset.QuadPart = 0LL;
LABEL_85:
              SecureDumpHeader = IopLiveDumpWriteBuffer(v8, (PVOID)v2, *(_DWORD *)(v2 + 8224), &ByteOffset, a1, 0);
              if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 984) )
              {
                v41 = *(_DWORD *)(a1 + 992);
                ByteOffset.QuadPart = 0LL;
                SecureDumpHeader = IopLiveDumpWriteBuffer(v8, v40, v41, &ByteOffset, a1, 1);
              }
              if ( !v40 )
                goto LABEL_90;
            }
            ExFreePoolWithTag(v40, 0);
          }
        }
      }
    }
  }
LABEL_90:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_92:
  IopLiveDumpFreeDumpBuffers(a1);
  return (unsigned int)SecureDumpHeader;
}
