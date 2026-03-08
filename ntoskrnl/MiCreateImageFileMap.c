/*
 * XREFs of MiCreateImageFileMap @ 0x1407F1C28
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 * Callees:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     PsIsCurrentThreadPrefetching @ 0x1402DCE70 (PsIsCurrentThreadPrefetching.c)
 *     MiInitializeImageHeaderPage @ 0x1402F8ED0 (MiInitializeImageHeaderPage.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     CcZeroEndOfLastPage @ 0x140343FA8 (CcZeroEndOfLastPage.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     MiLegacyImageArchitecture @ 0x140368540 (MiLegacyImageArchitecture.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     IoIsDeviceEjectable @ 0x140368C80 (IoIsDeviceEjectable.c)
 *     MiFlushDataSection @ 0x140368CA0 (MiFlushDataSection.c)
 *     MiCopyHeaderIfResident @ 0x140368D84 (MiCopyHeaderIfResident.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiEnableImageDirectMap @ 0x14063A850 (MiEnableImageDirectMap.c)
 *     MiDeleteImageCreationMdls @ 0x14077E610 (MiDeleteImageCreationMdls.c)
 *     MiReadImageHeaders @ 0x1407F17D4 (MiReadImageHeaders.c)
 *     MiCreateMdl @ 0x1407F223C (MiCreateMdl.c)
 *     MiVerifyImageHeader @ 0x1407F2374 (MiVerifyImageHeader.c)
 *     MiBuildImageControlArea @ 0x1407F3030 (MiBuildImageControlArea.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2C844 (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateEntireImageFileExtents @ 0x140A30264 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteFileExtentList @ 0x140A31150 (MiDeleteFileExtentList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        PVOID **a5,
        __int64 *a6,
        __int64 a7,
        __int128 *a8)
{
  unsigned int *v9; // r12
  NTSTATUS result; // eax
  unsigned __int64 v14; // rdi
  __int64 *v15; // r15
  __int64 Mdl; // rax
  __int64 v17; // r13
  int ImageHeaders; // r14d
  struct _FILE_OBJECT *v19; // r14
  ULONG LowPart; // edx
  unsigned __int64 v21; // r9
  unsigned int *v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdi
  unsigned __int64 v27; // r9
  __int64 v28; // r11
  unsigned int v29; // r9d
  __int128 v30; // xmm0
  int v31; // edx
  unsigned __int64 v32; // r14
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned int v35; // r10d
  __int64 v36; // r10
  PFILE_OBJECT v37; // rdi
  int v38; // eax
  __int64 v39; // r8
  char v40; // r14
  unsigned int v41; // eax
  __int16 v42; // si
  __int64 v43; // rdx
  char v44; // r9
  unsigned __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  __int64 v49; // rsi
  PVOID *v50; // rbx
  LARGE_INTEGER v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  bool v61; // zf
  __int128 *v62; // rax
  unsigned __int64 v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  int v67; // eax
  __int64 DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int64 v70; // r8
  __int64 v71; // rcx
  char v72; // [rsp+40h] [rbp-C0h]
  PVOID *P; // [rsp+50h] [rbp-B0h]
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  unsigned int v76; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER FileSize; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v79; // [rsp+78h] [rbp-88h] BYREF
  int v80; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v81; // [rsp+88h] [rbp-78h]
  PVOID v82[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v83; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-58h]
  __int128 v85; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-40h]
  __int128 v87; // [rsp+C8h] [rbp-38h] BYREF
  int v88; // [rsp+D8h] [rbp-28h]
  unsigned int *v89; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v90; // [rsp+E8h] [rbp-18h]
  __int128 v91; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v92; // [rsp+100h] [rbp+0h]
  PVOID **v93; // [rsp+108h] [rbp+8h]
  __int64 *v94; // [rsp+110h] [rbp+10h]
  __int128 *v95; // [rsp+118h] [rbp+18h] BYREF
  int v96; // [rsp+120h] [rbp+20h]
  int v97; // [rsp+124h] [rbp+24h]

  v93 = a5;
  v9 = 0LL;
  v94 = a6;
  v95 = a8;
  v88 = 0;
  v87 = 0LL;
  v80 = 0;
  v85 = 0LL;
  FileSize.QuadPart = 0LL;
  v91 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
    {
      dword_140C65490 = 34;
      return -1073741792;
    }
    v86 = 0LL;
    v14 = 1LL;
    v81 = 0LL;
    v82[0] = 0LL;
    P = 0LL;
    v79 = 0LL;
    v15 = 0LL;
    Mdl = MiCreateMdl(a2, a3, 4096LL, 1LL);
    v17 = Mdl;
    if ( !Mdl )
    {
      dword_140C65490 = 35;
      return -1073741670;
    }
    *(_QWORD *)(Mdl + 16) = 0LL;
    v90 = *(_QWORD *)(Mdl + 48);
    CcZeroEndOfLastPage(FileObject);
    ImageHeaders = MiFlushDataSection((__int64)FileObject, &v80);
    if ( ImageHeaders == -1073741740 )
    {
      dword_140C65490 = 36;
LABEL_86:
      v50 = 0LL;
LABEL_154:
      v49 = a2;
      goto LABEL_155;
    }
    v72 = 0;
    if ( v80 )
      a4 |= 0x200000u;
    if ( (a4 & 0x200080) != 0 )
    {
      v72 = 1;
      if ( PsIsCurrentThreadPrefetching() )
      {
        dword_140C65490 = 37;
        ImageHeaders = -1073740749;
        goto LABEL_86;
      }
    }
    if ( (a4 & 0x10000) != 0 )
    {
      v51 = FileSize;
      if ( (a4 & 0x80000) != 0 )
        v51.QuadPart = 4096LL;
      v52 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MiAllocateEntireImageFileExtents)(
              FileObject,
              (LARGE_INTEGER)v51.QuadPart,
              0LL,
              &v79);
      v9 = v79;
      ImageHeaders = v52;
      if ( v52 < 0 )
      {
        dword_140C65490 = 38;
        goto LABEL_94;
      }
      v19 = FileObject;
      goto LABEL_14;
    }
    v19 = FileObject;
    if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v90) )
    {
      v21 = 4096LL;
      *((_QWORD *)&v85 + 1) = 4096LL;
      goto LABEL_17;
    }
    if ( !v72 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        LowPart = FileSize.LowPart;
      }
      else
      {
        if ( (a4 & 0x400) == 0 )
          goto LABEL_14;
        LowPart = FileSize.LowPart;
        if ( FileSize.LowPart > 0x20000 )
          goto LABEL_14;
      }
      if ( !FileObject->SectionObjectPointer->DataSectionObject )
      {
        v14 = ((unsigned __int64)LowPart + 4095) >> 12;
        if ( v14 > 1 )
        {
          v86 = MiCreateMdl(a2, a3, v14 << 12, 0LL);
          if ( v86 )
          {
            MiDeleteImageCreationMdls((PMDL)v17, 1);
            v17 = v86;
            *(_QWORD *)(v86 + 16) = 0LL;
          }
          else
          {
            v14 = 1LL;
          }
        }
      }
    }
LABEL_14:
    v21 = *((_QWORD *)&v85 + 1);
    if ( !*((_QWORD *)&v85 + 1) )
    {
      ImageHeaders = MiReadImageHeaders(v19, (ULONG_PTR)v9, v17, (__int64)&v85);
      if ( ImageHeaders < 0 )
      {
        dword_140C65490 = 40;
        goto LABEL_94;
      }
      v21 = *((_QWORD *)&v85 + 1);
      if ( *((_QWORD *)&v85 + 1) != v14 << 12 && *((_QWORD *)&v85 + 1) < 0x40uLL )
      {
        ImageHeaders = -1073741521;
        dword_140C65490 = 41;
LABEL_94:
        v50 = 0LL;
        goto LABEL_154;
      }
    }
LABEL_17:
    if ( (*(_BYTE *)(v17 + 10) & 4) != 0 )
      v22 = *(unsigned int **)(v17 + 32);
    else
      v22 = *(unsigned int **)(v17 + 24);
    v83 = v22;
    if ( *(_WORD *)v22 != 23117 )
    {
      ImageHeaders = -1073741521;
      goto LABEL_94;
    }
    v23 = v22[15];
    v75 = v23;
    if ( (int)v23 + 264 < (unsigned int)v23 )
    {
      ImageHeaders = -1073741520;
      dword_140C65490 = 42;
      goto LABEL_94;
    }
    v24 = v23 + 264;
    v25 = (unsigned int)v23;
    if ( (unsigned __int64)(v23 + 264) > FileSize.QuadPart )
    {
      ImageHeaders = -1073741520;
      dword_140C65490 = 43;
      goto LABEL_94;
    }
    if ( v24 > v14 << 12 )
    {
      v53 = 0x2000LL;
      v54 = (FileSize.QuadPart - ((unsigned int)v23 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v92 = (FileSize.QuadPart - (v25 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v54 < 0x2000 )
        v53 = v54;
      v84 = v53;
      v55 = (__int64 *)MiCreateMdl(a2, a3, v53, 1LL);
      v56 = (__int64)v55;
      if ( !v55 )
      {
        ImageHeaders = -1073741670;
        dword_140C65490 = 44;
        goto LABEL_94;
      }
      *v55 = v17;
      v57 = v25 & 0xFFFFF000;
      v17 = (__int64)v55;
      v55[2] = ((unsigned int)v25 & 0xFFFFF000) / 4096LL;
      if ( (a4 & 0x80000) != 0 )
      {
        v89 = 0LL;
        ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v92, v9, &v89);
        if ( ImageHeaders < 0 )
        {
          dword_140C65490 = 128;
          goto LABEL_94;
        }
        v9 = v89;
        v56 = v17;
        v79 = v89;
      }
      ImageHeaders = MiReadImageHeaders(FileObject, (ULONG_PTR)v9, v56, (__int64)&v85);
      if ( ImageHeaders < 0 )
      {
        dword_140C65490 = 45;
        goto LABEL_94;
      }
      v58 = v75 & 0xFFF;
      if ( *((_QWORD *)&v85 + 1) != (unsigned int)v84 && *((_QWORD *)&v85 + 1) < (unsigned __int64)(v58 + 264) )
      {
        ImageHeaders = -1073741520;
        dword_140C65490 = 46;
        goto LABEL_94;
      }
      v27 = *((_QWORD *)&v85 + 1) - v58;
      v84 = v58 + *(_QWORD *)(v17 + 24);
      v59 = v57 + *((_QWORD *)&v85 + 1);
      v26 = v84;
      *((_QWORD *)&v85 + 1) = v59;
      v22 = v83;
    }
    else
    {
      if ( v24 > v21 )
      {
        ImageHeaders = -1073741520;
        dword_140C65490 = 47;
        goto LABEL_94;
      }
      v26 = (__int64)v22 + (unsigned int)v23;
      v27 = v21 - (unsigned int)v23;
    }
    ImageHeaders = MiVerifyImageHeader(a7, v26, v22, v27);
    if ( ImageHeaders )
    {
      v50 = 0LL;
      v81 = 0LL;
      if ( ImageHeaders < 0 )
        goto LABEL_154;
LABEL_56:
      if ( v9 )
        MiDeleteFileExtentList(v9);
      return ImageHeaders;
    }
    v28 = a7;
    *(_DWORD *)v95 = v75;
    v29 = *(_DWORD *)(a7 + 16);
    if ( !((v29 >> 12) + ((v29 & 0xFFF) != 0)) )
    {
      ImageHeaders = -1073741701;
      dword_140C65490 = 49;
      goto LABEL_94;
    }
    v30 = *(_OWORD *)(v26 + 4);
    v88 = *(_DWORD *)(v26 + 20);
    v31 = (unsigned __int16)v88 + 24;
    v87 = v30;
    if ( v75 + v31 + 40 * WORD1(v30) <= v75 )
    {
      ImageHeaders = -1073741701;
      dword_140C65490 = 50;
      goto LABEL_94;
    }
    v32 = v31 + v75;
    v33 = 40LL * WORD1(v30);
    v34 = v33 + v32;
    v84 = v32;
    v35 = 40 * WORD1(v30) + v31 + v75;
    if ( *(unsigned int *)(a7 + 24) >= v33 + v32 )
      v35 = *(_DWORD *)(a7 + 24);
    v76 = v35;
    if ( v35 > v29 )
    {
      ImageHeaders = -1073741701;
      dword_140C65490 = 48;
      goto LABEL_94;
    }
    if ( v34 > *((_QWORD *)&v85 + 1) )
    {
      v60 = ((_WORD)v26 + (_WORD)v31) & 0xFFF;
      v61 = v33 + v60 == 0;
      v62 = (__int128 *)(v33 + v60);
      v95 = v62;
      if ( v61 || (v63 = ((unsigned __int64)v62 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)v62 > v63) )
      {
        ImageHeaders = -1073741701;
        dword_140C65490 = 51;
        goto LABEL_94;
      }
      v64 = (__int64 *)MiCreateMdl(a2, a3, ((unsigned __int64)v62 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1LL);
      v65 = (__int64)v64;
      if ( !v64 )
      {
        ImageHeaders = -1073741670;
        dword_140C65490 = 52;
        goto LABEL_94;
      }
      *v64 = v17;
      v17 = (__int64)v64;
      v64[2] = v32 >> 12;
      if ( (a4 & 0x80000) != 0 )
      {
        v83 = 0LL;
        v66 = v63;
        v37 = FileObject;
        ImageHeaders = MiAllocateEntireImageFileExtents(FileObject, v66, v9, &v83);
        if ( ImageHeaders < 0 )
        {
          dword_140C65490 = 129;
          goto LABEL_94;
        }
        v9 = v83;
        v65 = v17;
        v79 = v83;
      }
      else
      {
        v37 = FileObject;
      }
      ImageHeaders = MiReadImageHeaders(v37, (ULONG_PTR)v9, v65, (__int64)&v85);
      if ( ImageHeaders < 0 )
      {
        dword_140C65490 = 53;
        goto LABEL_94;
      }
      if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)v95 )
      {
        ImageHeaders = -1073741701;
        dword_140C65490 = 54;
        goto LABEL_94;
      }
      v28 = a7;
      v36 = *(_QWORD *)(v17 + 24) + (v84 & 0xFFF);
    }
    else
    {
      LODWORD(v36) = v26 + v31;
      v37 = FileObject;
    }
    if ( *(_DWORD *)(v28 + 12) < 0x1000u )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        ImageHeaders = -1073741701;
        MiLogCreateImageFileMapFailure(v34, v37, *(unsigned int *)(v28 + 64), DWORD1(v87));
        if ( qword_140C37698 )
          qword_140C37698(v37, *(unsigned int *)(a7 + 64), DWORD1(v87));
        dword_140C65490 = 55;
        goto LABEL_94;
      }
      if ( !MiLegacyImageArchitecture(v87) )
      {
        ImageHeaders = -1073741701;
        dword_140C65490 = 56;
        goto LABEL_94;
      }
      a4 |= 0x400000u;
    }
    v38 = MiBuildImageControlArea(a3, v36, v28, (unsigned int)&v87, a4, (__int64)&FileSize, (__int64)v82);
    v15 = (__int64 *)v82[0];
    ImageHeaders = v38;
    if ( v38 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v82[0] + 56LL) + 64LL) = v76;
      *((_WORD *)v15 + 30) ^= (*(_WORD *)a2 ^ *((_WORD *)v15 + 30)) & 0x3FF;
      if ( (a4 & 0x200) != 0 )
        *(_BYTE *)(*(_QWORD *)(*v15 + 56) + 51LL) |= 0x10u;
      v39 = *v15;
      v40 = 0;
      P = (PVOID *)*v15;
      if ( !v86 && !*(_QWORD *)v17 && (a4 & 0x410000) == 0 )
      {
        v41 = *(_DWORD *)(a7 + 24);
        if ( v41 < 0x1000 )
        {
          if ( (v41 & 0x1FF) != 0 )
            ++*(_QWORD *)(v39 + 16);
          v40 = 1;
        }
      }
      v42 = HIWORD(v88);
      if ( !v72
        && (IoIsDeviceEjectable((__int64)v37->DeviceObject)
         || (v42 & 0x400) != 0 && ((unsigned __int8)*(_DWORD *)(v43 + 52) & (unsigned __int8)v44) != 0
         || (v42 & 0x800) != 0 && (*(_DWORD *)(v43 + 52) & 0x10) != 0) )
      {
        v72 = v44;
      }
      v45 = *(_QWORD *)(v39 + 16);
      v81 = v45;
      if ( v45 )
      {
        v49 = a2;
        if ( !(unsigned int)MiChargeCommit(a2, v45, 0LL) )
        {
          v50 = P;
          v81 = 0LL;
          ImageHeaders = -1073741523;
          dword_140C65490 = 57;
LABEL_155:
          MiDeleteImageCreationMdls((PMDL)v17, 1);
          v71 = v81;
          if ( v81 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 17848), -v81);
            MiReturnCommit(v49, v71, v70);
            v15 = (__int64 *)v82[0];
            v9 = v79;
          }
          if ( v15 )
          {
            MiUpdateSystemProtoPtesTree((unsigned __int64 *)v15[12], 0);
            ExFreePoolWithTag(v50[8], 0);
            ExFreePoolWithTag(v50, 0);
            ExFreePoolWithTag(v15, 0);
          }
          goto LABEL_56;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17848), v81);
        v15 = (__int64 *)v82[0];
        v42 = HIWORD(v88);
        v9 = v79;
      }
      v46 = *((_DWORD *)v15 + 14);
      if ( (a4 & 0x400000) == 0 && (v46 & 0x20000) != 0 && (*(_DWORD *)(a7 + 20) & 0x1000000) == 0 )
        *((_DWORD *)v15 + 14) = v46 | 0x8000000;
      if ( v86 )
        MiInitializeImageProtos((__int64)v15, v86);
      if ( v40 )
        MiInitializeImageHeaderPage(v90, *(unsigned int *)(a7 + 24));
      v47 = a7;
      if ( *(_WORD *)(a7 + 48) == 267 )
        *((_BYTE *)P + 14) |= 0x40u;
      v48 = v72;
      if ( v72 )
      {
        v67 = *((_DWORD *)v15 + 14) | 0x800;
        *((_DWORD *)v15 + 14) = v67;
        if ( (a4 & 0x200080) != 0 )
          *((_DWORD *)v15 + 14) = v67 | 0x40000;
        if ( (PerfGlobalGroupMask[0] & 4) != 0 )
        {
          DeviceObject = (__int64)v37->DeviceObject;
          *(_QWORD *)&v91 = v37->FsContext;
          WORD6(v91) = v42;
          DWORD2(v91) = *(_DWORD *)(DeviceObject + 52);
          IsDeviceEjectable = IoIsDeviceEjectable(DeviceObject);
          v97 = 0;
          v96 = 16;
          HIWORD(v91) = (a4 >> 21) & 1 | (2 * ((2 * ((a4 >> 7) & 1)) | IsDeviceEjectable));
          v95 = &v91;
          EtwTraceKernelEvent((__int64)&v95, 1u, 4u, 0x269u, 0x401802u);
          v47 = a7;
        }
        v48 = v72;
      }
      if ( (a4 & 0x10000) == 0 )
        goto LABEL_55;
      ImageHeaders = MiEnableImageDirectMap(
                       (__int64)v37,
                       v15,
                       v47,
                       (unsigned __int64)v9,
                       (a4 >> 18) & 1,
                       (a4 >> 19) & 1,
                       v48);
      if ( ImageHeaders >= 0 )
      {
        v9 = 0LL;
        if ( (*((_BYTE *)v15 + 62) & 0xC) == 4 )
        {
          MiDeleteImageCreationMdls((PMDL)v17, 1);
          v17 = 0LL;
        }
LABEL_55:
        ImageHeaders = 0;
        *v93 = P;
        *v94 = v17;
        goto LABEL_56;
      }
      dword_140C65490 = 58;
    }
    v50 = P;
    goto LABEL_154;
  }
  dword_140C65490 = 33;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
