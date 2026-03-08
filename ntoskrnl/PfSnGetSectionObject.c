/*
 * XREFs of PfSnGetSectionObject @ 0x1406A48D0
 * Callers:
 *     PfSnPopulateReadList @ 0x1406A42B0 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x1402DC2D0 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x1406A4C74 (PfSnIsSectionPrefetchedAfterPhase.c)
 *     PfpOpenHandleCreate @ 0x1406A5020 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1406A5824 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     PfSnPrefetchFileMetadata @ 0x140789C64 (PfSnPrefetchFileMetadata.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     NtCreateSection @ 0x1407D1770 (NtCreateSection.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  __int128 v11; // xmm0
  __int64 v12; // r13
  HANDLE v15; // r15
  __int64 v16; // rax
  ULONG AllocationAttributes; // r8d
  __int64 v18; // rbx
  NTSTATUS v19; // edi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // r8
  NTSTATUS v28; // r10d
  unsigned __int8 v29; // r8
  int v30; // edx
  bool v32; // zf
  PVOID Object; // [rsp+40h] [rbp-A1h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-99h] BYREF
  __int64 v35; // [rsp+50h] [rbp-91h] BYREF
  __m256i v36; // [rsp+58h] [rbp-89h] BYREF
  __int64 v37; // [rsp+78h] [rbp-69h] BYREF
  _QWORD *v38; // [rsp+80h] [rbp-61h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-59h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-19h]

  v11 = 0LL;
  v37 = a3;
  *a9 = 0LL;
  v41 = 0LL;
  v12 = 0x200000000LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v15 = 0LL;
  v38 = a9;
  *a10 = 0;
  v16 = *(_QWORD *)a1;
  v35 = 0LL;
  memset(&v36, 0, 24);
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  v36.m256i_i64[3] = 0x200000000LL;
  v40 = 0LL;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, 32);
  LODWORD(Object) = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v16 + 88) )
  {
    v19 = -1073741811;
    goto LABEL_34;
  }
  v18 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( !_bittest64((const signed __int64 *)(v18 + 24), 0x22u) )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v32 = *(_QWORD *)(a4 + 24) == 0LL;
      v41 = *(_QWORD *)(a4 + 24);
      v40 = 0x100000003uLL;
      if ( !v32 )
        PfSnPrefetchFileMetadata(a1, *(_QWORD *)(a2 + 32), &v40, 0LL, 1, a8);
    }
    v19 = PfpOpenHandleCreate((unsigned int)&v36, *((_QWORD *)a1 + 1), v37, *(_QWORD *)(a2 + 64), 161, 64, 128, a2 + 32);
    if ( v19 < 0
      || (v19 = PfpFileCheckAttributesForPrefetch(
                  (void *)v36.m256i_i64[0],
                  (((dword_140C64C00 & 0x10) == 0) << 14) + 4864),
          v19 < 0) )
    {
      v12 = v36.m256i_i64[3];
      goto LABEL_34;
    }
    if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31)
      && (int)IopQueryXxxInformation((PVOID)v36.m256i_i64[1], (__int64)&v35, (__int64)&v37, 1) >= 0 )
    {
      v20 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
      v21 = *((_QWORD *)a1 + 14);
      v22 = 3 * v20;
      *(_QWORD *)(v21 + 8 * v22 + 12) = v35;
      LODWORD(v20) = v36.m256i_i32[6];
      *(_QWORD *)(v21 + 8 * v22) = *(_QWORD *)(v36.m256i_i64[1] + 24);
      *(_DWORD *)(v21 + 8 * v22 + 8) = v20;
    }
    v15 = SectionHandle;
    v23 = *(_OWORD *)&v36.m256i_u64[2];
    AllocationAttributes = (unsigned int)Object;
    *(_OWORD *)v18 = *(_OWORD *)v36.m256i_i8;
    memset(&v36, 0, 24);
    v11 = 0LL;
    v36.m256i_i64[3] = 0x200000000LL;
    *(_OWORD *)(v18 + 16) = v23;
  }
  if ( a7 )
  {
    if ( *(_QWORD *)(v18 + 32) )
    {
      v24 = a5;
      goto LABEL_26;
    }
  }
  else if ( *(_QWORD *)(v18 + 40) )
  {
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      goto LABEL_16;
LABEL_17:
    *v38 = *(_QWORD *)(v18 + 8);
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v25)
      && !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, v27)
      && ((v29 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 || a7 != v28) )
    {
      *(_DWORD *)(v18 + 48) |= 4u;
    }
    v19 = v28;
    goto LABEL_32;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = v11;
  v19 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, *(HANDLE *)v18);
  if ( v19 >= 0 )
  {
    v15 = SectionHandle;
    Object = 0LL;
    v19 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v19 < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_32;
    }
    v24 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v18 + 40) = Object;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      {
LABEL_16:
        *(_DWORD *)(v18 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v18 + 32) != v26
        || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v25)
        && ((unsigned __int8)v25 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 )
      {
        goto LABEL_17;
      }
      *(_DWORD *)(v18 + 48) |= 2u;
LABEL_28:
      *a10 = v30;
      goto LABEL_17;
    }
    *(_QWORD *)(v18 + 32) = Object;
LABEL_26:
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v24) )
      goto LABEL_17;
    *(_DWORD *)(v18 + 48) |= v30;
    goto LABEL_28;
  }
  v15 = SectionHandle;
LABEL_32:
  if ( v15 )
    NtClose(v15);
LABEL_34:
  if ( (v12 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v36, *((_QWORD *)a1 + 1));
  return (unsigned int)v19;
}
