/*
 * XREFs of KiSetProcessorSignature @ 0x140A8B504
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140A8A714 (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     KiPublishProcessorFeatures @ 0x140B71D38 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, unsigned int a2)
{
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // r15
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // r10d
  unsigned __int8 *v18; // rbx
  int *v19; // r14
  __int64 *v20; // rsi
  unsigned int v21; // r11d
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  int v29; // edx
  int v30; // edx
  __int64 v31; // r8
  unsigned int *v32; // rsi
  unsigned int v33; // edx
  unsigned int v34; // ecx
  ULONG_PTR v35; // rdx
  unsigned __int64 v36; // r11
  __int64 i; // rbx
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r11
  int v47; // ecx
  ULONG_PTR v48; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 Prcb; // rax
  unsigned int v52; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v53; // [rsp+38h] [rbp-90h]
  unsigned int v55; // [rsp+50h] [rbp-78h]
  __int128 v56; // [rsp+80h] [rbp-48h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v55 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  *(_QWORD *)&v56 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v56 + 1) = __PAIR64__(_RDX, _RCX);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v52 = 0;
  v17 = 0;
  v18 = (unsigned __int8 *)(a1 + 141);
  v53 = (unsigned __int8 *)(a1 + 141);
  v19 = (int *)(a1 + 36);
  v20 = qword_140014EF8;
  v21 = _RAX;
  do
  {
    v22 = *((_DWORD *)v20 - 2);
    if ( (v22 & 2) == 0 )
    {
      if ( !HIBYTE(v22) || (v23 = HIBYTE(v22), _bittest((const int *)&v23, *v18)) )
      {
        _RAX = *((unsigned int *)v20 - 6);
        if ( *(v20 - 3) != __PAIR64__(v16, v15) )
        {
          v15 = (unsigned int)_RAX;
          v52 = *((_DWORD *)v20 - 5);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v55) && (unsigned int)_RAX > v21 )
          {
            v56 = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_QWORD *)&v56 = __PAIR64__(_RBX, _RAX);
            *((_QWORD *)&v56 + 1) = __PAIR64__(_RDX, _RCX);
          }
        }
        v29 = 0;
        if ( (*((_DWORD *)&v56 + *((int *)v20 - 3)) & *(_DWORD *)(v20 - 2)) != 0
          || (v22 & 8) != 0 && (v13 & *v20) == *v20 )
        {
          v29 = 1;
        }
        else if ( (v22 & 0x10) != 0 && (v14 & *v20) == *v20 )
        {
          v29 = 1;
        }
        if ( !v29 )
        {
          if ( (v22 & 1) != 0 )
          {
            if ( !*v19 )
              KdInitSystem(0LL, KeLoaderBlock_0);
            KeBugCheckEx(
              0x5Du,
              0xFFFFFFFFuLL,
              *((unsigned int *)v20 - 6),
              *((unsigned int *)v20 - 4),
              *((int *)v20 - 3));
          }
          if ( (v22 & 4) != 0 && *v19 )
          {
            if ( (v22 & 8) != 0 )
            {
              LOBYTE(v29) = (KeFeatureBits & *v20) == *v20;
            }
            else if ( (v22 & 0x10) != 0 && (KeFeatureBits2 & *v20) == *v20 )
            {
LABEL_98:
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFEuLL,
                *((unsigned int *)v20 - 6),
                *((unsigned int *)v20 - 4),
                *((int *)v20 - 3));
            }
            if ( v29 )
              goto LABEL_98;
          }
          goto LABEL_39;
        }
        if ( (v22 & 8) != 0 )
        {
          v13 |= *v20;
        }
        else if ( (v22 & 0x10) != 0 )
        {
          v14 |= *v20;
        }
        if ( (v22 & 4) != 0 && *v19 )
        {
          v30 = 0;
          if ( (v22 & 8) != 0 )
          {
            LOBYTE(v30) = (KeFeatureBits & *v20) == *v20;
            goto LABEL_38;
          }
          if ( (v22 & 0x10) == 0 || (KeFeatureBits2 & *v20) != *v20 )
          {
LABEL_38:
            if ( !v30 )
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFDuLL,
                *((unsigned int *)v20 - 6),
                *((unsigned int *)v20 - 4),
                *((int *)v20 - 3));
          }
        }
LABEL_39:
        v16 = v52;
        v18 = v53;
      }
    }
    ++v17;
    v20 += 4;
  }
  while ( v17 < 0x34 );
  v31 = 0LL;
  while ( (unsigned int)v31 < 2 )
  {
    v32 = (unsigned int *)(0x140000000LL + 24 * v31 + 27464);
    v33 = *(_DWORD *)(0x140000004LL + 24 * v31 + 27464);
    if ( (v33 & 2) == 0 )
    {
      if ( !HIBYTE(v33) || (v34 = HIBYTE(v33), _bittest((const int *)&v34, *v18)) )
      {
        if ( (v33 & 8) != 0 )
        {
          v35 = v13;
        }
        else
        {
          if ( (v33 & 0x10) == 0 )
            goto LABEL_78;
          v35 = v14;
        }
        if ( (v35 & *(_QWORD *)(0x140000010LL + 24 * v31 + 27464)) == *(_QWORD *)(0x140000010LL + 24 * v31 + 27464) )
        {
          v36 = __readmsr(*v32);
          for ( i = *(_QWORD *)(0x140000008LL + 24 * v31 + 27464); *(_QWORD *)i; i += 24LL )
          {
            v38 = *(_DWORD *)(i + 8);
            if ( (v38 & 2) == 0 )
            {
              v15 = HIBYTE(v38);
              if ( !(_DWORD)v15 || _bittest((const int *)&v15, *v53) )
              {
                if ( (*(_QWORD *)i & v36) != 0 )
                {
                  v15 = v38 & 8;
                  if ( (v38 & 8) != 0 )
                  {
                    v13 |= *(_QWORD *)(i + 16);
                  }
                  else if ( (v38 & 0x10) != 0 )
                  {
                    v14 |= *(_QWORD *)(i + 16);
                  }
                  if ( (v38 & 4) != 0 && *v19 )
                  {
                    v40 = 0;
                    if ( (v38 & 8) != 0 )
                    {
                      LOBYTE(v40) = (KeFeatureBits & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16);
                    }
                    else if ( (v38 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16) )
                    {
                      continue;
                    }
                    if ( !v40 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v32, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                  }
                }
                else
                {
                  if ( (v38 & 1) != 0 )
                  {
                    if ( !*v19 )
                      KdInitSystem(0LL, KeLoaderBlock_0);
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v32, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                  }
                  if ( (v38 & 4) != 0 && *v19 )
                  {
                    v39 = 0;
                    if ( (v38 & 8) != 0 )
                    {
                      LOBYTE(v39) = (KeFeatureBits & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16);
                    }
                    else if ( (v38 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16) )
                    {
LABEL_103:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v32, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                    }
                    if ( v39 )
                      goto LABEL_103;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_78:
    v31 = (unsigned int)(v31 + 1);
    v18 = v53;
  }
  v41 = 0LL;
  v42 = 0LL;
  v43 = *v18;
  v44 = 0LL;
  v45 = a2;
  while ( *(_DWORD *)((char *)KiCpuTable + v44) != v43 || *(_DWORD *)((char *)KiCpuTable + v44 + 4) != a2 )
  {
    v41 = (unsigned int)(v41 + 1);
    v42 = (unsigned int)v41;
    v44 = 20 * v41;
    if ( *((_DWORD *)&KiCpuTable[1] + 5 * v41) == 19 )
    {
      v46 = a1;
      goto LABEL_84;
    }
  }
  v46 = a1;
  *(_DWORD *)(a1 + 1740) = dword_140020240[5 * v42];
LABEL_84:
  v47 = *v19;
  if ( *v19 )
  {
    KeGetPrcb(0);
    v47 = *v19;
    v46 = a1;
  }
  v48 = 0LL;
  if ( *v53 == 1 && ((*(_BYTE *)(v46 + 64) - 16) & 0xFD) == 0 )
    v48 = 0x800000000000LL;
  if ( v47 && (v48 & *(_QWORD *)(KeGetPrcb(0) + 35232)) != 0 )
  {
    BugCheckParameter4 = (unsigned int)*v19;
    Prcb = KeGetPrcb(0);
    KeBugCheckEx(0x5Du, 0x4D535546uLL, v48, *(_QWORD *)(Prcb + 35232), BugCheckParameter4);
  }
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 35232) |= v13 & ~v48;
  result = (unsigned int)*v19;
  if ( (_DWORD)result )
  {
    if ( v14 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v14, KeFeatureBits2, (unsigned int)*v19);
  }
  else
  {
    KeFeatureBits2 |= v14;
    return KiPublishProcessorFeatures(a1, v41, v45, v15);
  }
  return result;
}
