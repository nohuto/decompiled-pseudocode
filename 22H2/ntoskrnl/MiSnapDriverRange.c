/*
 * XREFs of MiSnapDriverRange @ 0x14075E738
 * Callers:
 *     MiCheckForDiscardableLongJumpTable @ 0x140553880 (MiCheckForDiscardableLongJumpTable.c)
 *     MiHandleDriverNonPagedSections @ 0x14075C100 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x14075E3A4 (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x14075E690 (MiDisablePagingOfDriver.c)
 *     MiMarkKernelImageCfgBits @ 0x140772E64 (MiMarkKernelImageCfgBits.c)
 *     MiBackSingleImageWithPagefile @ 0x140780B14 (MiBackSingleImageWithPagefile.c)
 *     MiEnablePagingOfDriver @ 0x1407A5740 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MiIsKernelHalPadSection @ 0x1403C7F9C (MiIsKernelHalPadSection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MmImageSectionPagable @ 0x1406FE3BC (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  void *v10; // rbx
  PIMAGE_NT_HEADERS v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 SectionAlignment; // r11
  unsigned int NumberOfSections; // r9d
  unsigned __int64 v15; // r15
  __int64 SizeOfOptionalHeader; // r8
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v18; // r13
  __int64 *v19; // rdi
  unsigned int v20; // r8d
  int v21; // edx
  unsigned int v22; // ebx
  int v23; // eax
  bool v24; // cf
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int16 v28; // dx
  PVOID v29; // rax
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v33; // rax
  unsigned int v34; // [rsp+28h] [rbp-B0h]
  unsigned int v35; // [rsp+2Ch] [rbp-ACh]
  unsigned __int64 v36; // [rsp+30h] [rbp-A8h]
  void *v38; // [rsp+50h] [rbp-88h]
  _IMAGE_NT_HEADERS64 *v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h] BYREF
  int v43; // [rsp+78h] [rbp-60h]
  __int128 v44; // [rsp+7Ch] [rbp-5Ch]
  __int64 v45; // [rsp+8Ch] [rbp-4Ch]
  int v46; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v42 = 0LL;
  *a5 = 0LL;
  v44 = 0LL;
  *a6 = 0LL;
  v10 = *(void **)(a1 + 48);
  v45 = 0LL;
  v38 = v10;
  v11 = RtlImageNtHeader(v10);
  v40 = v11;
  v12 = a4 - (_QWORD)v10;
  SectionAlignment = v11->OptionalHeader.SectionAlignment;
  NumberOfSections = v11->FileHeader.NumberOfSections;
  v15 = (unsigned int)SectionAlignment;
  v36 = a4 - (_QWORD)v10;
  if ( SectionAlignment > 0x1000 )
    v15 = 4096LL;
  v35 = v11->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v11->FileHeader.SizeOfOptionalHeader;
  v41 = SizeOfOptionalHeader;
  PteAddress = 0LL;
  v46 = 0x40000000;
  v18 = 0LL;
  DWORD1(v44) = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v11 + 24 - (_DWORD)v10;
  v43 = DWORD1(v44);
  while ( 1 )
  {
    if ( a2 )
      v19 = (__int64 *)((char *)&v11->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v19 = &v42;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    v34 = v20;
    if ( !a4 )
      break;
    v33 = *((unsigned int *)v19 + 3);
    if ( v12 < v33 || v12 >= v20 + (unsigned int)v33 )
      goto LABEL_18;
    if ( (a3 & 0x40) != 0 && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
      return 0LL;
LABEL_24:
    v25 = *((unsigned int *)v19 + 3);
    if ( !PteAddress )
      PteAddress = MiGetPteAddress(((unsigned __int64)v10 + v25 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v26 = MiGetPteAddress(-(__int64)v15 & ((unsigned __int64)v10 + v15 + v20 + v25 - 1));
    v18 = v26;
    if ( (v28 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v15 >= 0x1000 )
      v18 = v26 - 8;
    if ( v27 > 0x1000 )
      goto LABEL_18;
LABEL_19:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v30 = *((_DWORD *)v19 + 4);
        if ( v30 < *((_DWORD *)v19 + 2) )
          v30 = *((_DWORD *)v19 + 2);
        v31 = MiGetPteAddress(((-(__int64)v15 & ((unsigned __int64)v10 + v15 + v30 + *((unsigned int *)v19 + 3) - 1))
                             + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v31 )
        {
          *a5 = PteAddress;
          *a6 = v31;
        }
      }
      return 0LL;
    }
    v11 = v40;
    SizeOfOptionalHeader = v41;
  }
  if ( (a3 & 8) != 0 )
  {
    v21 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
    goto LABEL_23;
  }
  if ( (a3 & 1) != 0 )
  {
    v21 = MmImageSectionPagable((__int64)v19);
    goto LABEL_22;
  }
  if ( (a3 & 4) != 0 )
  {
    v22 = *((_DWORD *)v19 + 9) & 0xE0000000;
    v23 = MmImageSectionPagable((__int64)v19);
    v24 = v22 != 0;
    v10 = v38;
    v21 = v24 && v23 == 0;
LABEL_22:
    NumberOfSections = v35;
    v20 = v34;
    v12 = v36;
    goto LABEL_23;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v21 = *((_DWORD *)v19 + 9) & 0x20000000;
    goto LABEL_23;
  }
  if ( (a3 & 0x20) != 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 75
      || *((_BYTE *)v19 + 5) != 68 )
    {
      goto LABEL_18;
    }
    goto LABEL_24;
  }
  if ( !*(_DWORD *)v19 && v19 != &v42 )
    return 0LL;
  v21 = *((_DWORD *)v19 + 9) & 0x2000000;
  if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *(_DWORD *)v19 == 1414090313 )
    v21 = 0;
  if ( v21 )
  {
    v29 = *(PVOID *)(a1 + 48);
    if ( (v29 == PsNtosImageBase || v29 == PsHalImageBase) && MiIsKernelHalPadSection((__int64)v19) )
      v21 = 0;
LABEL_23:
    if ( !v21 )
      goto LABEL_18;
    goto LABEL_24;
  }
LABEL_18:
  if ( !PteAddress )
    goto LABEL_19;
  if ( PteAddress > v18 )
  {
    PteAddress = 0LL;
    goto LABEL_19;
  }
  *a5 = PteAddress;
  *a6 = v18;
  if ( a2 + 1 <= NumberOfSections )
    return a2 + 1;
  return v6;
}
