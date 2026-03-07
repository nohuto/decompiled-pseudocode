__int64 __fastcall MiCreateNewSection(int *a1, __int64 *a2)
{
  unsigned __int16 **v3; // rdi
  struct _FILE_OBJECT *v4; // r13
  int v5; // r15d
  __int64 v6; // rsi
  unsigned __int16 *v7; // rdi
  int v9; // r14d
  int v10; // eax
  int v11; // r12d
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v14; // r14
  signed __int64 v15; // rax
  ULONG_PTR v16; // r14
  int v17; // esi
  _QWORD *v18; // r15
  __int64 *v19; // r12
  int v20; // edx
  __int64 v21; // r8
  int v22; // ecx
  unsigned int v23; // r15d
  int v24; // ecx
  int Blink; // r12d
  int v26; // eax
  char v27; // r9
  char v28; // al
  int v29; // edx
  int v30; // r12d
  int DirectImageOriginalBase; // eax
  __int64 v32; // rax
  char v33; // cl
  char v34; // r15
  char v35; // cl
  PMDL v36; // rbx
  struct _MDL *v37; // r15
  ULONG i; // esi
  char v39; // [rsp+50h] [rbp-89h]
  char v40; // [rsp+51h] [rbp-88h]
  char v41; // [rsp+52h] [rbp-87h] BYREF
  char v42; // [rsp+53h] [rbp-86h] BYREF
  int v43; // [rsp+54h] [rbp-85h]
  __int64 v44; // [rsp+58h] [rbp-81h] BYREF
  __int64 v45; // [rsp+60h] [rbp-79h] BYREF
  __int64 *v46; // [rsp+68h] [rbp-71h]
  __int64 v47; // [rsp+70h] [rbp-69h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-61h] BYREF
  __int64 v49[14]; // [rsp+80h] [rbp-59h] BYREF

  v46 = a2;
  v45 = 0LL;
  v47 = 0LL;
  memset(v49, 0, sizeof(v49));
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 22);
  v4 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v5 = a1[4];
  v6 = *((_QWORD *)a1 + 19);
  v39 = *((_BYTE *)a1 + 24);
  v41 = 0;
  v43 = 0;
  v42 = 0;
  v40 = 0;
  LODWORD(v44) = 0;
  if ( v3 )
    v7 = *v3;
  else
    v7 = MiSystemPartition;
  if ( (*((_DWORD *)v7 + 1) & 0x80u) != 0 )
  {
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(v4);
      *a1 &= ~2u;
    }
    return 3221225659LL;
  }
  v9 = MiEnablePartitionMappedWrites(v7);
  if ( v9 >= 0 )
  {
    v10 = a1[43];
    MemoryDescriptorList = 0LL;
    v11 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
      ImageFileMap = MiCreateImageFileMap(
                       v4,
                       (__int64)&v45,
                       (__int64)&MemoryDescriptorList,
                       (__int64)v49,
                       (__int64)&v44);
    else
      ImageFileMap = MiCreateDataFileMap(v4, a1[7], v5, v10, *a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*((PIRP *)a1 + 23));
        FsRtlReleaseFile(v4);
        *a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v14 = v45;
    *v46 = v45;
    if ( v6 )
    {
      *((_QWORD *)a1 + 16) = v6;
    }
    else
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v14 = v45;
      *((_QWORD *)a1 + 16) = v15;
    }
    v16 = *(_QWORD *)v14;
    if ( (*a1 & 0x1000000) != 0 )
      *(_BYTE *)(v16 + 62) |= 1u;
    if ( (*a1 & 0x2000) != 0 && (v4->DeviceObject->Characteristics & 0x10) == 0 && (!v11 || (v49[1] & 0xFFF) == 0) )
      *(_DWORD *)(v16 + 56) |= 0x40000000u;
    if ( (*a1 & 0x4000) != 0 )
      *(_DWORD *)(v16 + 56) |= 0x20000u;
    v17 = 2;
    v18 = (_QWORD *)MiSectionCreated(a1, (__int64)v4, v16, (__int64 *)MemoryDescriptorList);
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(v4);
      *a1 &= ~2u;
    }
    if ( !v11 )
      goto LABEL_118;
    v19 = *(__int64 **)(v45 + 56);
    v46 = v19;
    if ( !LODWORD(v49[11]) && !HIDWORD(v49[11]) && !*((_BYTE *)v19 + 50) )
      *(_BYTE *)(v45 + 15) |= 1u;
    if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
    {
      if ( (*a1 & 0x100000) != 0 )
      {
        dword_140C65490 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_121:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified(v16, a1[42]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C65490 = 6;
        goto LABEL_121;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders(v16, v49, &v42);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C65490 = 4;
      goto LABEL_121;
    }
    v20 = *a1;
    v21 = 4LL;
    if ( (*a1 & 0x100) != 0 )
    {
      v22 = 4;
    }
    else if ( (v20 & 0x20) != 0 )
    {
      v22 = 1;
    }
    else if ( (v20 & 0x10) != 0 )
    {
      v22 = (*a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v22 = 0;
    }
    v23 = v22 | 0x10;
    if ( (v20 & 0x800) == 0 )
      v23 = v22;
    v24 = *a1;
    if ( (v20 & 0x8400) == 0 || (v20 & 0x10) != 0 )
    {
      v27 = v39;
    }
    else
    {
      LOBYTE(v21) = v39;
      Blink = (int)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((__int64)v4, v23, v21, 0, &v41);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C65490 = 7;
        goto LABEL_121;
      }
      v24 = *a1;
      if ( (*a1 & 0x800) == 0 )
      {
        if ( v39 )
        {
          v26 = v43;
          if ( (Blink & 0x800000) != 0 )
            v26 = 1;
          v43 = v26;
        }
        if ( (Blink & 0x1000000) != 0 )
        {
          v40 = 8;
        }
        else if ( (Blink & 0x2000000) != 0 )
        {
          v40 = 6;
        }
      }
      v27 = v41;
      v19 = v46;
      v39 = v41;
      *((_BYTE *)a1 + 24) = v41;
    }
    if ( (v24 & 0x100000) != 0 )
    {
      v28 = v27;
      v23 |= 0x40000000u;
      if ( !v27 )
        v28 = 4;
      v27 = v28;
      v39 = v28;
    }
    v29 = v23 | 0x20000000;
    if ( (v24 & 0x800000) == 0 )
      v29 = v23;
    LODWORD(v46) = v29;
    if ( (MiFlags & 0x20000) != 0 )
    {
      v24 |= 0x8000u;
      *a1 = v24;
      if ( !v27 )
      {
        v27 = 1;
        v39 = 1;
      }
    }
    if ( (v24 & 0x8000) == 0 )
    {
      if ( (v24 & 0x400) == 0 )
        goto LABEL_84;
      if ( !v27 && *((char *)v19 + 46) >= 0 )
        goto LABEL_82;
    }
    v43 |= 2u;
    if ( (v24 & 0x400) != 0 )
    {
LABEL_82:
      if ( v40 )
        v43 |= 4u;
    }
LABEL_84:
    if ( (v24 & 0x40) == 0 )
      v17 = (v24 & 0x20) != 0;
    v30 = 0;
    if ( (*(_BYTE *)(v16 + 62) & 0xC) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v4);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v32 = v47;
        goto LABEL_93;
      }
      if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
      {
        dword_140C65490 = 8;
        goto LABEL_121;
      }
    }
    v32 = -1LL;
    v47 = -1LL;
LABEL_93:
    v33 = v43;
    v34 = v42;
    if ( (v43 & 6) != 0 )
    {
      if ( v32 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v45, (unsigned int)v49, v44, v17, v32, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140C65490 = 9;
          goto LABEL_121;
        }
        v30 = 1;
        if ( v34 )
          MiMakeImageReadOnly(v16);
        v33 = v43;
      }
      v35 = v33 | 8;
      if ( (*a1 & 0x10000000) == 0 )
        v35 = v43;
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    (ULONG_PTR)v4,
                                    v16,
                                    a1[42],
                                    *((_QWORD *)a1 + 20),
                                    (int)v46,
                                    v35,
                                    v39,
                                    v40);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140C65490 = 10;
        goto LABEL_121;
      }
      if ( v30 )
        goto LABEL_109;
      v32 = v47;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v45, (unsigned int)v49, v44, v17, v32, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140C65490 = 11;
      goto LABEL_121;
    }
    if ( v34 )
      MiMakeImageReadOnly(v16);
LABEL_109:
    v36 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v36->MdlFlags & 4) == 0 )
        {
          v37 = v36 + 1;
          for ( i = v36->ByteCount >> 12; i; --i )
          {
            if ( v37->Next != (struct _MDL *)-1LL )
              MiFinalizeImageHeaderPage(48 * (__int64)v37->Next - 0x220000000000LL);
            v37 = (struct _MDL *)((char *)v37 + 8);
          }
        }
        v36 = v36->Next;
      }
      while ( v36 );
      v36 = MemoryDescriptorList;
    }
    MiDeleteImageCreationMdls(v36);
    v18 = (_QWORD *)MiReleaseImageSection((__int64)v4, v16);
LABEL_118:
    MiReleaseControlAreaWaiters(v18);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*((PIRP *)a1 + 23));
    FsRtlReleaseFile(v4);
    *a1 &= ~2u;
  }
  return (unsigned int)v9;
}
