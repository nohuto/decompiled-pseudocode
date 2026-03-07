unsigned __int64 __fastcall Xp10ExecuteHuffmanDecode(unsigned __int16 **a1, __int64 a2, _QWORD *a3)
{
  __int16 v6; // r9
  int v7; // ecx
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r13d
  int v12; // edi
  unsigned __int64 result; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  unsigned int v17; // r11d
  unsigned int v18; // edi
  __int64 v19; // rsi
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  __int16 i; // r15
  unsigned int v24; // edi
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned __int64 v29; // rdx
  unsigned int v30; // edi
  unsigned __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // ecx
  unsigned __int16 v35; // r15
  unsigned int v36; // edi
  __int64 v37; // r13
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // edx
  __int64 v41; // rax
  __int16 j; // si
  unsigned int v43; // edi
  int v44; // eax
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // edi
  unsigned __int64 v49; // r9
  unsigned int v50; // eax
  int v51; // eax
  int v52; // ecx
  __int16 v53; // si
  int v54; // edx
  unsigned int v55; // esi
  unsigned int v56; // edi
  unsigned int v57; // eax
  int v58; // eax
  int v59; // ecx
  int v60; // r10d
  int v61; // esi
  unsigned int v62; // esi
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int v65; // edi
  unsigned int v66; // eax
  unsigned int v67; // r15d
  unsigned int v68; // edi
  unsigned int v69; // eax
  int v70; // eax
  int v71; // ecx
  int v72; // edx
  int v73; // eax
  unsigned int v74; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v75; // [rsp+A8h] [rbp+58h]

  v6 = **a1;
  v74 = 0;
  v7 = v6 & 0x1F;
  v8 = (unsigned __int8)v6 >> 5;
  v9 = (1 << v7) - v8 - 246;
  _BitScanReverse((unsigned int *)&v10, v9);
  v11 = 16 * (v7 + 20);
  v12 = v9 & ((1 << v7) - v8 - 247);
  v75 = v11;
  result = Xp10ReadAndDecodeHuffmanTables((_DWORD)a1, v11, (_DWORD)a3, v8, a2, (__int64)(a1 + 587));
  if ( (result & 0x80000000) == 0LL )
  {
    v16 = v10 + 1;
    if ( !v12 )
      v16 = v10;
    result = Xp10ReadAndDecodeHuffmanTables((_DWORD)a1, v16 + 232, v14, v15, a2, (__int64)(a1 + 2635));
    v17 = 0;
    if ( (result & 0x80000000) == 0LL )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          result = *(_QWORD *)a2;
          if ( !*(_QWORD *)a2 )
            return result;
          v18 = 12;
          v74 = v17;
          v19 = 0LL;
          if ( result < 0xC )
            v18 = *(_DWORD *)a2;
          if ( *(_DWORD *)(a2 + 16) < v18 )
          {
            v20 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
            v21 = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v21;
            v22 = v21 + 8 * v20;
            *(_DWORD *)(a2 + 16) = v22;
            if ( v22 < v18 )
              LOBYTE(v18) = v22;
            v17 = 0;
          }
          for ( i = *(_WORD *)(2LL * (*(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v18) - 1)));
                ;
                i = *(_WORD *)(v19 + 2LL * v28) )
          {
            v29 = *(_QWORD *)a2;
            v30 = i & 0xF;
            v74 = v17;
            v31 = v29;
            if ( v29 && (i & 0xF) != 0 )
            {
              if ( (i & 0xFu) > v29 )
                v30 = v29;
              v32 = *(_DWORD *)(a2 + 16);
              if ( v32 < v30 )
              {
                v33 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
                v34 = *(_DWORD *)(a2 + 16);
                v17 = 0;
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v34;
                v32 = v34 + 8 * v33;
                *(_DWORD *)(a2 + 16) = v32;
                if ( v32 < v30 )
                  v30 = v32;
              }
              *(_QWORD *)(a2 + 8) >>= v30;
              *(_QWORD *)a2 -= v30;
              v31 = *(_QWORD *)a2;
              *(_DWORD *)(a2 + 16) = v32 - v30;
            }
            if ( i >= 0 )
              break;
            v74 = v17;
            v24 = 6;
            if ( v31 )
            {
              if ( v31 < 6 )
                v24 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v24 )
              {
                v25 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
                v26 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v26;
                v27 = v26 + 8 * v25;
                *(_DWORD *)(a2 + 16) = v27;
                if ( v27 < v24 )
                  LOBYTE(v24) = v26 + 8 * v25;
                v17 = 0;
              }
              v28 = *(_DWORD *)(a2 + 8) & ((1LL << v24) - 1);
            }
            else
            {
              v28 = v17;
            }
            v19 += 2 * (i & 0xFFFFFFFFFFFFFFF0uLL);
          }
          v35 = (unsigned __int16)i >> 4;
          if ( v35 >= 0x100u )
            break;
          while ( *a3 == a3[1] )
          {
            if ( !(unsigned int)Xp10ScatteredNextBuffer(a3) )
              return 3221226050LL;
          }
          *(_BYTE *)(*a3)++ = v35;
        }
        if ( (v35 & 0xF) == 0xF )
        {
          v36 = 12;
          v74 = v17;
          v37 = 0LL;
          if ( v31 )
          {
            if ( v31 < 0xC )
              v36 = *(_DWORD *)a2;
            if ( *(_DWORD *)(a2 + 16) < v36 )
            {
              v38 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
              v39 = *(_DWORD *)(a2 + 16);
              *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v39;
              v40 = v39 + 8 * v38;
              *(_DWORD *)(a2 + 16) = v40;
              if ( v40 < v36 )
                LOBYTE(v36) = v39 + 8 * v38;
              v17 = 0;
            }
            v31 = *(_QWORD *)a2;
            v41 = *(_DWORD *)(a2 + 8) & ((unsigned int)(1LL << v36) - 1);
          }
          else
          {
            v41 = v17;
          }
          for ( j = *(_WORD *)(2 * v41); ; j = *(_WORD *)(v37 + 2LL * v47) )
          {
            v74 = v17;
            v48 = j & 0xF;
            v49 = v31;
            if ( v31 && (j & 0xF) != 0 )
            {
              if ( (j & 0xFu) > v31 )
                v48 = *(_DWORD *)a2;
              v50 = *(_DWORD *)(a2 + 16);
              if ( v50 < v48 )
              {
                v51 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
                v52 = *(_DWORD *)(a2 + 16);
                v17 = 0;
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v52;
                v50 = v52 + 8 * v51;
                *(_DWORD *)(a2 + 16) = v50;
                if ( v50 < v48 )
                  v48 = v50;
              }
              *(_QWORD *)a2 -= v48;
              *(_QWORD *)(a2 + 8) >>= v48;
              v49 = *(_QWORD *)a2;
              *(_DWORD *)(a2 + 16) = v50 - v48;
            }
            if ( j >= 0 )
              break;
            v74 = v17;
            v43 = 6;
            if ( v49 )
            {
              if ( v49 < 6 )
                v43 = *(_DWORD *)a2;
              if ( *(_DWORD *)(a2 + 16) < v43 )
              {
                v44 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
                v45 = *(_DWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v45;
                v46 = v45 + 8 * v44;
                *(_DWORD *)(a2 + 16) = v46;
                if ( v46 < v43 )
                  LOBYTE(v43) = v45 + 8 * v44;
                v17 = 0;
              }
              v47 = *(_DWORD *)(a2 + 8) & ((1LL << v43) - 1);
            }
            else
            {
              v47 = v17;
            }
            v31 = *(_QWORD *)a2;
            v37 += 2 * (j & 0xFFFFFFFFFFFFFFF0uLL);
          }
          v53 = (unsigned __int16)j >> 4;
          v54 = (unsigned __int8)v53;
          if ( (unsigned __int8)v53 <= 0xE8u )
          {
            v61 = ((**a1 >> 5) & 7) + 15;
          }
          else
          {
            v74 = v17;
            v55 = (unsigned __int8)v53 - 232;
            v56 = v54 - 232;
            if ( v49 && v55 )
            {
              if ( v55 > v49 )
                v56 = *(_DWORD *)a2;
              v57 = *(_DWORD *)(a2 + 16);
              if ( v57 < v56 )
              {
                v58 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
                v59 = *(_DWORD *)(a2 + 16);
                v17 = 0;
                *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v59;
                v57 = v59 + 8 * v58;
                *(_DWORD *)(a2 + 16) = v57;
                if ( v57 < v56 )
                  v56 = v57;
              }
              v60 = *(_DWORD *)(a2 + 8) & ((1LL << v56) - 1);
              *(_QWORD *)a2 -= v56;
              *(_QWORD *)(a2 + 8) >>= v56;
              v49 = *(_QWORD *)a2;
              *(_DWORD *)(a2 + 16) = v57 - v56;
            }
            else
            {
              v60 = v17;
              v56 = v17;
            }
            if ( v56 < v55 )
              return 3221226050LL;
            v54 = 1 << v55;
            v61 = v60 + ((**a1 >> 5) & 7) + 246;
          }
          v11 = v75;
          v62 = v54 + v61;
          v63 = v35;
        }
        else
        {
          v49 = v31;
          v63 = v35;
          v62 = (v35 & 0xF) + ((**a1 >> 5) & 7);
        }
        if ( v35 >= 0x140u )
          break;
        v64 = (int)(v63 - 256) / 16;
        v65 = *((_DWORD *)a1 + v64 + 2);
        if ( v64 )
        {
          if ( v64 < 3 )
          {
            if ( v64 >= 2 )
LABEL_101:
              *((_DWORD *)a1 + 4) = *((_DWORD *)a1 + 3);
            v73 = *((_DWORD *)a1 + 2);
            *((_DWORD *)a1 + 2) = v65;
            *((_DWORD *)a1 + 3) = v73;
            goto LABEL_103;
          }
LABEL_100:
          *((_DWORD *)a1 + 5) = *((_DWORD *)a1 + 4);
          goto LABEL_101;
        }
LABEL_103:
        if ( !v65 )
          return 3221226050LL;
        while ( v62 > v65 )
        {
          if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v65, v65) != v65 )
            return 3221226050LL;
          v62 -= v65;
        }
        if ( (unsigned int)Xp10ScatteredCopyFromPrevious(a3, v65, v62) != v62 )
          return 3221226050LL;
        v17 = 0;
      }
      if ( v63 >= v11 )
        return 3221226050LL;
      if ( v35 <= 0x14Fu )
      {
        v65 = 1;
      }
      else
      {
        v74 = v17;
        v66 = (int)(v63 - 320) / 16;
        v67 = v66;
        v68 = v66;
        if ( v49 && v66 )
        {
          if ( v66 > v49 )
            v68 = *(_DWORD *)a2;
          v69 = *(_DWORD *)(a2 + 16);
          if ( v69 < v68 )
          {
            v70 = Xp10ScatteredReadBytes(a2 + 24, &v74, 4LL);
            v71 = *(_DWORD *)(a2 + 16);
            *(_QWORD *)(a2 + 8) |= (unsigned __int64)v74 << v71;
            v69 = v71 + 8 * v70;
            *(_DWORD *)(a2 + 16) = v69;
            if ( v69 < v68 )
              v68 = v69;
          }
          v72 = *(_DWORD *)(a2 + 8) & ((1LL << v68) - 1);
          *(_QWORD *)(a2 + 8) >>= v68;
          *(_QWORD *)a2 -= v68;
          *(_DWORD *)(a2 + 16) = v69 - v68;
        }
        else
        {
          v72 = v17;
          v68 = v17;
        }
        if ( v68 < v67 )
          return 3221226050LL;
        v65 = v72 + (1 << v67);
      }
      goto LABEL_100;
    }
  }
  return result;
}
