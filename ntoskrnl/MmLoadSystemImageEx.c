__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int **a6,
        unsigned __int64 *a7)
{
  unsigned int v7; // r14d
  int v8; // r13d
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r10
  signed int Image; // edi
  unsigned int v14; // r15d
  __int64 Lock; // r12
  int v16; // eax
  unsigned int *v17; // rsi
  int v18; // r11d
  void *v19; // rcx
  __int64 *v20; // r12
  int v21; // eax
  PVOID v22; // r8
  int v23; // edi
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // r12d
  __int64 *v32; // r15
  __int64 *v33; // r13
  __int64 v34; // rdx
  char v35; // r12
  _QWORD *v36; // rcx
  int v37; // r14d
  unsigned __int64 v39; // r8
  unsigned int v40; // eax
  int v41; // ecx
  int inserted; // eax
  bool v43; // sf
  _QWORD *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rcx
  struct _LIST_ENTRY *v47; // rax
  struct _LIST_ENTRY *v48; // rax
  int active; // eax
  void *PatchTableProtos; // rax
  int v51; // eax
  unsigned __int64 v52; // rdi
  int v53; // r9d
  int HotPatchRecord; // eax
  int v55; // r14d
  unsigned __int64 v56; // rax
  char v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  __int64 v59; // [rsp+38h] [rbp-C8h]
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemAddressForImage; // [rsp+48h] [rbp-B8h]
  int v62; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+54h] [rbp-ACh]
  PVOID v64; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v66; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  int v68; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v70; // [rsp+90h] [rbp-70h] BYREF
  struct _LIST_ENTRY *v71; // [rsp+98h] [rbp-68h]
  PVOID v72[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v74[14]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = a5;
  v70 = 0LL;
  v64 = 0LL;
  *a7 = 0LL;
  v8 = 1;
  v62 = 1;
  v71 = 0LL;
  v10 = 0;
  *(_OWORD *)v72 = 0LL;
  String1 = 0LL;
  v74[0] = 0LL;
  if ( LOBYTE(PsGetCurrentServerSiloGlobals()[85].Blink) )
  {
    v47 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v48 = PsAttachSiloToCurrentThread(v47);
    v12 = a1;
    v10 = 4;
    v11 = a2;
    v71 = v48;
  }
  v60 = v7 & 1;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_5;
LABEL_98:
    Image = -1073741582;
    goto LABEL_70;
  }
  if ( (v7 & 2) != 0 || (v7 & 0x80000004) == 4 )
    goto LABEL_98;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 && (v7 & 0x40000000) == 0 )
  {
    Image = -1073741801;
    goto LABEL_70;
  }
  v8 = v62;
LABEL_5:
  Image = MiGenerateSystemImageNames(v12, v11, a3, &String1, v74, v72);
  if ( Image < 0 )
    goto LABEL_70;
  v58 = 1;
  LOBYTE(a5) = 1;
  v14 = 0;
  v57 = 0;
  P = 0LL;
  Lock = MmAcquireLoadLock();
  v59 = Lock;
  v16 = MiObtainSectionForDriver((PCUNICODE_STRING)v72, &P);
  v17 = (unsigned int *)P;
  v18 = 0;
  Image = v16;
  if ( v16 < 0 )
  {
    v37 = 1;
    goto LABEL_62;
  }
  v19 = (void *)*((_QWORD *)P + 14);
  Object = v19;
  if ( v19 )
  {
    v20 = (__int64 *)MiSectionControlArea((__int64)v19);
    v14 = *(_DWORD *)(*v20 + 8);
  }
  else
  {
    v20 = 0LL;
  }
  v66 = v20;
  if ( !Image )
  {
    LOBYTE(v10) = (2 * v60 + 1) | v10;
    v17[16] = v14 << 12;
    SystemAddressForImage = MiGetSystemAddressForImage(v19, v7, &v62);
    if ( !SystemAddressForImage )
    {
      ObDereferenceObjectDeferDelete(Object);
      ExFreePoolWithTag(v17, 0);
      v37 = 1;
      v17 = 0LL;
      LOBYTE(v14) = 0;
      Image = -1073741670;
      goto LABEL_124;
    }
    MiCheckPurgeAndUpMapCount((__int64)v20);
    *((_QWORD *)v17 + 6) = SystemAddressForImage;
    MiUpdateDriverLoadInProgress((__int64)v17, 0);
    v8 = v62;
    LOBYTE(v10) = v10 | 8;
    v18 = 0;
LABEL_12:
    if ( (v10 & 3) == 1 )
    {
      v21 = MiControlAreaRequiresCharge((__int64)v20, 3LL);
      v58 = v21;
      if ( !v21 )
      {
        LOBYTE(v14) = 0;
        Image = -1073740277;
        v37 = 0;
        goto LABEL_124;
      }
      if ( v21 == 2 )
      {
        active = MiReferenceActiveSubsection(v20 + 16, 136, 0x11u);
        v18 = 0;
        Image = active;
        if ( active < 0 )
        {
          LOBYTE(v14) = 0;
          v37 = 1;
          goto LABEL_124;
        }
      }
    }
    if ( (v10 & 2) == 0 || dword_140C694FC == v18 )
    {
      v22 = v64;
    }
    else if ( (v10 & 1) != 0 )
    {
      if ( !(unsigned int)MiCreateSessionDriverProtos(v20, *((_QWORD *)v17 + 6), 0LL)
        || (PatchTableProtos = (void *)MiCreatePatchTableProtos(), (v64 = PatchTableProtos) == 0LL) )
      {
        Image = -1073741670;
        goto LABEL_122;
      }
      v22 = PatchTableProtos;
    }
    else
    {
      v22 = (PVOID)*((_QWORD *)v17 + 36);
      v64 = v22;
    }
    Image = MiMapSystemImage(Object, SystemAddressForImage, v22, v7);
    if ( Image < 0 )
      goto LABEL_122;
    v23 = v60;
    if ( !v60 )
    {
      _InterlockedExchangeAdd(&dword_140C69650, v14);
      v17 = (unsigned int *)P;
      v8 = v62;
    }
    v24 = 0LL;
    v57 = 1;
    if ( (v7 & 0x40000021) == 0 )
    {
      if ( SystemAddressForImage != *(_QWORD *)(*v66 + 32) )
      {
        v25 = SystemAddressForImage;
        goto LABEL_24;
      }
      if ( (unsigned int)MiUseLargeDriverPage(&String1) )
      {
        v25 = MiMapSystemImageWithLargePage(Object, v14, SystemAddressForImage);
        v24 = v25;
        if ( v25 )
        {
          _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 3, -v14);
          v17 = (unsigned int *)P;
          v8 = v62;
          SystemAddressForImage = v25;
          *((_QWORD *)P + 6) = v25;
          goto LABEL_24;
        }
      }
    }
    v25 = SystemAddressForImage;
LABEL_24:
    LOBYTE(a5) = 0;
    if ( (v10 & 1) == 0 )
    {
LABEL_32:
      LOBYTE(v14) = 5;
      if ( v58 == 2 )
        v17[49] |= 0x80u;
      if ( !v24 && !v23 )
      {
        if ( !v8 )
          goto LABEL_133;
        v27 = (__int64)v66;
        v28 = MiReferenceControlAreaFile((__int64)v66);
        if ( IoIsDeviceEjectable(*(_QWORD *)(v28 + 8)) || (*(_DWORD *)(v29 + 52) & 0x11) != 0 )
          v8 = 0;
        MiDereferenceControlAreaFile(v27, v30);
        if ( !v8 )
LABEL_133:
          MiBackSingleImageWithPagefile(v17);
      }
      v63 = v10 & 1;
      Image = KasanDriverLoadImage((__int64)v17, v63);
      if ( Image < 0 )
        goto LABEL_123;
      LOBYTE(v14) = 69;
      v31 = v7 & 0x40000000;
      v57 = 69;
      if ( (v7 & 0x10000000) == 0 )
      {
        Image = MiResolveImageImports(
                  (_DWORD)v17,
                  a2,
                  (unsigned int)v74,
                  (unsigned int)&String1,
                  (v7 & 0x40000000) != 0,
                  (__int64)&a5);
        if ( Image < 0 )
        {
LABEL_123:
          v37 = v58;
          goto LABEL_124;
        }
        v57 = 85;
      }
      v32 = v66;
      v33 = v66 + 16;
      if ( v31 || (Image = MiProcessLoadConfigForDriver(v17, v66 + 16), Image >= 0) )
      {
        if ( !MiIsRetpolineEnabled() )
          goto LABEL_48;
        v52 = *((_QWORD *)v17 + 6);
        if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v52) )
          MiMapRetpolineStubs(v52, (unsigned __int64)v17[16] >> 12);
        Image = MiMarkKernelImageRetpolineBits(v17, 1LL);
        if ( Image >= 0 )
        {
LABEL_48:
          MiLogRetpolineImageLoadEvents(v17);
          if ( (*(_BYTE *)(*(_QWORD *)(*v32 + 56) + 46LL) & 0x40) == 0 )
          {
            v44 = (_QWORD *)(SystemAddressForImage + *(unsigned int *)(*(_QWORD *)(v32[12] + 32) + 60LL));
            MiSetImageProtection((__int64)v17, (unsigned __int64)v44, 8);
            v45 = *(_QWORD *)(v32[12] + 32);
            v46 = v45 ? *(_QWORD *)(v45 + 40) : 0LL;
            *v44 = SystemAddressForImage - v46;
            if ( v33[2] )
              MiSetImageProtection((__int64)v17, (unsigned __int64)v44, 8);
          }
          if ( v31
            || (v60 = 0, VfDriverLoadImage(v17, v34, 0LL), v57 |= 2u, Image = KseDriverLoadImage(v17, &v60), Image >= 0)
            && (Image = MiApplyImportOptimizationToRuntimeDriver(v17, v32, v7), Image >= 0) )
          {
            if ( (v10 & 2) == 0 || (v7 & 4) == 0 || (Image = MiCompactServiceTable(v17), Image >= 0) )
            {
              Image = MiHandleDriverNonPagedSections((__int64)v17, v7, 1);
              if ( Image >= 0 )
              {
                if ( (v10 & 2) != 0 )
                  *((_BYTE *)MiSessionLookupImage(SystemAddressForImage) + 64) = 1;
                if ( v31 )
                {
                  LOBYTE(v14) = v57;
                  goto LABEL_61;
                }
                Image = MiFinalizeDriverCfgState(v17, v7, v33);
                if ( Image >= 0 )
                {
                  v35 = v63;
                  if ( v63 )
                  {
                    DestinationString = 0LL;
                    if ( (qword_140C69500 & 1) != 0 && (v17[49] & 0x400) == 0 )
                    {
                      RtlInitUnicodeString(&DestinationString, 0LL);
                      v53 = v17[39];
                      v68 = v17[30];
                      v60 = v53;
                      HotPatchRecord = MiFindHotPatchRecord((int)&xmmword_140C694B0, 0, v68, v53, &DestinationString);
                      v55 = HotPatchRecord;
                      if ( HotPatchRecord >= 0 )
                      {
                        v55 = MiLoadHotPatch(&DestinationString, 0LL, &v68, &v60);
                        RtlFreeUnicodeString(&DestinationString);
                      }
                      else if ( HotPatchRecord == -1073741275 )
                      {
                        v55 = 0;
                      }
                      Image = v55;
                      v43 = v55 < 0;
LABEL_96:
                      if ( v43 )
                      {
                        LOBYTE(v14) = v57;
                        v37 = v58;
LABEL_124:
                        Lock = v59;
                        goto LABEL_62;
                      }
                    }
                  }
                  else if ( (v10 & 2) != 0 )
                  {
                    Image = MiApplyRequiredSessionDriverHotPatches(v17);
                    v43 = Image < 0;
                    goto LABEL_96;
                  }
                  MiDriverLoadSucceeded((_DWORD)v17, (_DWORD)Object, a1, (unsigned int)v72, (__int64)&String1, v35);
                  LOBYTE(v14) = v57 | 8;
LABEL_61:
                  Lock = v59;
                  MmReleaseLoadLock(v59);
                  Image = 0;
                  v36 = a7;
                  v37 = v58;
                  *a6 = v17;
                  *v36 = SystemAddressForImage;
LABEL_62:
                  if ( (v10 & 8) != 0 )
                  {
                    MiUpdateDriverLoadInProgress((__int64)v17, 1);
                    LOBYTE(v10) = v10 & 0xF7;
                  }
                  if ( Image < 0 )
                  {
                    if ( v17 )
                    {
                      if ( v37 == 2 && (v14 & 4) == 0 )
                      {
                        v56 = MiSectionControlArea(*((_QWORD *)v17 + 14));
                        MiReturnCrossPartitionControlAreaCharges(v56);
                      }
                      MiUnloadSystemImage((ULONG_PTR)v17);
                    }
                    MmReleaseLoadLock(Lock);
                    if ( !(_BYTE)a5 )
                      MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)Image);
                  }
                  goto LABEL_65;
                }
              }
            }
          }
        }
      }
      goto LABEL_122;
    }
    v26 = RtlImageNtHeader(v25);
    if ( !v26 )
    {
      Image = -1073741279;
      goto LABEL_122;
    }
    if ( *(_WORD *)(v26 + 4) != 0x8664 || *(_WORD *)(v26 + 24) != 523 )
    {
      Image = -1073741520;
      goto LABEL_122;
    }
    if ( (MiFlags & 0x8000) != 0 && (v7 & 0x40000000) == 0 )
    {
      Image = MiValidateStrongCodeDriverImage(v26, v7);
      if ( Image < 0 )
      {
        memset(&v74[1], 0, 0xA0uLL);
        DWORD2(v74[8]) = *(_DWORD *)(v26 + 88);
        v51 = *(_DWORD *)(v26 + 8);
        *(UNICODE_STRING *)((char *)&v74[6] + 8) = String1;
        HIDWORD(v74[10]) = v51;
        MiLogStrongCodeDriverLoadFailure("SectionWXable");
        goto LABEL_122;
      }
    }
    Image = MiConstructLoaderEntry((__int64)v17, (const void **)&String1, (const void **)v72, v7, v8, &v70);
    if ( Image >= 0 )
    {
      MiUpdateDriverLoadInProgress((__int64)v17, 1);
      LOBYTE(v10) = v10 & 0xF7;
      ExFreePoolWithTag(v17, 0);
      v17 = v70;
      v23 = v60;
      if ( v64 )
      {
        *((_QWORD *)v70 + 36) = v64;
        v64 = 0LL;
      }
      goto LABEL_32;
    }
LABEL_122:
    LOBYTE(v14) = v57;
    goto LABEL_123;
  }
  v39 = *((_QWORD *)v17 + 6);
  v40 = v17[49];
  v41 = v7 & 0x40000000;
  SystemAddressForImage = v39;
  if ( (v40 & 0x20) != 0 )
  {
    if ( !v41 )
    {
      MmReleaseLoadLock(v59);
      Image = -1073740608;
      goto LABEL_65;
    }
  }
  else if ( !v41 )
  {
    goto LABEL_75;
  }
  if ( (v7 & 0x20000000) == 0 )
    goto LABEL_79;
LABEL_75:
  if ( v60 == v18 )
  {
    v63 = v10;
    if ( Image != 272 )
      goto LABEL_91;
LABEL_79:
    *a6 = v17;
    *a7 = v39;
    if ( (v17[26] & 0x4000000) != 0 )
      Image = -1073741411;
    else
      Image = (v7 & 0x40000001) != 1 ? 0xC000010E : 0;
    goto LABEL_81;
  }
  inserted = MiSessionInsertImage(v39, v20, v39);
  v18 = 0;
  Image = inserted;
  if ( inserted >= 0 )
  {
    if ( inserted == 272 )
    {
      v39 = SystemAddressForImage;
      goto LABEL_79;
    }
    LOBYTE(v10) = v10 | 2;
LABEL_91:
    ++*((_WORD *)v17 + 54);
    goto LABEL_12;
  }
LABEL_81:
  MmReleaseLoadLock(v59);
LABEL_65:
  if ( a2 )
    ExFreePoolWithTag(v72[1], 0);
  if ( (v10 & 1) != 0 && v64 )
    MiFreePatchTableProtos(v64);
LABEL_70:
  if ( (v10 & 4) != 0 )
    PsDetachSiloFromCurrentThread(v71);
  return (unsigned int)Image;
}
