/*
 * XREFs of MiCopyToCfgBitMap @ 0x1406A5890
 * Callers:
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x1407D20C4 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlClearAllBitsEx @ 0x1402D4520 (RtlClearAllBitsEx.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlEnumRvaListFirst @ 0x14076FC8C (RtlEnumRvaListFirst.c)
 *     MiEliminateZeroPages @ 0x1407F6B10 (MiEliminateZeroPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8,
        size_t Size)
{
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // r15
  ULONG_PTR v12; // r14
  unsigned int v13; // r11d
  unsigned int v14; // r13d
  __int64 v15; // rdi
  signed __int64 *Pool; // r12
  char *v17; // rdx
  size_t v18; // r10
  int v19; // ebx
  int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  size_t v23; // rdi
  void *v24; // rdi
  size_t v25; // r15
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned int v29; // eax
  unsigned int *v30; // rbx
  unsigned int v31; // ecx
  int *v32; // r15
  bool v33; // zf
  int v34; // edx
  unsigned __int64 v35; // rax
  unsigned int *v36; // rsi
  unsigned int v37; // ebx
  unsigned int v38; // r10d
  __int64 v39; // rcx
  unsigned __int8 *v40; // r8
  __int64 v41; // r9
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // r11d
  unsigned int v45; // r10d
  unsigned int v46; // eax
  int v47; // r8d
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // edx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int i; // eax
  __int64 v56; // rdx
  unsigned int v57; // ecx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  int *v60; // rax
  void *v61; // rsp
  char v62; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v63; // [rsp+100h] [rbp+0h]
  void *Src; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+110h] [rbp+10h]
  char *v66; // [rsp+118h] [rbp+18h]
  unsigned __int64 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  unsigned __int64 v69; // [rsp+130h] [rbp+30h]
  signed __int64 *v70; // [rsp+138h] [rbp+38h]
  int v71; // [rsp+140h] [rbp+40h]
  unsigned int v72; // [rsp+144h] [rbp+44h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  unsigned __int64 v74; // [rsp+150h] [rbp+50h]
  size_t v75; // [rsp+158h] [rbp+58h]
  __int128 v76; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v77; // [rsp+170h] [rbp+70h]
  size_t v78; // [rsp+178h] [rbp+78h]
  unsigned __int64 v79; // [rsp+180h] [rbp+80h]
  size_t v80; // [rsp+188h] [rbp+88h]

  v71 = a4;
  v9 = a2;
  v67 = a2;
  v10 = a1;
  v73 = a1;
  v79 = a5;
  v76 = 0LL;
  v11 = a8;
  if ( a2 > 1 && *a8 == -1 )
  {
    v9 = 1LL;
    v67 = 1LL;
  }
  v12 = v9;
  v77 = v9;
  v74 = v9;
  v13 = 0;
  v63 = 0;
  v14 = a7;
  v68 = a7;
  v65 = 0;
  v15 = 4096LL;
  v69 = 4096LL;
  if ( v9 > 1 )
  {
    Pool = (signed __int64 *)MiAllocatePool(64, 0x1000uLL, 0x6554694Du);
    v70 = Pool;
    v9 = v67;
    v13 = v63;
    if ( Pool )
    {
      v65 = 1;
      goto LABEL_6;
    }
    v15 = 256LL;
    v69 = 256LL;
    v61 = alloca(256LL);
    Pool = (signed __int64 *)&v62;
  }
  else
  {
    Pool = (signed __int64 *)qword_140C69398;
    if ( !v9 )
      Pool = (signed __int64 *)qword_140C693A0;
  }
  v70 = Pool;
LABEL_6:
  v17 = (char *)a5;
  Src = (void *)a5;
  v66 = (char *)a5;
  v18 = Size;
  v80 = (Size & 0xFFF) + (unsigned int)(a5 & 0xFFF) + 4095;
  v75 = Size;
  v78 = Size;
  v19 = 0;
  while ( v18 )
  {
    v20 = v15 - 1;
    v21 = (unsigned int)v17 & ((_DWORD)v15 - 1);
    v22 = v15 - v21;
    if ( v15 - v21 >= v18 )
      v22 = v18;
    v72 = v22;
    v23 = v22;
    if ( v9 > 1 )
    {
      if ( v71 != 1 )
      {
        v23 = v22;
        if ( v71 )
          goto LABEL_11;
        *((_QWORD *)&v76 + 1) = Pool;
        *(_QWORD *)&v76 = 8 * v22;
        RtlClearAllBitsEx((__int64)&v76);
        v29 = v14 + (v22 >> 1 << 7);
        LODWORD(v66) = v29;
        v30 = a8;
        if ( !*a8 )
        {
          *a8 = RtlEnumRvaListFirst(v12, a8 + 2, a8 + 1);
          v29 = (unsigned int)v66;
        }
        v31 = *a8;
        v32 = a8 + 1;
        while ( 2 )
        {
          v33 = v31 == 0;
          if ( !v31 )
          {
LABEL_56:
            if ( v33 )
              v31 = -1;
            v14 = v29;
            *v30 = v31;
            v23 = v72;
            v11 = a8;
            goto LABEL_11;
          }
          if ( v31 >= v14 )
          {
            if ( v31 >= v29 )
            {
              v33 = v31 == 0;
              goto LABEL_56;
            }
            v34 = *v32;
            if ( (*v32 & 1) != 0 )
            {
              if ( (v31 & 0xF) == *(_DWORD *)(v10 + 24) )
              {
                if ( MmEnableControlFlowGuardXfg )
                {
                  if ( (v34 & 8) != 0 )
                    goto LABEL_35;
LABEL_50:
                  v51 = 2 * ((unsigned __int64)(v31 - v14) >> 4);
                  _bittestandset64(Pool, v51);
                  _bittestandreset64(Pool, v51 + 1);
                }
                else
                {
                  if ( (v34 & 4) == 0 )
                    goto LABEL_50;
LABEL_35:
                  v35 = 2 * ((unsigned __int64)(v31 - v14) >> 4);
                  _bittestandreset64(Pool, v35);
                  _bittestandset64(Pool, v35 + 1);
                }
              }
              else
              {
                RtlSetBitsEx((__int64)&v76, 2 * ((unsigned __int64)(v31 - v14) >> 4), 2uLL);
              }
            }
          }
          v36 = v30 + 2;
          v37 = ++v30[3];
          v38 = *v36;
          v39 = v36[2];
          v40 = (unsigned __int8 *)(v39 + *(_QWORD *)(v12 + 16));
          v41 = *(_QWORD *)(v12 + 24) - v39;
          if ( v41 )
          {
            while ( 1 )
            {
              v42 = *v40++;
              --v41;
              v43 = v42 >> 6;
              v38 += *((_DWORD *)RtlpRvaCompressionTableScales + v43) * (v42 & 0x3F);
              if ( (_DWORD)v43 == 3 )
                break;
              if ( !v41 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v12, (ULONG_PTR)v36, v38);
            }
            *v36 = v38;
            v36[2] = (_DWORD)v40 - *(_DWORD *)(v12 + 16);
            if ( a8 != (_DWORD *)-4LL )
            {
              v44 = 0;
              v45 = *(_DWORD *)(v12 + 8);
              if ( v45 <= 1 )
              {
                if ( v45 == 1 )
                {
                  v60 = *(int **)(v12 + 48);
                  if ( v60 )
                    v44 = *v60;
                  else
                    v44 = 1;
                }
              }
              else
              {
                v46 = 0;
                v47 = 1;
                v48 = 0LL;
                do
                {
                  if ( _bittest64(*(const signed __int64 **)(v12 + 40), v37 * v45 + v46) )
                  {
                    v49 = *(_QWORD *)(v12 + 48);
                    if ( v49 )
                      v50 = *(_DWORD *)(v48 + v49);
                    else
                      v50 = v47;
                    v44 |= v50;
                  }
                  ++v46;
                  v47 = __ROL4__(v47, 1);
                  v48 += 4LL;
                }
                while ( v46 < v45 );
              }
              *v32 = v44;
            }
            v31 = *v36;
            v29 = (unsigned int)v66;
            v10 = v73;
            v30 = a8;
          }
          else
          {
            v31 = 0;
            v29 = (unsigned int)v66;
            v10 = v73;
            v30 = a8;
          }
          continue;
        }
      }
      if ( v13 < *(_DWORD *)v74 )
      {
        v52 = (*(_QWORD *)(*(_QWORD *)(v74 + 8) + 16LL * v13) - v68) & ~(v69 - 1);
        v53 = (2 * (v52 >> 4)) >> 3;
        v17 = (char *)Src;
        if ( v53 >= v69 )
        {
          v68 += v52;
          v17 = (char *)Src + v53;
          Src = v17;
          v66 = v17;
          v18 -= v53;
          Size = v18;
        }
      }
      v54 = (unsigned int)v17 & v20;
      if ( v69 - v54 < v18 )
        v23 = (unsigned int)(v69 - v54);
      else
        v23 = (unsigned int)v18;
      memmove(Pool, v17, (unsigned int)v23);
      *((_QWORD *)&v76 + 1) = Pool;
      *(_QWORD *)&v76 = (unsigned int)(8 * v23);
      for ( i = v63; i < *(_DWORD *)v74; i = ++v63 )
      {
        v56 = 16LL * i + *(_QWORD *)(v74 + 8);
        v57 = *(_DWORD *)v56 - v68;
        if ( v57 >= (unsigned int)v23 >> 1 << 7 )
          break;
        v58 = *(_QWORD *)(v56 + 8);
        v59 = 2 * ((unsigned __int64)v57 >> 4);
        if ( (v58 & 8) != 0 )
        {
          _bittestandset64(Pool, v59 + 1);
          _bittestandreset64(Pool, v59);
        }
        else if ( (v58 & 0x15) != 0 )
        {
          _bittestandreset64(Pool, v59 + 1);
          _bittestandset64(Pool, v59);
        }
        else
        {
          RtlClearBitsEx((__int64)&v76, v59, 2uLL);
        }
      }
      v68 += (unsigned int)v23 >> 1 << 7;
      v10 = v73;
    }
LABEL_11:
    v19 = MiSplitPrivatePage((ULONG_PTR)Src, a6);
    if ( v19 < 0 )
      break;
    v19 = MiCopyToUserVa((ULONG_PTR)Src, a6, Pool, v23);
    if ( v19 < 0 )
      break;
    v13 = v63;
    v9 = v67;
    if ( v63 )
    {
      **(_DWORD **)(v74 + 16) = v63;
    }
    else if ( v67 > 1 && *v11 == -1 )
    {
      if ( v65 )
      {
        ExFreePoolWithTag(Pool, 0);
        v65 = 0;
        v13 = v63;
      }
      v9 = 1LL;
      v67 = 1LL;
      v69 = 4096LL;
      Pool = (signed __int64 *)qword_140C69398;
      v70 = (signed __int64 *)qword_140C69398;
    }
    v17 = (char *)Src + v23;
    Src = v17;
    v66 = v17;
    v18 = Size - v23;
    Size -= v23;
    v15 = v69;
  }
  v24 = Src;
  v25 = v75;
  if ( v65 )
    ExFreePoolWithTag(Pool, 0);
  if ( v12 )
  {
    if ( v19 >= 0 )
    {
      v26 = v79 & 0xFFFFFFFFFFFFF000uLL;
      v27 = (v25 & 0xFFFFFFFFFFFFF000uLL) + (v80 & 0xFFFFFFFFFFFFF000uLL);
LABEL_21:
      MiEliminateZeroPages(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26], v26, v27);
      return (unsigned int)v19;
    }
    if ( v24 != (void *)a5 && v19 != -1073741818 )
    {
      v26 = a5 & 0xFFFFFFFFFFFFF000uLL;
      v27 = ((unsigned __int64)v24 - (a5 & 0xFFFFFFFFFFFFF000uLL)) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_21;
    }
  }
  return (unsigned int)v19;
}
