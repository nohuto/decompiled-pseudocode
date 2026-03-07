__int64 __fastcall HalMapTransferEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        char a7,
        _DWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  bool v13; // zf
  __int64 v15; // rsi
  unsigned int *v16; // rax
  _DWORD *v17; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // eax
  unsigned int v23; // r14d
  unsigned __int64 v24; // r15
  unsigned int MaxFragments; // eax
  unsigned int *v26; // r15
  __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r15d
  __int64 v31; // r9
  unsigned int v32; // r13d
  __int64 v33; // rdx
  unsigned int v34; // r10d
  __int64 *v35; // r11
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // edx
  __int16 v44; // bx
  __int64 v45; // rcx
  unsigned int v46; // eax
  unsigned int v47; // ebx
  __int64 v48; // rcx
  unsigned int *v49; // rax
  char v50; // bl
  PMDL v51; // rsi
  struct _MDL *Next; // rbx
  unsigned int v53; // [rsp+40h] [rbp-79h]
  unsigned int v54; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-71h]
  unsigned int v56; // [rsp+4Ch] [rbp-6Dh]
  __int64 v57; // [rsp+50h] [rbp-69h]
  __int64 *v58; // [rsp+58h] [rbp-61h]
  unsigned __int64 v59; // [rsp+60h] [rbp-59h]
  __int64 v60; // [rsp+68h] [rbp-51h]
  PMDL Mdl; // [rsp+70h] [rbp-49h] BYREF
  __int128 v62; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-31h]
  __int64 v64; // [rsp+90h] [rbp-29h]
  __int64 v65; // [rsp+98h] [rbp-21h]
  __int128 v66; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-9h]
  char v68; // [rsp+100h] [rbp+47h] BYREF
  __int64 v69; // [rsp+110h] [rbp+57h]

  v69 = a3;
  v11 = 0LL;
  v68 = 0;
  Mdl = 0LL;
  v67 = 0LL;
  v13 = *(_DWORD *)(a1 + 520) == 3;
  LODWORD(v63) = 0;
  v15 = a2;
  v58 = 0LL;
  v66 = 0LL;
  v62 = 0LL;
  if ( v13 && !a3 )
    return 3221225485LL;
  v64 = *(_QWORD *)(a1 + 512);
  v16 = a6;
  *(_BYTE *)(a1 + 524) = 1;
  v56 = 0;
  if ( !*v16 )
  {
    v17 = a8;
    if ( a8 && a9 >= 0x10 )
    {
      *a8 = 0;
      *((_QWORD *)v17 + 1) = 0LL;
      return 0LL;
    }
    if ( !*(_BYTE *)(a1 + 441) )
      return 0LL;
    return 3221225485LL;
  }
  if ( KeGetCurrentIrql() != 15 )
  {
    v19 = *(_QWORD *)(a1 + 360);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 12) & 1) != 0 )
        return 3221225760LL;
    }
  }
  if ( !a2 )
    return 3221225485LL;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v15 + 40);
    if ( a4 < v20 )
      break;
    v15 = *(_QWORD *)v15;
    a4 -= v20;
    if ( !v15 )
      return 3221225485LL;
  }
  v21 = (__int64)a8;
  if ( a8 )
  {
    v22 = a9;
    if ( a9 >= 0x28 )
      goto LABEL_21;
    return 3221225485LL;
  }
  if ( *(_BYTE *)(a1 + 441) )
    return 3221225485LL;
  v22 = *(_DWORD *)(a1 + 628);
  v21 = a1 + 632;
LABEL_21:
  v23 = 0;
  *(_QWORD *)(v21 + 8) = 0LL;
  v24 = ((unsigned __int64)v22 - 16) / 0x18;
  v59 = v24;
  if ( !*(_BYTE *)(a1 + 441) )
  {
    MaxFragments = HalpDmaControllerQueryMaxFragments(*(_QWORD *)(a1 + 368), a1, (unsigned int)v24);
    if ( MaxFragments < (unsigned int)v24 )
      v24 = MaxFragments;
    v59 = v24;
  }
  v26 = a6;
  HalpDmaCheckMdlAccessibility(a1, (_QWORD *)v15, a4, *a6, &v68, (__int64 *)&Mdl);
  v13 = *(_DWORD *)(a1 + 520) == 3;
  v60 = 0LL;
  if ( v13 )
  {
    v28 = *(_DWORD *)(a1 + 252);
    if ( *v26 > v28 )
      *v26 = v28;
    v29 = v69;
    v58 = *(__int64 **)(v69 + 24);
    v11 = *v58;
    *(_QWORD *)(v69 + 40) = 0LL;
    *(_QWORD *)(v29 + 32) = 0LL;
  }
  else
  {
    v29 = v69;
  }
  v30 = *v26;
  v31 = 0LL;
  v53 = 0;
  if ( v29 )
  {
    LODWORD(v62) = 1;
    while ( v30 )
    {
      v40 = v30;
      v27 = a4 + *(_QWORD *)(v15 + 32) + *(unsigned int *)(v15 + 44);
      v41 = *(_DWORD *)(v15 + 40) - a4;
      v57 = v27;
      if ( v41 <= v30 )
        v40 = v41;
      v30 -= v40;
      v55 = v40;
      if ( v40 )
      {
        while ( v23 < (unsigned int)v59 )
        {
          v54 = v40;
          v42 = IoMapTransferInternal(a1, v15, v29, v27, &v54, a7, v68);
          v43 = v54;
          v44 = v42;
          if ( !v54 )
          {
            v31 = v53;
            v29 = v69;
            break;
          }
          v65 = v54;
          *((_QWORD *)&v62 + 1) = v42 & 0xFFFFFFFFFFFFF000uLL;
          v13 = *(_DWORD *)(a1 + 520) == 3;
          v63 = ((v42 & 0xFFF) + v54 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
          if ( v13 )
          {
            if ( (((unsigned __int16)v42 | (unsigned __int16)v11) & 0xFFF) != 0 || !v60 )
            {
              if ( (v11 & 0xFFF) != 0 )
                v11 = v11 + 4096 - ((v11 + 4096) & 0xFFF);
              v45 = v21 + 8 * (v23 + 2 * (v23 + 1LL));
              v60 = v45;
              *(_QWORD *)v45 = v11 + (v57 & 0xFFF);
              *(_QWORD *)(v45 + 16) = v15;
              *(_DWORD *)(v45 + 8) = v43;
            }
            else
            {
              --v23;
              *(_DWORD *)(v60 + 8) += v54;
            }
            v46 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int128 *, __int128 *))(HalpDmaIommuInterfaceFcnTable
                                                                                                + 144))(
                    v58,
                    *(_QWORD *)(v69 + 40),
                    3LL,
                    &v62,
                    &v66);
            v47 = v54 + (v44 & 0xFFF);
            v56 = v46;
            *(_QWORD *)(v69 + 40) += v63;
            v11 += v47;
          }
          else
          {
            v48 = 3LL * v23;
            *(_QWORD *)(v21 + 8 * v48 + 32) = v15;
            *(_DWORD *)(v21 + 8 * v48 + 24) = v43;
            *(_QWORD *)(v21 + 8 * v48 + 16) = v42;
          }
          if ( *(_DWORD *)(a1 + 520) == 1 )
            v56 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 72))(
                    *(_QWORD *)(v64 + 40),
                    3LL,
                    &v62);
          ++v23;
          v27 = v65 + v57;
          v31 = v54 + v53;
          v40 = v55 - v54;
          v29 = v69;
          v57 += v65;
          v53 += v54;
          v55 = v40;
          if ( !v40 )
            goto LABEL_73;
        }
        v30 = 0;
      }
LABEL_73:
      v15 = *(_QWORD *)v15;
      a4 = 0LL;
      if ( !v15 )
        goto LABEL_74;
    }
  }
  else
  {
    v57 = 0LL;
    while ( v30 )
    {
      v32 = v30;
      v33 = *(unsigned int *)(v15 + 44);
      if ( *(_DWORD *)(v15 + 40) - (int)a4 <= v30 )
        v32 = *(_DWORD *)(v15 + 40) - a4;
      v30 -= v32;
      v34 = ((_WORD)v33 + (_WORD)a4) & 0xFFF;
      v55 = v34;
      v13 = *(_BYTE *)(a1 + 445) == 0;
      v35 = (__int64 *)(v15 + 8 * (((unsigned __int64)(unsigned int)(v33 + a4) >> 12) + 6));
      v58 = v35;
      if ( v13 )
      {
        HalpDmaFlushBuffer(v29, v15, a4 + v33 + *(_QWORD *)(v15 + 32), v32, a7, v68);
        v31 = v53;
        v34 = v55;
        v29 = v57;
        v35 = v58;
      }
      for ( ; v32; v32 -= v27 )
      {
        v27 = v32;
        v36 = v34 + (*v35 << 12);
        v37 = 4096 - v34;
        v34 = 0;
        if ( v37 <= v32 )
          v27 = v37;
        if ( v36 == v29 + 1 && ((v36 ^ v29) & 0x100000000LL) == 0 && v23 )
        {
          *(_DWORD *)(v21 + 24 * (v23 - 1 + 1LL)) += v27;
        }
        else
        {
          if ( v23 >= (unsigned int)v59 )
          {
            v30 = 0;
            break;
          }
          v38 = v23++;
          v39 = 3 * v38;
          *(_QWORD *)(v21 + 8 * v39 + 16) = v36;
          *(_DWORD *)(v21 + 8 * v39 + 24) = v27;
        }
        v31 = (unsigned int)(v27 + v31);
        v53 = v31;
        v29 = (unsigned int)v27 + v36 - 1;
        ++v35;
        v57 = v29;
      }
      v15 = *(_QWORD *)v15;
      a4 = 0LL;
      if ( !v15 )
        goto LABEL_75;
    }
LABEL_74:
    if ( !v15 )
    {
LABEL_75:
      if ( v30 && v23 )
      {
        *(_DWORD *)(v21 + 24 * (v23 - 1 + 1LL)) += v30;
        v31 = v30 + (unsigned int)v31;
      }
    }
  }
  v49 = a6;
  *(_DWORD *)v21 = v23;
  *v49 = v31;
  if ( v69 )
    *(_DWORD *)(v69 + 16) = v31;
  v50 = a7;
  if ( v68 )
  {
    v51 = Mdl;
    HalpDmaFlushDriverMdl(Mdl, a7 == 0, v27, v31);
    if ( v51 )
    {
      do
      {
        Next = v51->Next;
        IoFreeMdl(v51);
        v51 = Next;
      }
      while ( Next );
      v50 = a7;
    }
  }
  if ( *(_BYTE *)(a1 + 441) )
    return v56;
  else
    return HalpDmaControllerProgramChannel(*(_QWORD *)(a1 + 368), a1, a10, a11, v21, *(_QWORD *)(a1 + 456) + a5, v50);
}
