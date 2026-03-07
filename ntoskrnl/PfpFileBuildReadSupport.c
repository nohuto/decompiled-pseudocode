__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, _DWORD *a2, int a3, char a4, __int64 a5)
{
  void *v5; // r15
  __int64 v8; // rcx
  __int64 v11; // rdx
  int v12; // edi
  ULONG AllocationAttributes; // r9d
  __m128i *v14; // rbx
  unsigned int v15; // r8d
  int v16; // edi
  void *FileHandle; // r12
  __m128i v18; // xmm6
  unsigned __int64 v19; // rbx
  NTSTATUS v20; // eax
  __int64 v21; // r8
  __int64 v22; // rcx
  HANDLE v23; // rax
  __int128 v24; // xmm0
  void *v25; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  void *v29; // [rsp+48h] [rbp-61h] BYREF
  __int128 v30; // [rsp+50h] [rbp-59h] BYREF
  __m256i v31; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  ULONG v33; // [rsp+108h] [rbp+5Fh]
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+120h] [rbp+77h] BYREF

  SectionHandle = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v35 = 0;
  memset(&v31, 0, 24);
  v8 = *a1;
  v11 = a1[1];
  v31.m256i_i64[3] = 0x200000000LL;
  v12 = a4 != 0 ? 32 : 129;
  memset(&ObjectAttributes, 0, 44);
  AllocationAttributes = a4 != 0 ? 285212672 : 0x4000000;
  v33 = AllocationAttributes;
  v30 = 0LL;
  v14 = (__m128i *)(v11 + 0x5555555555555560LL * (((__int64)a2 - *(unsigned int *)(v8 + 40) - v8) >> 4));
  if ( v11 && _bittest64(&v14[1].m128i_i64[1], 0x22u) )
  {
    v28 = v14[1];
    v18 = *v14;
    v31.m256i_i64[2] = v14[1].m128i_i64[0];
    v19 = _mm_srli_si128(v28, 8).m128i_u64[0] | 0x1000000000LL;
    *(__m128i *)v31.m256i_i8 = v18;
    FileHandle = (void *)v18.m128i_i64[0];
    v31.m256i_i64[3] = v19;
  }
  else
  {
    PfpFileSetupObjectAttributes(
      (_DWORD)a1,
      (_DWORD)a2,
      a3,
      (unsigned int)&v30,
      (__int64)&ObjectAttributes,
      (__int64)&v35);
    v16 = PfpOpenHandleCreate(
            (__int64)&v31,
            a1[5],
            (__int64)ObjectAttributes.ObjectName,
            (__int64)ObjectAttributes.RootDirectory,
            v12,
            v35,
            0x80u,
            a1[2] + ((unsigned __int64)v15 << 6));
    if ( v16 < 0 )
    {
      v19 = v31.m256i_u64[3];
      goto LABEL_11;
    }
    FileHandle = (void *)v31.m256i_i64[0];
    v16 = PfpFileCheckAttributesForPrefetch((void *)v31.m256i_i64[0], 21248);
    if ( v16 < 0 )
    {
      v19 = v31.m256i_u64[3];
      goto LABEL_26;
    }
    v18 = *(__m128i *)v31.m256i_i8;
    AllocationAttributes = v33;
    if ( a1[1] )
    {
      v27 = *(__m128i *)&v31.m256i_u64[2];
      *v14 = *(__m128i *)v31.m256i_i8;
      v14[1] = v27;
      v19 = _mm_srli_si128(v27, 8).m128i_u64[0] | 0x1000000000LL;
      v31.m256i_i64[3] = v19;
    }
    else
    {
      v19 = v31.m256i_u64[3];
    }
  }
  if ( (*a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(_mm_srli_si128(v18, 8).m128i_u64[0] + 40) + 16LL) )
  {
    v16 = -1073741791;
    goto LABEL_11;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, FileHandle);
  v16 = v20;
  if ( v20 >= 0 )
  {
    LOBYTE(v21) = a4;
    v16 = PfpFileBuildReadList(a1, a2, v21, &v29);
    if ( v16 < 0 )
    {
      v5 = v29;
    }
    else
    {
      v22 = a5;
      v23 = SectionHandle;
      v19 = 0x200000000LL;
      v24 = *(_OWORD *)&v31.m256i_u64[2];
      v31.m256i_i64[0] = 0LL;
      SectionHandle = 0LL;
      *(_QWORD *)(a5 + 40) = v23;
      v16 = 0;
      v25 = v29;
      *(__m128i *)(v22 + 8) = v18;
      *(_QWORD *)v22 = v25;
      *(_OWORD *)(v22 + 24) = v24;
      v31.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)&v31.m256i_u64[1] = 0LL;
      *(_QWORD *)(v22 + 48) = a2;
    }
    goto LABEL_11;
  }
  if ( a4 && v20 == -1073740749 )
  {
LABEL_11:
    if ( (v19 & 0x100000000LL) == 0 )
      goto LABEL_12;
  }
LABEL_26:
  if ( (*a2 & 8) == 0 )
  {
    *a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_12:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( (v19 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&v31, a1[5]);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v16;
}
