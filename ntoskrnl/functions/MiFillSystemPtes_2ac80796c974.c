__int64 __fastcall MiFillSystemPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r13
  int v8; // r11d
  unsigned __int64 v9; // r8
  char v10; // r10
  unsigned __int64 v11; // rsi
  signed int v12; // ebp
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r14
  char v25; // r8
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 ValidPte; // rax
  unsigned __int8 CurrentIrql; // bp
  int v35; // eax
  unsigned __int64 v36; // r15
  int v37; // ebp
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  int v41; // edx
  int v42; // r10d
  _DWORD *SchedulerAssist; // r9
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r8
  unsigned __int64 *v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // r15
  int v50; // eax
  __int64 LeafVa; // rax
  char v52; // cl
  unsigned __int8 v53; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v55; // r9
  int v56; // eax
  bool v57; // zf
  unsigned __int64 v58; // [rsp+30h] [rbp-98h]
  int v59; // [rsp+38h] [rbp-90h] BYREF
  int v60; // [rsp+3Ch] [rbp-8Ch]
  __int64 v61; // [rsp+40h] [rbp-88h] BYREF
  __int64 v62; // [rsp+48h] [rbp-80h]
  int v63; // [rsp+50h] [rbp-78h] BYREF
  int v64; // [rsp+54h] [rbp-74h]
  unsigned __int64 v65; // [rsp+58h] [rbp-70h]
  __int64 v66; // [rsp+60h] [rbp-68h]
  __int128 v67; // [rsp+68h] [rbp-60h] BYREF
  __int64 v68; // [rsp+78h] [rbp-50h]
  unsigned int v69; // [rsp+D0h] [rbp+8h]
  int i; // [rsp+E0h] [rbp+18h]
  unsigned int ProtectionPfnCompatible; // [rsp+E8h] [rbp+20h]

  ProtectionPfnCompatible = a4;
  v6 = a1;
  v66 = 0LL;
  v68 = 0LL;
  v60 = 0;
  v8 = 1;
  v62 = 0LL;
  v9 = a2;
  v61 = 0LL;
  v10 = a4;
  *a6 = 0;
  v11 = 0LL;
  v69 = 1;
  v67 = 0LL;
  if ( a4 )
  {
    if ( a4 == 31 )
    {
      v69 = 1;
    }
    else if ( a4 >> 3 == 3 )
    {
      if ( (a4 & 7) != 0 )
      {
        v8 = 2;
        v69 = 2;
      }
    }
    else if ( a4 >> 3 == 1 )
    {
      v8 = 0;
      v69 = 0;
    }
  }
  else
  {
    v8 = 3;
    v69 = 3;
  }
  v12 = a4 | 0xA0000000;
  v13 = a4 & 0x1F;
  v14 = MmProtectToPteMask[v13] & 0xFFF0000000000E5EuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = MmProtectToPteMask[v13] & 0xFFF0000000000E5EuLL | 0x121;
    v16 = a4 & 0x4000000;
  }
  else
  {
    v15 = (__int64)(a1 << 25) >> 16;
    if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v14 = MmProtectToPteMask[v13] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (a4 & 0x4000000) == 0 )
      {
        v14 = MmProtectToPteMask[v13] & 0x7FF0000000000E5ELL | 0x21;
      }
      v50 = MiUserPdeOrAbove(a1);
      v8 = v69;
      v10 = ProtectionPfnCompatible;
      v9 = a2;
      if ( v50 )
        v14 |= 4uLL;
    }
    if ( v6 <= 0xFFFFF6BFFFFFFF78uLL )
      v14 |= 4uLL;
    v16 = v12 & 0x4000000;
    if ( (v12 & 0x4000000) != 0 )
    {
      LeafVa = MiGetLeafVa((__int64)(v6 << 25) >> 16);
      v9 = a2;
      v15 = LeafVa;
    }
    if ( v15 < 0xFFFF800000000000uLL )
    {
      v17 = HIBYTE(word_140C6697C);
      goto LABEL_20;
    }
    if ( byte_140C6A058[((v15 >> 39) & 0x1FF) - 256] != 1
      && (v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      if ( v15 < qword_140C6A1D8 || v15 > qword_140C66CF0 )
        v17 = (unsigned __int8)word_140C6697C;
      else
        v17 = HIBYTE(word_140C6697C);
LABEL_20:
      if ( v17 )
        v14 |= 0x100uLL;
    }
  }
  v18 = v14 | 0x42;
  if ( (v13 & 5) != 4 || v12 >= 0 )
    v18 = v14;
  if ( (v12 & 0x40000000) != 0 )
    v18 &= ~4uLL;
  v19 = ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (unsigned __int64)v18;
  if ( (v12 & 0x8000000) != 0 )
    v19 &= ~0x100uLL;
  if ( v16 )
    v19 |= 0x80uLL;
  v58 = v9;
  v65 = 0LL;
  v20 = v19 & 0xFAFFFFFFFFFFFFFFuLL;
  v21 = a3 - 8;
  v22 = 0LL;
  v23 = 0LL;
  if ( a3 >= 0 )
  {
    v21 = 0LL;
    v22 = a3 - 1;
  }
  v24 = v9;
  if ( !v9 )
    return 0LL;
  v25 = a5;
  v26 = HIDWORD(v68);
  v27 = a5 & 2;
  v64 = v27;
  for ( i = HIDWORD(v68); ; v26 = i )
  {
    v28 = v21;
    if ( v21 )
      v22 = *(_QWORD *)(v21 + 8);
    else
      ++v22;
    v21 += 8LL;
    if ( !v28 )
      v21 = 0LL;
    if ( !v27 || v22 != qword_140C69388 )
      break;
LABEL_51:
    --v24;
    v6 += 8LL;
    v58 = v24;
    if ( !v24 )
      return 0LL;
    v27 = v64;
    v25 = a5;
    v8 = v69;
    v10 = ProtectionPfnCompatible;
    v23 = v65;
  }
  if ( v22 > qword_140C65820 )
  {
LABEL_63:
    if ( v23 )
    {
      v45 = 2 * (((unsigned int)v22 & ((1 << (dword_140C65760 - 12)) - 1)) - *(_DWORD *)(v62 + 24));
      v41 = (*(_DWORD *)(v62 + 4 * (v45 >> 5) + 44) >> (v45 & 0x1F)) & 3;
      v65 = v23 - 1;
    }
    else
    {
      if ( v26 && v22 >= (unsigned __int64)v67 && v22 <= *((_QWORD *)&v67 + 1) )
      {
        v35 = v66;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v44) = 4;
          else
            v44 = (-1LL << (CurrentIrql + 1)) & 4;
          v49 = v61;
          SchedulerAssist[5] |= v44;
          v62 = v49;
        }
        MiIoSpaceGetBounds((__int64)&v67, v22);
        if ( KiIrqlFlags )
        {
          v53 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v53 <= 0xFu && CurrentIrql <= 0xFu && v53 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v55 = CurrentPrcb->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v57 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v57 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v8 = v69;
            }
            v62 = v61;
          }
        }
        __writecr8(CurrentIrql);
        v35 = v68;
        v26 = HIDWORD(v68);
        v10 = ProtectionPfnCompatible;
        v66 = v68;
        i = HIDWORD(v68);
      }
      if ( v26 == 3 )
      {
        if ( v21 )
        {
          v36 = 1LL;
          if ( v24 > 1 )
          {
            v46 = v24 - 1;
            v47 = (unsigned __int64 *)(v21 + 8);
            do
            {
              v48 = *v47;
              if ( *v47 != *(v47 - 1) + 1
                || (v48 & 0x1FF) == 0
                || v48 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v48 - 0x21FFFFFFFFD8LL), 0x36u) )
              {
                break;
              }
              ++v36;
              ++v47;
              --v46;
            }
            while ( v46 );
          }
        }
        else
        {
          v36 = MiIoPagesInRun(v22, v24);
        }
        v37 = MiReferenceIoPages(1, v22, v36, v8, 0LL, &v61);
        if ( v37 < 0 )
          goto LABEL_139;
        v38 = v61;
        v10 = ProtectionPfnCompatible;
        v39 = (1LL << ((unsigned __int8)dword_140C65760 - 12)) - 1;
        v62 = v61;
        *a6 |= 1u;
        v40 = 2 * (((unsigned int)v22 & (unsigned int)v39) - *(_DWORD *)(v38 + 24));
        v41 = (*(_DWORD *)(v38 + 4 * (v40 >> 5) + 44) >> (v40 & 0x1F)) & 3;
        v65 = v36 - 1;
      }
      else
      {
        v41 = v35;
      }
    }
    v42 = v10 & 7;
    ProtectionPfnCompatible = v42;
    if ( v41 )
    {
      if ( v41 != 2 )
        goto LABEL_76;
      v42 |= 0x18u;
    }
    else
    {
      v42 |= 0x10u;
    }
    ProtectionPfnCompatible = v42;
LABEL_76:
    if ( v60 && v60 == v42 )
    {
      v60 = v42;
      ValidPte = v11 ^ (v11 ^ (v22 << 12)) & 0xFFFFFFFFFF000LL;
      v11 = ValidPte;
    }
    else
    {
      ValidPte = MiMakeValidPte(v6, v22, v42 | 0xA0000000);
      v11 = ValidPte;
      v60 = ProtectionPfnCompatible;
    }
LABEL_50:
    *(_QWORD *)v6 = ValidPte;
    goto LABEL_51;
  }
  if ( !_bittest64((const signed __int64 *)(48 * v22 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v26 = i;
    goto LABEL_63;
  }
  v29 = 48 * v22 - 0x220000000000LL;
  if ( (v25 & 1) != 0 && ((*(_BYTE *)(v29 + 34) & 7) != 5 || !_bittest64((const signed __int64 *)(v29 + 40), 0x35u)) )
    KeBugCheckEx(0x1Au, 0x1160CuLL, v22, 0LL, 0LL);
  if ( !*(_WORD *)(v29 + 32)
    && ((v25 & 1) == 0 || (*(_BYTE *)(v29 + 34) & 7) != 5 || !_bittest64((const signed __int64 *)(v29 + 40), 0x35u)) )
  {
    MiShowBadMapper(v22, 1uLL);
  }
  v30 = *(_QWORD *)(v29 + 40);
  if ( v30 < 0 )
    goto LABEL_46;
  if ( (v30 & 0x10000000000LL) == 0 )
  {
    v31 = (__int64)(*(_QWORD *)(v29 + 8) << 25) >> 16;
    if ( v31 >= 0xFFFFF68000000000uLL && v31 <= 0xFFFFF6FFFFFFFFFFuLL && (v30 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
    {
      v52 = *(_BYTE *)(v29 + 34);
      if ( ((v52 & 0x20) == 0 || (*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v29 + 32))
        && (v52 & 8) == 0
        && ((*(_QWORD *)v29 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) != 0xFFFF800000000030uLL )
      {
        v24 = v58;
        v37 = -1073741800;
        goto LABEL_139;
      }
    }
    goto LABEL_46;
  }
  v59 = 0;
  v63 = 0;
  if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(48 * v22 - 0x220000000000LL, &v59, &v63) != 3 && v59 == 6 )
  {
LABEL_46:
    if ( (*(_BYTE *)(v29 + 34) & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(48 * v22 - 0x220000000000LL, v69);
    if ( v69 == *(unsigned __int8 *)(v29 + 34) >> 6 )
    {
      v24 = v58;
      ValidPte = v20 | ((v22 & 0xFFFFFFFFFFLL | 0xA00000000000LL) << 12);
    }
    else
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v22 - 0x220000000000LL);
      ValidPte = MiMakeValidPte(v6, v22, ProtectionPfnCompatible | 0xA0000000);
      v24 = v58;
    }
    goto LABEL_50;
  }
  v24 = v58;
  v37 = -1073741800;
LABEL_139:
  if ( (*a6 & 1) != 0 )
    MiZeroAndFlushPtes((__int64)(((v24 - a2) << 28) + (v6 << 25)) >> 16, a2 - v24, 1);
  return (unsigned int)v37;
}
