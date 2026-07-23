/*
 * XREFs of MiConstructLoaderEntry @ 0x14075D5C0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiManageSubsectionView @ 0x140291780 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MiProcessLoaderEntry @ 0x140372B40 (MiProcessLoaderEntry.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpCovGetSectionInfo @ 0x14075DCF0 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x14075DD54 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x14075DE34 (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407733E0 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiConstructLoaderEntry(
        __int64 a1,
        const void **a2,
        const void **a3,
        int a4,
        int a5,
        unsigned int **a6)
{
  char v9; // bp
  SIZE_T v10; // rdx
  unsigned int *v11; // rdi
  _WORD *Pool; // rax
  _WORD *v13; // r14
  unsigned __int64 v14; // r12
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // r8d
  PIMAGE_NT_HEADERS v17; // rsi
  unsigned __int64 NumberOfSections; // r10
  char *v19; // r15
  unsigned int v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r13
  SIZE_T v26; // rdx
  _OWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  char *v31; // rbx
  char *v32; // r14
  char *v33; // rcx
  bool v34; // zf
  int v35; // r13d
  unsigned __int64 v36; // r14
  __int16 v37; // r8
  unsigned __int64 v38; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v44; // r8d
  char *v45; // r15
  unsigned __int64 v46; // rcx
  unsigned int v47; // eax
  int v48; // edx
  unsigned __int64 v49; // rbp
  unsigned int v50; // r9d
  __int64 v51; // r8
  unsigned int *v52; // r15
  __int64 v53; // rax
  unsigned int v54; // r13d
  unsigned int v55; // edx
  __int64 v56; // rax
  unsigned __int128 v57; // rax
  unsigned __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // [rsp+20h] [rbp-118h]
  unsigned int v61; // [rsp+20h] [rbp-118h]
  int v62; // [rsp+28h] [rbp-110h]
  __int64 v63; // [rsp+30h] [rbp-108h]
  __int64 v64; // [rsp+30h] [rbp-108h]
  _IMAGE_DATA_DIRECTORY *v65; // [rsp+38h] [rbp-100h]
  __int128 v66; // [rsp+40h] [rbp-F8h]
  char *v67; // [rsp+50h] [rbp-E8h]
  __int64 v68; // [rsp+58h] [rbp-E0h]
  __int64 v69[27]; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v72; // [rsp+150h] [rbp+18h] BYREF
  int v73; // [rsp+158h] [rbp+20h]

  v73 = a4;
  v9 = a4;
  memset(&v69[1], 0, 0x88uLL);
  v10 = *(unsigned __int16 *)a3 + 2LL;
  v60 = 0LL;
  *a6 = 0LL;
  v11 = 0LL;
  DWORD1(v66) = 0;
  Pool = MiAllocatePool(256, v10, 0x54446D4Du);
  *((_QWORD *)&v66 + 1) = Pool;
  v13 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  LOWORD(v66) = *(_WORD *)a3;
  WORD1(v66) = *(_WORD *)a3;
  memmove(Pool, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(_QWORD *)(a1 + 48);
  v15 = RtlImageNtHeader((PVOID)v14);
  v16 = v9 & 1;
  v17 = v15;
  v62 = v16;
  if ( (v9 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v72 = 0;
  }
  else
  {
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v72 = v15->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v59 = -1073741520;
      goto LABEL_78;
    }
  }
  v65 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( v16 )
  {
    v20 = 32;
    if ( v15->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v15->OptionalHeader.DataDirectory[6].VirtualAddress;
      v65 = &v17->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v17->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v17->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v20 = Size + 32;
              v44 = 0;
              v45 = (char *)(v14 + VirtualAddress);
              v46 = Size / 0x1C;
              if ( v46 )
              {
                do
                {
                  v47 = *((_DWORD *)v45 + 5);
                  if ( v47 )
                  {
                    if ( v47 < SizeOfImage )
                    {
                      v48 = *((_DWORD *)v45 + 4);
                      if ( v48 + v47 < SizeOfImage )
                        v20 += v48;
                    }
                  }
                  ++v44;
                  v45 += 28;
                }
                while ( v44 < v46 );
              }
              v19 = &v45[-28 * v44];
            }
          }
        }
      }
      v20 = (v20 + 7) & 0xFFFFFFF8;
    }
  }
  v21 = (v17->OptionalHeader.SizeOfImage >> 12) + ((v17->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v22 = 8 * ((v21 >> 6) + ((v21 & 0x3F) != 0) + 2);
  v23 = (unsigned int)v22;
  v24 = v22 + 306;
  v63 = v23;
  if ( v24 <= 0x132 )
    goto LABEL_76;
  if ( v20 )
  {
    if ( v24 + v20 <= v24 )
      goto LABEL_76;
    v24 += v20;
  }
  v25 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v24 + v25;
  if ( v24 + v25 <= v24 )
  {
LABEL_76:
    v59 = -1073741701;
    goto LABEL_78;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v26 + 4LL * (unsigned int)NumberOfSections > v26 )
    {
      v26 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_76;
  }
LABEL_11:
  v67 = (char *)MiAllocatePool(64, v26, 0x644C6D4Du);
  v11 = (unsigned int *)v67;
  if ( !v67 )
    goto LABEL_77;
  v27 = (_OWORD *)a1;
  v28 = *(_QWORD *)(a1 + 112);
  v68 = v28;
  if ( !v28 )
    goto LABEL_15;
  v29 = MiSectionControlArea(v28);
  v60 = (*(_DWORD *)(*(_QWORD *)v29 + 8LL) >> 12) + (unsigned int)((*(_DWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFF) != 0);
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v60, 0LL, v30) )
  {
LABEL_77:
    v59 = -1073741670;
LABEL_78:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v59;
  }
  v27 = (_OWORD *)a1;
LABEL_15:
  v31 = v67 + 160;
  *((_QWORD *)v67 + 33) = 0LL;
  v32 = &v67[v63 + 304];
  v33 = &v32[v20];
  *((_QWORD *)v67 + 34) = v67 + 304;
  v34 = v72 == 0;
  *((_QWORD *)v67 + 32) = v32;
  *((_QWORD *)v67 + 27) = v60;
  if ( !v34 )
    *((_QWORD *)v67 + 28) = &v33[v25];
  *(_OWORD *)v67 = *v27;
  *((_OWORD *)v67 + 1) = v27[1];
  *((_OWORD *)v67 + 2) = v27[2];
  *((_OWORD *)v67 + 3) = v27[3];
  *((_OWORD *)v67 + 4) = v27[4];
  *((_OWORD *)v67 + 5) = v27[5];
  *((_OWORD *)v67 + 6) = v27[6];
  *((_OWORD *)v67 + 7) = v27[7];
  *((_OWORD *)v67 + 8) = v27[8];
  *((_OWORD *)v67 + 9) = v27[9];
  if ( v17->OptionalHeader.MajorOperatingSystemVersion >= 5u && v17->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v67 + 26) |= 0x8000000u;
  if ( (v17->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v67 + 26) |= 0x20u;
  *((_QWORD *)v67 + 12) = v33;
  *((_WORD *)v67 + 44) = *(_WORD *)a2;
  *((_WORD *)v67 + 45) = *(_WORD *)a2;
  memmove(v33, a2[1], *(unsigned __int16 *)a2);
  v35 = v62;
  *(_WORD *)(*((_QWORD *)v67 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v67 + 5) = 0LL;
  *(_OWORD *)(v67 + 72) = v66;
  if ( v62 )
  {
    *((_DWORD *)v67 + 26) |= 0x20000000u;
    *((_QWORD *)v67 + 5) = v32;
    *(_DWORD *)v32 = 84302;
    *((_DWORD *)v32 + 1) = v20;
    *((_WORD *)v32 + 4) = v17->FileHeader.Machine;
    *((_WORD *)v32 + 5) = v17->FileHeader.Characteristics;
    *((_DWORD *)v32 + 3) = v17->FileHeader.TimeDateStamp;
    *((_DWORD *)v32 + 4) = v17->OptionalHeader.CheckSum;
    *((_DWORD *)v32 + 5) = v17->OptionalHeader.SizeOfImage;
    *((_QWORD *)v32 + 3) = v14;
    if ( v19 )
    {
      memmove(v32 + 32, v19, v65->Size);
      v49 = v65->Size;
      v61 = 0;
      v50 = 0;
      if ( v49 / 0x1C )
      {
        v51 = 0LL;
        v64 = 0LL;
        v52 = (unsigned int *)(v19 + 16);
        do
        {
          v53 = v52[1];
          v54 = *v52;
          v72 = v49;
          if ( (_DWORD)v53
            && (v55 = v17->OptionalHeader.SizeOfImage, (unsigned int)v53 < v55)
            && (unsigned int)v53 + v54 > (unsigned int)v53
            && (unsigned int)v53 + v54 < v55 )
          {
            memmove(&v32[(unsigned int)v49 + 32], (const void *)(v14 + v53), v54);
            v51 = v64;
            LODWORD(v49) = v54 + v49;
            v50 = v61;
          }
          else
          {
            v72 = 0;
          }
          ++v50;
          v56 = 28 * v51;
          v51 = v50;
          v52 += 7;
          v61 = v50;
          v64 = v50;
          *(_DWORD *)&v32[v56 + 52] = v72;
          v57 = v65->Size * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v50 < (*((_QWORD *)&v57 + 1) + (((unsigned __int64)v65->Size - *((_QWORD *)&v57 + 1)) >> 1)) >> 4 );
        v11 = (unsigned int *)v67;
        v35 = v62;
        v31 = v67 + 160;
      }
    }
  }
  *((_QWORD *)v11 + 7) = v14 + v17->OptionalHeader.AddressOfEntryPoint;
  v11[30] = v17->OptionalHeader.CheckSum;
  if ( v68 )
  {
    v36 = MiSectionControlArea(v68);
    v37 = *((_WORD *)v11 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v36 + 15LL) >> 4);
    *((_WORD *)v11 + 55) = v37;
    *((_WORD *)v11 + 55) = v37 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v36 + 15LL) >> 1) & 7));
  }
  else
  {
    v36 = 0LL;
  }
  v11[38] = v17->OptionalHeader.SizeOfImage;
  v11[39] = v17->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v68 )
    v38 = *(unsigned int *)(*(_QWORD *)v36 + 8LL);
  else
    v38 = (unsigned __int64)v11[16] >> 12;
  if ( v35 )
    goto LABEL_30;
  *((_QWORD *)v31 + 5) = v38;
  *((_QWORD *)v31 + 6) = v38;
  if ( (PVOID)v14 == PsNtosImageBase )
    goto LABEL_70;
  if ( (PVOID)v14 == PsHalImageBase )
  {
    if ( (PVOID)v14 != PsNtosImageBase )
    {
      v58 = v38 - MxHalFreedGapCharges;
      goto LABEL_71;
    }
LABEL_70:
    v58 = v38 - MxKernelFreedGapCharges;
LABEL_71:
    *((_QWORD *)v31 + 5) = v58;
  }
LABEL_30:
  if ( !a5 )
    *((_DWORD *)v31 + 9) |= 1u;
  if ( (dword_140CFB174 & 1) != 0 || (v73 & 2) != 0 )
    *((_DWORD *)v31 + 9) |= 0x10u;
  *((_QWORD *)v11 + 16) = 0LL;
  v72 = 0;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v11 + 6), &v72);
    if ( SectionInfo )
    {
      v11[31] = v72;
      *((_QWORD *)v11 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
  }
  MiProcessLoaderEntry((unsigned __int64 *)v11, 1);
  if ( !v35 )
  {
    if ( v68 )
    {
      *((_DWORD *)v31 + 8) = -2;
      *((_QWORD *)v31 + 2) = v14 | 3;
      *((_QWORD *)v31 + 3) = (v38 << 12) + v14 - 1;
      v69[0] = v36;
      MiManageSubsectionView(v69, v31, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
