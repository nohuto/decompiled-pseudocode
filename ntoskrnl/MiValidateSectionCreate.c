/*
 * XREFs of MiValidateSectionCreate @ 0x14069F890
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x1406A14E8 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140A385E8 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x140A3BAD0 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     PsRevertToUserPagePriorityThread @ 0x140368F54 (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x140368FAC (PsSetSystemPagePriorityThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036D020 (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x14041BBB0 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x14041BC90 (KeCopyPage.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiImageCantMove @ 0x140653990 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x140653A30 (MiStrongCodeImage.c)
 *     MiRevertRelocations @ 0x14069F300 (MiRevertRelocations.c)
 *     SeValidateImageHeader @ 0x1406A02B4 (SeValidateImageHeader.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406A556C (MiUnmapImageInSystemSpace.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 *     SeReleaseImageValidationContext @ 0x14079C458 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140A45314 (MiCaptureSecureImageBaseAddress.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateSectionCreate(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        char a7)
{
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 result; // rax
  int v12; // ecx
  int v13; // edx
  int v14; // r13d
  int v15; // esi
  int PerSessionProtos; // ebx
  ULONG_PTR v17; // rsi
  int v18; // r9d
  __int64 v19; // r8
  signed __int64 v20; // rbx
  int v21; // r13d
  unsigned __int64 v22; // rax
  int v23; // r11d
  unsigned int v24; // r10d
  __int64 v25; // rax
  unsigned int v26; // eax
  PVOID Pool; // rax
  void *v28; // r12
  PVOID v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  volatile signed __int64 *v35; // r12
  signed __int64 v36; // rcx
  bool v37; // zf
  signed __int64 v38; // rax
  volatile signed __int64 *v39; // roff
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  char v43[8]; // [rsp+80h] [rbp-198h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-190h] BYREF
  int v45; // [rsp+90h] [rbp-188h] BYREF
  char v46[4]; // [rsp+94h] [rbp-184h] BYREF
  int v47; // [rsp+98h] [rbp-180h]
  int v48; // [rsp+9Ch] [rbp-17Ch]
  int v49; // [rsp+A0h] [rbp-178h]
  int v50; // [rsp+A4h] [rbp-174h]
  int v51; // [rsp+A8h] [rbp-170h]
  unsigned int v52; // [rsp+ACh] [rbp-16Ch]
  int v53; // [rsp+B0h] [rbp-168h]
  int v54; // [rsp+B4h] [rbp-164h]
  int v55; // [rsp+B8h] [rbp-160h]
  int v56; // [rsp+BCh] [rbp-15Ch]
  int v57; // [rsp+C0h] [rbp-158h]
  int v58; // [rsp+C4h] [rbp-154h]
  int v59; // [rsp+C8h] [rbp-150h]
  int v60; // [rsp+CCh] [rbp-14Ch]
  int v61; // [rsp+D0h] [rbp-148h] BYREF
  unsigned int v62; // [rsp+D4h] [rbp-144h]
  void *v63; // [rsp+D8h] [rbp-140h]
  volatile signed __int64 *v64; // [rsp+E0h] [rbp-138h]
  int v65; // [rsp+E8h] [rbp-130h]
  unsigned int v66; // [rsp+F0h] [rbp-128h]
  int v67; // [rsp+F8h] [rbp-120h]
  int v68; // [rsp+FCh] [rbp-11Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp-118h]
  struct _KTHREAD *v70; // [rsp+108h] [rbp-110h]
  PVOID v71; // [rsp+110h] [rbp-108h]
  __int64 v72; // [rsp+118h] [rbp-100h]
  _KPROCESS *Process; // [rsp+120h] [rbp-F8h]
  _DWORD *v74; // [rsp+128h] [rbp-F0h]
  PVOID v75; // [rsp+130h] [rbp-E8h]
  _KPROCESS *v76; // [rsp+138h] [rbp-E0h]
  signed __int64 v77; // [rsp+140h] [rbp-D8h]
  ULONG_PTR v78; // [rsp+148h] [rbp-D0h]
  ULONG_PTR v79; // [rsp+150h] [rbp-C8h]
  __int64 v80; // [rsp+158h] [rbp-C0h]
  _BYTE *v81; // [rsp+160h] [rbp-B8h]
  volatile signed __int64 *v82; // [rsp+168h] [rbp-B0h]
  _QWORD *v83; // [rsp+170h] [rbp-A8h]
  _QWORD v84[10]; // [rsp+180h] [rbp-98h] BYREF

  v72 = a4;
  v62 = a3;
  BugCheckParameter2 = a1;
  v78 = a1;
  v79 = a2;
  v66 = a3;
  v80 = a4;
  v44 = 0LL;
  v43[0] = 0;
  memset(v84, 0, sizeof(v84));
  v48 = 0;
  v57 = 1;
  v9 = 6;
  v47 = 6;
  v45 = 0;
  v46[0] = 0;
  v61 = 0;
  v55 = 0;
  CurrentThread = 0LL;
  v70 = 0LL;
  v74 = (_DWORD *)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140C65490 = 115;
      return 3221226547LL;
    }
    v12 = a5 | 0x10000000;
  }
  else
  {
    v12 = a5;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
      v12 = a5 | 0x40;
  }
  v81 = (_BYTE *)(a2 + 62);
  v13 = v12 | 0x1000000;
  if ( (*(_BYTE *)(a2 + 62) & 0xC) != 4 )
    v13 = v12;
  v60 = v13;
  v68 = v13;
  if ( (v13 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140C65490 = 116;
    return 3221225595LL;
  }
  if ( (v13 & 5) != 0 )
  {
    v9 = 7;
    v47 = 7;
    v45 = 2;
  }
  v54 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v76 = Process;
  while ( 1 )
  {
    v14 = v9 & 1;
    v56 = v14;
    v58 = v14;
    if ( (v9 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v70 = CurrentThread;
      v15 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v55 = v15;
      if ( (*v74 & 0x8000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v15);
          return (unsigned int)PerSessionProtos;
        }
        v54 = 1;
        v9 = v47;
      }
      if ( v57 )
        MiPrefetchControlArea(a2, CLFS_LSN_NULL_EXT[0], 0, 1, 0, -1);
    }
    LODWORD(v17) = MiMapImageInSystemSpace(a2, v9, v84);
    if ( (v17 & 0x80000000) != 0LL )
    {
      if ( v54 )
        MiDereferencePerSessionProtos(a2);
      if ( v14 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v55);
      return (unsigned int)v17;
    }
    v18 = v84[0];
    v63 = (void *)v84[0];
    v19 = *(_QWORD *)(a2 + 96);
    v82 = (volatile signed __int64 *)(v19 + 40);
    v64 = (volatile signed __int64 *)(v19 + 40);
    v20 = *(_QWORD *)(v19 + 40);
    v77 = v20;
    v44 = v20;
    if ( !v20 )
    {
      v21 = 0;
LABEL_35:
      v49 = v21;
      goto LABEL_36;
    }
    if ( (v20 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
    {
      v22 = v20;
      if ( (v20 & 3) != 0 )
      {
        v22 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
        v21 = ((v20 & 3) != 1) + 2;
      }
      else
      {
        v21 = 4;
      }
      v44 = v22 & 0xFFFFFFFFFFFFFFFBuLL;
      goto LABEL_35;
    }
    v21 = 1;
    v49 = 1;
    v44 = v20 & 3;
LABEL_36:
    v50 = v84[2];
    v23 = LODWORD(v84[2]) << 12;
    v53 = LODWORD(v84[2]) << 12;
    v67 = LODWORD(v84[2]) << 12;
    v24 = LODWORD(v84[2]) << 12;
    v51 = LODWORD(v84[2]) << 12;
    v43[0] = 1;
    v83 = (_QWORD *)(v19 + 32);
    v25 = *(_QWORD *)(v19 + 32);
    if ( !v25 || *(_QWORD *)(v25 + 40) == *(_QWORD *)(v25 + 48) )
    {
      v28 = (void *)v84[0];
      if ( v45 == 1 )
        v45 = 2;
    }
    else
    {
      if ( v45 == 2 )
      {
        v59 = v84[2];
      }
      else
      {
        v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v50 = (v26 >> 12) + ((v26 & 0xFFF) != 0);
        v59 = v50;
        v24 = v50 << 12;
        v51 = v50 << 12;
      }
      Pool = MiAllocatePool(256, v24, 0x68496D4Du);
      v28 = Pool;
      v75 = Pool;
      if ( Pool )
      {
        LODWORD(v17) = 0;
        v65 = 0;
        v29 = Pool;
        v71 = Pool;
        v30 = 0;
        v31 = v50;
        while ( 1 )
        {
          v52 = v30;
          if ( v30 >= v31 )
            break;
          KeCopyPage((__int64)v29 + 4096 * v30, (__int64)v63 + 4096 * v30);
          v31 = v50;
          v30 = v52 + 1;
          v29 = v71;
        }
        MiRevertRelocations((__int64)v28, a2, v31);
      }
      else
      {
        LODWORD(v17) = -1073741670;
      }
      v24 = v51;
      v18 = (int)v63;
      v23 = v53;
    }
    v58 = v45;
    if ( (v17 & 0x80000000) == 0LL )
    {
      v32 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v28,
              v24,
              v18,
              v23,
              (__int64)&v45,
              (__int64)v46,
              (__int64)Process,
              v72,
              v60,
              (__int64)&v44,
              a6,
              a7,
              (__int64)v43,
              (__int64)&v61);
      v17 = v32;
      if ( v32 == 301 )
      {
        MiImageCantMove(a2);
        v48 = 1;
LABEL_56:
        if ( (*v81 & 0xC) == 4 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v17, 0LL);
        MiStrongCodeImage(a2, 1u);
        goto LABEL_58;
      }
      v33 = v48;
      if ( v32 == 302 )
        v33 = 1;
      v48 = v33;
      if ( v33 )
        goto LABEL_56;
    }
LABEL_58:
    if ( v28 != v63 && v28 )
      ExFreePoolWithTag(v28, 0);
    MiUnmapImageInSystemSpace(v84);
    if ( v54 )
      MiDereferencePerSessionProtos(a2);
    v34 = v56;
    if ( v56 )
    {
      if ( (MiFlags & 0x20000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      CurrentThread = v70;
      PsRevertToUserPagePriorityThread((__int64)v70, v55);
      v34 = v56;
    }
    else
    {
      CurrentThread = v70;
    }
    if ( (v17 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v17 != -1073741789 || v58 >= v45 )
    {
      dword_140C65490 = 117;
      return (unsigned int)v17;
    }
    v9 = v47;
    if ( v34 )
    {
      v57 = 1;
    }
    else
    {
      v9 = v47 | 1;
      v47 |= 1u;
      if ( v45 == 1 )
        v57 = 0;
    }
  }
  if ( !(_DWORD)v17 && !v43[0] )
    return 0LL;
  if ( !v21 || v21 == 1 && (v44 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v44 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v21 )
        v36 = v44 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v36 = v44 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v36 = v44 & 7 | 8;
    }
    v44 = v36;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v36 |= 4uLL;
      v44 = v36;
    }
    v39 = v82;
    v38 = _InterlockedCompareExchange64(v82, v36, v20);
    v37 = v20 == v38;
    v35 = v39;
    while ( 1 )
    {
      v40 = v38;
      if ( v37 )
        break;
      if ( (v44 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_102;
      if ( (v38 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v41 = v44 & 0xFFFFFFFFFFFFFFF8uLL;
        v44 &= 0xFFFFFFFFFFFFFFF8uLL;
        if ( qword_140C376A0 )
        {
          LODWORD(v17) = qword_140C376A0(v38 & 0xFFFFFFFFFFFFFFF8uLL);
          v41 = v44;
        }
        else
        {
          LODWORD(v17) = 0;
        }
        SeReleaseImageValidationContext(v41);
        if ( (v17 & 0x80000000) != 0LL )
        {
          dword_140C65490 = 130;
          return (unsigned int)v17;
        }
LABEL_102:
        v44 = v40;
        break;
      }
      v44 = v44 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v38 = _InterlockedCompareExchange64(v35, v44, v38);
      v37 = v38 == v40;
    }
    v20 = v44;
  }
  else
  {
    v35 = v64;
    if ( (unsigned int)(v21 - 2) <= 1 )
      v44 ^= ((unsigned __int8)v44 ^ (unsigned __int8)v20) & 3;
  }
  if ( (v44 & 3) != 0 )
  {
    if ( (MiFlags & 0x2000) != 0 && (*(_DWORD *)(a2 + 92) & 0xC0000) != 0 )
    {
      if ( *v83 )
      {
        result = MiCaptureSecureImageBaseAddress(a2);
        if ( (int)result < 0 )
        {
          dword_140C65490 = 118;
          return result;
        }
      }
    }
    result = MiWalkEntireImage(a2, 0LL, 1u, v62);
    LODWORD(v17) = result;
    if ( (int)result < 0 )
    {
      dword_140C65490 = 119;
      return result;
    }
    v42 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
    v44 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v42 |= 4uLL;
      v44 = v42;
    }
    _InterlockedCompareExchange64(v35, v42, v20);
  }
  if ( (v17 & 0x80000000) == 0LL )
  {
    *(_BYTE *)(*(_QWORD *)a2 + 15LL) = *(_BYTE *)(*(_QWORD *)a2 + 15LL) & 1 | (2 * ((8 * v43[0]) | v61 & 7));
    if ( v48 )
      MiStrongCodeImage(a2, 2u);
  }
  return (unsigned int)v17;
}
