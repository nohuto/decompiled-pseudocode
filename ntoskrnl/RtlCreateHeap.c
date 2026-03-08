/*
 * XREFs of RtlCreateHeap @ 0x14078AD90
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     RtlpHpLegacyGetEnvHandle @ 0x1402F78C0 (RtlpHpLegacyGetEnvHandle.c)
 *     RtlpHpFixedHeapCreate @ 0x1402F78D8 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x1402F7A8C (RtlpHpConvertCreationFlags.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14030B578 (RtlpHeapGenerateRandomValue64.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x140412770 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpCreateHeapEncoding @ 0x1405A9B40 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x1405AB4DC (RtlpInitializeHeapSegment.c)
 *     RtlpHeapExceptionFilter @ 0x1405B276C (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405B2C0C (RtlpHeapHandleError.c)
 *     RtlpPopulateListIndex @ 0x1405B3494 (RtlpPopulateListIndex.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  unsigned __int64 InitialReserve; // r15
  struct _ERESOURCE *v10; // r12
  unsigned __int64 v11; // rdx
  int v12; // r8d
  void *v13; // rdi
  struct _ERESOURCE *v14; // rcx
  ULONG v16; // ecx
  ULONG v17; // ecx
  int v18; // edx
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rdx
  ULONG_PTR v27; // rcx
  unsigned __int64 v28; // r8
  int v29; // r13d
  char *v30; // rsi
  char *v31; // r8
  ULONG_PTR v32; // rcx
  char *v33; // rdx
  __int64 v34; // rdi
  unsigned __int64 v35; // rdi
  unsigned int v36; // r13d
  __int64 v37; // r9
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _DWORD *v42; // rcx
  PVOID v43; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-1D0h]
  ULONG_PTR v45; // [rsp+50h] [rbp-1C8h] BYREF
  int v46; // [rsp+58h] [rbp-1C0h]
  ULONG_PTR v47; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID v48; // [rsp+68h] [rbp-1B0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-1A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-1A0h] BYREF
  ULONG_PTR v51; // [rsp+80h] [rbp-198h] BYREF
  __int64 v52; // [rsp+88h] [rbp-190h]
  __int64 v53; // [rsp+90h] [rbp-188h]
  __int64 v54; // [rsp+98h] [rbp-180h]
  __int64 v55; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-170h]
  __int64 v57[2]; // [rsp+B0h] [rbp-168h] BYREF
  __int128 MemoryInformation; // [rsp+C0h] [rbp-158h] BYREF
  __int128 v59; // [rsp+D0h] [rbp-148h]
  __int128 v60; // [rsp+E0h] [rbp-138h]
  _OWORD v61[7]; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v62; // [rsp+160h] [rbp-B8h] BYREF
  __int128 v63; // [rsp+170h] [rbp-A8h]
  __int128 v64; // [rsp+180h] [rbp-98h]
  _QWORD v65[8]; // [rsp+190h] [rbp-88h] BYREF

  InitialReserve = ReserveSize;
  BaseAddress = (PVOID)ReserveSize;
  v44 = (unsigned __int64)Lock;
  v52 = (__int64)HeapBase;
  RegionSize = (ULONG_PTR)Lock;
  v48 = 0LL;
  LODWORD(v45) = NtGlobalFlag;
  MemoryInformation = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v46 = 0;
  v47 = 0LL;
  memset(v65, 0, sizeof(v65));
  v43 = 0LL;
  v10 = 0LL;
  if ( (Flags & 0x100) == 0 )
  {
    if ( (Flags & 0x200) != 0 )
      goto LABEL_14;
    if ( (Flags & 0x10000000) == 0 )
    {
      v16 = Flags & 0xFFF80C00;
      if ( RtlpHeapErrorHandlerThreshold < 2 )
      {
        if ( v16 )
          Flags &= 0x7F3FFu;
      }
      else if ( v16 )
      {
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        RtlpHeapHandleError();
      }
    }
    memset(&v61[1], 0, 0x60uLL);
    if ( Parameters && Parameters->Length == 96 )
      *(struct _RTL_HEAP_PARAMETERS *)&v61[1] = *Parameters;
    v17 = Flags | 0x20;
    if ( (v45 & 0x10) == 0 )
      v17 = Flags;
    v18 = v17 | 0x40;
    if ( (v45 & 0x20) == 0 )
      v18 = v17;
    v19 = v18 | 0x80;
    if ( (v45 & 0x200000) == 0 )
      v19 = v18;
    v20 = *((_QWORD *)&v61[1] + 1);
    if ( !*((_QWORD *)&v61[1] + 1) )
      v20 = qword_140D1D208;
    v54 = v20;
    v21 = *(_QWORD *)&v61[2];
    if ( !*(_QWORD *)&v61[2] )
      v21 = qword_140D1D200;
    v55 = v21;
    v22 = *((_QWORD *)&v61[2] + 1);
    if ( !*((_QWORD *)&v61[2] + 1) )
      v22 = qword_140D1D1F0;
    v56 = v22;
    v23 = *(_QWORD *)&v61[3];
    if ( !*(_QWORD *)&v61[3] )
      v23 = qword_140D1D1F8;
    *(_QWORD *)&v61[0] = v23;
    v24 = qword_140D1BBD0;
    if ( !qword_140D1BBD0 )
    {
      qword_140D1BBD8 = 0x10000LL;
      if ( (int)ZwQuerySystemInformation(0LL, (__int64)v65) < 0 )
        goto LABEL_14;
      v24 = v65[5];
      qword_140D1BBD0 = v65[5];
    }
    v53 = *((_QWORD *)&v61[3] + 1);
    if ( !*((_QWORD *)&v61[3] + 1) )
      v53 = v24 - qword_140D1BBD8 - 4096;
    v25 = *(_QWORD *)&v61[4];
    if ( (unsigned __int64)(*(_QWORD *)&v61[4] - 1LL) > 0xFEFFF )
      v25 = 1044480LL;
    v57[0] = v25;
    if ( CommitSize )
      v26 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v26 = 0x2000LL;
    v47 = v26;
    if ( BaseAddress )
      v27 = ((unsigned __int64)BaseAddress + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v27 = (v26 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v45 = v27;
    v28 = v26;
    if ( v26 > v27 )
    {
      v26 = v27;
      v47 = v27;
      v28 = v27;
    }
    if ( (v19 & 2) == 0 || HeapBase )
    {
      v52 = 0LL;
    }
    else
    {
      v52 = 4096LL;
      v46 = 2;
      if ( v27 - 4096 < v28 )
      {
        v27 = (v27 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v45 = v27;
      }
    }
    if ( !v26 || !v27 )
      goto LABEL_14;
    v29 = 704;
    v14 = (struct _ERESOURCE *)v44;
    if ( (v19 & 1) != 0 )
    {
      if ( v44 )
        goto LABEL_73;
    }
    else
    {
      if ( v44 )
        v19 |= 0x80000000;
      v29 = v44 != 0 ? 704 : 808;
      v10 = (struct _ERESOURCE *)(v44 & -(__int64)(v44 != 0));
    }
    if ( HeapBase )
    {
      if ( *((_QWORD *)&v61[5] + 1) )
      {
        if ( !*((_QWORD *)&v61[4] + 1)
          || !*(_QWORD *)&v61[5]
          || *((_QWORD *)&v61[4] + 1) > *(_QWORD *)&v61[5]
          || (v19 & 2) != 0 )
        {
          goto LABEL_14;
        }
        v48 = HeapBase;
        v30 = (char *)HeapBase + *((_QWORD *)&v61[4] + 1);
        v45 = *(_QWORD *)&v61[5];
        memset(HeapBase, 0, 0x1000uLL);
        v31 = (char *)HeapBase;
      }
      else
      {
        if ( ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               HeapBase,
               MemoryBasicInformation,
               &MemoryInformation,
               0x30uLL,
               0LL) < 0 )
          goto LABEL_14;
        v30 = (char *)MemoryInformation;
        if ( (PVOID)MemoryInformation != HeapBase || (_DWORD)v60 == 0x10000 )
          goto LABEL_14;
        v31 = (char *)MemoryInformation;
        v48 = (PVOID)MemoryInformation;
        if ( (_DWORD)v60 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (BYTE4(v60) & 0x40) == 0 )
            goto LABEL_14;
          memset((void *)MemoryInformation, 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 HeapBase,
                 (MEMORY_INFORMATION_CLASS)3,
                 &v62,
                 0x30uLL,
                 0LL) < 0 )
            goto LABEL_14;
          v45 = v63;
          v47 = *((_QWORD *)&v59 + 1);
          v31 = (char *)v48;
          v30 = (char *)v48 + *((_QWORD *)&v59 + 1);
        }
        else
        {
          v45 = *((_QWORD *)&v59 + 1);
          v32 = v47;
          if ( v47 > *((_QWORD *)&v59 + 1) )
            v32 = *((_QWORD *)&v59 + 1);
          v47 = v32;
          if ( v32 < 0x2000 )
            goto LABEL_14;
        }
      }
      v46 |= 1u;
      v33 = (char *)HeapBase;
      v43 = HeapBase;
      goto LABEL_93;
    }
    BaseAddress = 0LL;
    if ( !*((_QWORD *)&v61[5] + 1) )
    {
      v51 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
      RegionSize = v45 + v51;
      if ( v45 + v51 < v45 )
      {
        RegionSize = v45;
        v51 = 0LL;
      }
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
        goto LABEL_14;
      v30 = (char *)BaseAddress;
      v33 = (char *)BaseAddress;
      v43 = BaseAddress;
      v45 = RegionSize;
      if ( v51 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v51, 0x8000u);
        v30 = (char *)BaseAddress + v51;
        v33 = (char *)BaseAddress + v51;
        v43 = (char *)BaseAddress + v51;
        v45 = RegionSize - v51;
      }
      v31 = v33;
      v48 = v33;
LABEL_93:
      if ( v31 != v30 )
        goto LABEL_96;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v48, 0LL, &v47, 0x1000u, 4u) >= 0 )
      {
        v30 += v47;
        v33 = (char *)v43;
LABEL_96:
        v34 = (__int64)(v33 + 704);
        if ( (NtGlobalFlag & 0x800) != 0 )
        {
          v35 = (unsigned __int64)(v33 + 711) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)v33 + 41) = v35;
          v29 += 2064;
          v34 = v35 + 2064;
          v19 |= 0x4000000u;
          v33 = (char *)v43;
        }
        v36 = (v29 + 15) & 0xFFFFFFF0;
        *((_WORD *)v33 + 4) = v36 >> 4;
        *((_BYTE *)v43 + 10) = 1;
        *((_BYTE *)v43 + 15) = 1;
        *((_DWORD *)v43 + 38) = -285217025;
        *((_DWORD *)v43 + 28) = v19 & 0xEFFFFFFF;
        *((_DWORD *)v43 + 36) = 0;
        memset((char *)v43 + 568, 0, 0x78uLL);
        RtlpCreateHeapEncoding((__int64)v43);
        *((_DWORD *)v43 + 29) = v19 & 0x6001007D;
        *((_WORD *)v43 + 105) = v34 - (_WORD)v43;
        *((_QWORD *)v43 + 27) = 0LL;
        v38 = (char *)v43 + 336;
        *((_QWORD *)v43 + 43) = (char *)v43 + 336;
        *v38 = v38;
        v39 = (char *)v43 + 272;
        *((_QWORD *)v43 + 35) = (char *)v43 + 272;
        *v39 = v39;
        v40 = (char *)v43 + 288;
        *((_QWORD *)v43 + 37) = (char *)v43 + 288;
        *v40 = v40;
        v41 = (char *)v43 + 240;
        *((_QWORD *)v43 + 31) = (char *)v43 + 240;
        *v41 = v41;
        if ( !v10 && (v19 & 1) == 0 )
        {
          v10 = (struct _ERESOURCE *)v34;
          if ( ExInitializeResourceLite((PERESOURCE)v34) < 0 )
          {
            v10 = 0LL;
            goto LABEL_14;
          }
          v34 += 104LL;
        }
        *((_QWORD *)v43 + 44) = v10;
        *((_DWORD *)v43 + 30) |= 0x80000000;
        if ( RtlpInitializeHeapSegment(
               (__int64)v43,
               (__int64)v43,
               v36 + 1104,
               v37,
               v46,
               (__int64)v48,
               v30,
               (unsigned __int64)v48 + v45 - v52) )
        {
          if ( HeapBase )
            memset((void *)v34, 0, 0x80uLL);
          *(_DWORD *)(v34 + 8) = 128;
          *(_QWORD *)(v34 + 40) = v34 + 56;
          *(_QWORD *)(v34 + 32) = (char *)v43 + 336;
          *(_QWORD *)(v34 + 48) = v34 + 72;
          RtlpPopulateListIndex((ULONG_PTR)v43, v34);
          *((_WORD *)v43 + 104) = 0;
          *((_QWORD *)v43 + 20) = v54;
          *((_QWORD *)v43 + 21) = v55;
          *((_QWORD *)v43 + 22) = v56 >> 4;
          *((_QWORD *)v43 + 23) = *(_QWORD *)&v61[0] >> 4;
          *((_QWORD *)v43 + 25) = v53;
          *((_DWORD *)v43 + 37) = (unsigned __int64)(v57[0] + 15) >> 4;
          *((_QWORD *)v43 + 45) = RtlpHeapKey ^ *((_QWORD *)&v61[5] + 1);
          *((_DWORD *)v43 + 172) = 4;
          *((_QWORD *)v43 + 87) = 2088960LL;
          *((_QWORD *)v43 + 32) = 31LL;
          *((_QWORD *)v43 + 33) = -16LL;
          v42 = v43;
          if ( (*((_DWORD *)v43 + 28) & 0x20) != 0 )
          {
            *((_QWORD *)v43 + 32) += 16LL;
            v42 = v43;
          }
          v42[30] &= ~0x80000000;
          v13 = v43;
          v43 = 0LL;
          v10 = 0LL;
          goto LABEL_10;
        }
      }
LABEL_14:
      v13 = 0LL;
      goto LABEL_10;
    }
LABEL_73:
    v13 = 0LL;
    goto LABEL_11;
  }
  if ( !HeapBase )
    goto LABEL_14;
  if ( v44 )
    goto LABEL_14;
  if ( (Flags & 2) != 0 )
    goto LABEL_14;
  RtlpHpConvertCreationFlags(Flags, v45);
  if ( Parameters->CommitRoutine )
  {
    CommitSize = Parameters->InitialCommit;
    if ( !CommitSize )
      goto LABEL_14;
    InitialReserve = Parameters->InitialReserve;
    if ( !InitialReserve || CommitSize > InitialReserve )
      goto LABEL_14;
  }
  *(_OWORD *)v57 = *RtlpHpLegacyGetEnvHandle(v61);
  v13 = (void *)RtlpHpFixedHeapCreate(HeapBase, v11, InitialReserve, CommitSize, v12, v57);
LABEL_10:
  v14 = (struct _ERESOURCE *)v44;
LABEL_11:
  if ( v10 && v10 != v14 )
    ExDeleteResourceLite(v10);
  if ( v43 && !HeapBase )
  {
    v45 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, &v45, 0x8000u);
  }
  return v13;
}
