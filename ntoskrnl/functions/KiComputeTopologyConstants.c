char __fastcall KiComputeTopologyConstants(
        int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        int *a6)
{
  unsigned int v8; // edi
  int v14; // r14d
  unsigned int v15; // r11d
  unsigned int v21; // ecx
  char v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // r8d
  int i; // edi
  int v33; // ecx
  unsigned int v34; // ecx
  int v35; // ecx
  int v36; // eax
  unsigned __int8 v42; // r11
  int v43; // ecx
  int v44; // r11d
  int v50; // edi
  unsigned int v51; // r8d
  int v52; // ecx
  unsigned int v53; // ebx
  unsigned int v54; // eax
  int v55; // r9d
  int v56; // edx
  int v57; // ecx
  unsigned int v58; // eax
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  char v65; // r8
  int v66; // eax
  __int64 v67; // rax
  unsigned int v73; // ecx
  __int128 v75; // [rsp+18h] [rbp-28h]
  __int64 v76; // [rsp+28h] [rbp-18h]

  v76 = 0LL;
  *(_OWORD *)a6 = 0LL;
  *((_QWORD *)a6 + 2) = 0LL;
  a6[6] = 0;
  v75 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
  {
    if ( a1 != 1 || a3 < 0x80000008 )
      goto LABEL_22;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v42 = _RCX;
    v43 = (unsigned __int16)_RCX >> 12;
    if ( !v43 )
      _BitScanReverse((unsigned int *)&v43, 2 * v42 + 1);
    *a6 = 2;
    a6[3] = 1 << v43;
    if ( a3 < 0x8000001E || (*(_DWORD *)(a4 + 8) & 0x400000) == 0 )
      goto LABEL_22;
    v44 = *a6;
    _RAX = 2147483678LL;
    __asm { cpuid }
    v50 = _RAX;
    v51 = _RCX;
    LODWORD(_RBX) = BYTE1(_RBX) + 1;
    LODWORD(_RAX) = a6[3] / (unsigned int)_RBX;
    v52 = *a6 | 3;
    a6[2] = _RBX;
    v53 = _RAX;
    a6[3] = _RAX;
    v54 = *a5;
    v55 = (*a5 >> 8) & 0xF;
    *a6 = v52;
    if ( v55 == 15 )
      v56 = (unsigned __int8)(v54 >> 20) + 15;
    else
      v56 = v55;
    if ( v56 == 23 )
    {
      v57 = v52 | 4;
    }
    else
    {
      v57 = v44 | 7;
      if ( v56 != 25 )
      {
        v58 = v53 / (((v51 >> 8) & 7) + 1);
LABEL_43:
        a6[4] = v58;
        *a6 = v57 | 0x10;
        a6[6] = v50;
        goto LABEL_22;
      }
    }
    v58 = 8;
    if ( v53 < 8 )
      v58 = v53;
    goto LABEL_43;
  }
  v8 = 11;
  if ( a2 >= 0x1F )
  {
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      v8 = 31;
LABEL_5:
      *a6 |= 0x10u;
      v14 = 0;
      a6[6] = _RDX;
      v15 = 0;
      do
      {
        _RAX = v8;
        __asm { cpuid }
        v21 = (unsigned int)_RCX >> 8;
        ++v14;
        v22 = _RAX;
        if ( v21 )
        {
          v23 = v21 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v63 = v24 - 1;
              if ( v63 )
              {
                v64 = v63 - 1;
                if ( v64 )
                {
                  v65 = _RAX & 0x1F;
                  if ( v64 == 1 )
                  {
                    v66 = *((_DWORD *)&v75 + v15) / (unsigned int)a6[2];
                    *a6 |= 4u;
                    v15 = 5;
                    a6[4] = v66;
                    HIDWORD(v76) = 1 << v65;
                  }
                  else
                  {
                    *((_DWORD *)&v75 + v15) = 1 << v65;
                  }
                }
                else
                {
                  v15 = 4;
                  LODWORD(v76) = 1 << (_RAX & 0x1F);
                }
              }
              else
              {
                *a6 |= 8u;
                v67 = v15;
                v15 = 3;
                a6[5] = *((_DWORD *)&v75 + v67);
                HIDWORD(v75) = 1 << (v22 & 0x1F);
              }
            }
            else
            {
              v15 = 2;
              DWORD2(v75) = 1 << (_RAX & 0x1F);
            }
          }
          else
          {
            v15 = 1;
            *a6 |= 1u;
            a6[2] = 1 << (_RAX & 0x1F);
            DWORD1(v75) = 1 << (_RAX & 0x1F);
          }
        }
      }
      while ( (_WORD)_RBX );
      v25 = *((_DWORD *)&v75 + v15) / (unsigned int)a6[2];
      *a6 |= 2u;
      v26 = *a6;
      a6[3] = v25;
      goto LABEL_12;
    }
  }
  else if ( a2 < 0xB )
  {
    goto LABEL_53;
  }
  _RAX = 11LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX )
    goto LABEL_5;
LABEL_53:
  v26 = 0;
  if ( a2 >= 4 )
  {
    *a6 = 2;
    _RAX = 4LL;
    v26 = 2;
    __asm { cpuid }
    _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
    a6[3] = 1 << _RCX;
  }
  if ( (a5[3] & 0x10000000) != 0 )
  {
    _BitScanReverse(&v73, 2 * *((unsigned __int8 *)a5 + 6) - 1);
    v26 |= 1u;
    a6[2] = (1 << v73) / (unsigned int)a6[3];
    *a6 = v26;
  }
LABEL_12:
  if ( (v26 & 8) == 0 && a1 == 2 && a2 >= 4 )
  {
    for ( i = 0; ; ++i )
    {
      _RAX = 4LL;
      __asm { cpuid }
      v33 = (int)((_DWORD)_RAX << 27) >> 27;
      if ( !v33 )
        break;
      if ( v33 == 3 && (_RAX & 0xE0) == 0x40 )
      {
        _BitScanReverse(&v34, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
        a6[5] = 1 << v34;
        *a6 = v26 | 8;
        break;
      }
    }
  }
LABEL_22:
  v35 = *a6;
  LOBYTE(v36) = *a6 & 6;
  a6[1] = *a6;
  if ( (_BYTE)v36 == 2 )
  {
    v36 = a6[3];
    v35 |= 4u;
    *a6 = v35;
    a6[4] = v36;
  }
  if ( (v35 & 8) == 0 && (v35 & 1) != 0 )
  {
    v36 = a6[2];
    *a6 = v35 | 8;
    a6[5] = v36;
  }
  return v36;
}
