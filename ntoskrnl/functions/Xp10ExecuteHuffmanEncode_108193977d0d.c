__int64 __fastcall Xp10ExecuteHuffmanEncode(
        __int16 **a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // esi
  __int64 v10; // rbx
  __int16 v12; // dx
  unsigned int v13; // r14d
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r13d
  int v17; // r12d
  __int64 result; // rax
  __int64 v19; // r9
  int v20; // r8d
  int v21; // esi
  unsigned int v22; // esi
  unsigned int v23; // r11d
  __int64 v24; // rax
  _DWORD *v25; // rax
  unsigned __int16 *v26; // r12
  unsigned int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // r13
  int v30; // ecx
  _BYTE *v31; // r8
  unsigned int v32; // r14d
  unsigned int v33; // esi
  unsigned int v34; // r10d
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // r10d
  _BYTE *v38; // r8
  unsigned __int64 v39; // rcx
  unsigned int v40; // r8d
  __int64 v41; // r12
  int v42; // ecx
  _BYTE *v43; // r10
  unsigned int v44; // r14d
  unsigned int v45; // esi
  unsigned int v46; // r15d
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // esi
  _BYTE *v50; // r10
  unsigned __int64 v51; // rcx
  unsigned int v52; // esi
  unsigned int v53; // r10d
  int v54; // ecx
  _BYTE *v55; // r9
  unsigned int v56; // r14d
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // esi
  _BYTE *v60; // r9
  unsigned __int64 v61; // rcx
  unsigned int v62; // esi
  _BYTE *v63; // r9
  int v64; // r15d
  unsigned int v65; // r14d
  unsigned int v66; // r10d
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // esi
  _BYTE *v70; // r9
  unsigned __int64 v71; // rcx
  _DWORD v72[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v73; // [rsp+48h] [rbp-18h]
  unsigned int v74[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v75; // [rsp+58h] [rbp-8h]
  unsigned __int16 *v78; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *((_DWORD *)a1 + 6);
  v10 = a6;
  v12 = **a1;
  v72[1] = 0;
  v13 = *(_DWORD *)(a6 + 8);
  v14 = v12 & 0x1F;
  v74[1] = 0;
  v15 = (1 << v14) - ((unsigned __int8)v12 >> 5) - 246;
  LODWORD(v78) = 0;
  LODWORD(a6) = 0;
  _BitScanReverse((unsigned int *)&v16, v15);
  v17 = v15 & (v15 - 1);
  result = Xp10BuildAndWriteHuffmanEncodings(
             (__int64)(a1 + 708),
             (_DWORD *)a1 + 7,
             16 * (v14 + 20),
             0LL,
             (unsigned int *)a1 + 7,
             v10,
             (unsigned int *)&v78);
  if ( (int)result >= 0 )
  {
    v20 = v16 + 1;
    v21 = (_DWORD)v78 + v8;
    if ( !v17 )
      v20 = v16;
    result = Xp10BuildAndWriteHuffmanEncodings(
               (__int64)(a1 + 708),
               (_DWORD *)a1 + 711,
               v20 + 232,
               v19,
               (unsigned int *)a1 + 711,
               v10,
               (unsigned int *)&v78);
    if ( (int)result >= 0 )
    {
      v22 = (_DWORD)v78 + v21;
      v23 = *(_DWORD *)(v10 + 12);
      if ( v22 < 8 * a3 )
      {
        *a7 = 1;
        if ( v13 + v22 <= v23 )
        {
          v26 = (unsigned __int16 *)((char *)a4 + a5);
          v78 = v26;
          while ( a4 < v26 )
          {
            v27 = *(_DWORD *)(v10 + 8);
            if ( v27 >= v23 )
              return *(_DWORD *)(v10 + 8) >= v23 ? 0xC0000023 : 0;
            v28 = *(_QWORD *)v10;
            v29 = *a4;
            v30 = *(_DWORD *)(v10 + 8) & 7;
            v31 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v27 >> 3));
            a6 = *(_QWORD *)v10;
            v32 = 8 - v30;
            v33 = *((_DWORD *)a1 + v29 + 7) & 0x1F;
            v34 = *((_DWORD *)a1 + v29 + 7) >> 5;
            if ( v27 + v33 <= v23 || (v33 = v23 - v27, v23 != v27) )
            {
              v35 = v32;
              if ( v32 >= v33 )
                v35 = v33;
              *v31 |= ((unsigned __int8)v34 & (unsigned __int8)byte_14001BC30[4 * v35]) << v30;
              v36 = v33 - (unsigned int)v35;
              v37 = v34 >> v32;
              v38 = v31 + 1;
              if ( (unsigned int)v36 >= 8 )
              {
                v39 = (unsigned __int64)(unsigned int)v36 >> 3;
                do
                {
                  *v38 = v37;
                  v36 = (unsigned int)(v36 - 8);
                  v37 >>= 8;
                  ++v38;
                  --v39;
                }
                while ( v39 );
              }
              if ( (_DWORD)v36 )
                *v38 |= (unsigned __int8)v37 & byte_14001BC30[4 * v36];
              v28 = a6;
              v27 += v33;
              *(_DWORD *)(v10 + 8) = v27;
            }
            ++a4;
            v40 = v27;
            if ( (unsigned __int16)v29 >= 0x100u && (v29 & 0xF) == 0xF )
            {
              v41 = *(unsigned __int8 *)a4;
              v42 = v27 & 7;
              v43 = (_BYTE *)(v28 + ((unsigned __int64)v27 >> 3));
              v44 = *((_DWORD *)a1 + v41 + 711) & 0x1F;
              v45 = *((_DWORD *)a1 + v41 + 711) >> 5;
              v46 = 8 - v42;
              if ( v27 + v44 <= v23 || (v44 = v23 - v27, v23 != v27) )
              {
                v47 = v46;
                if ( v46 >= v44 )
                  v47 = v44;
                *v43 |= ((unsigned __int8)v45 & (unsigned __int8)byte_14001BC30[4 * v47]) << v42;
                v48 = v44 - (unsigned int)v47;
                v49 = v45 >> v46;
                v50 = v43 + 1;
                if ( (unsigned int)v48 >= 8 )
                {
                  v51 = (unsigned __int64)(unsigned int)v48 >> 3;
                  do
                  {
                    *v50 = v49;
                    v48 = (unsigned int)(v48 - 8);
                    v49 >>= 8;
                    ++v50;
                    --v51;
                  }
                  while ( v51 );
                }
                if ( (_DWORD)v48 )
                  *v50 |= (unsigned __int8)v49 & byte_14001BC30[4 * v48];
                v28 = a6;
                v40 = v27 + v44;
                *(_DWORD *)(v10 + 8) = v27 + v44;
              }
              a4 = (unsigned __int16 *)((char *)a4 + 1);
              if ( (unsigned __int8)v41 > 0xE8u )
              {
                v52 = *(_DWORD *)a4;
                v53 = v41 - 232;
                v54 = v40 & 7;
                v55 = (_BYTE *)(v28 + ((unsigned __int64)v40 >> 3));
                v56 = 8 - v54;
                if ( v40 + (_DWORD)v41 - 232 <= v23 || (v53 = v23 - v40, v23 != v40) )
                {
                  v57 = v56;
                  if ( v56 >= v53 )
                    v57 = v53;
                  *v55 |= ((unsigned __int8)v52 & (unsigned __int8)byte_14001BC30[4 * v57]) << v54;
                  v58 = v53 - (unsigned int)v57;
                  v59 = v52 >> v56;
                  v60 = v55 + 1;
                  if ( (unsigned int)v58 >= 8 )
                  {
                    v61 = (unsigned __int64)(unsigned int)v58 >> 3;
                    do
                    {
                      *v60 = v59;
                      v58 = (unsigned int)(v58 - 8);
                      v59 >>= 8;
                      ++v60;
                      --v61;
                    }
                    while ( v61 );
                  }
                  if ( (_DWORD)v58 )
                    *v60 |= (unsigned __int8)v59 & byte_14001BC30[4 * v58];
                  v40 += v53;
                  *(_DWORD *)(v10 + 8) = v40;
                }
                a4 += 2;
              }
              v26 = v78;
            }
            if ( (unsigned __int16)v29 > 0x14Fu )
            {
              v62 = *(_DWORD *)a4;
              v63 = (_BYTE *)(a6 + ((unsigned __int64)v40 >> 3));
              v64 = v40 & 7;
              v65 = 8 - v64;
              v66 = ((int)v29 - 320) / 16;
              if ( v40 + v66 <= v23 || (v66 = v23 - v40, v23 != v40) )
              {
                v67 = v65;
                if ( v65 >= v66 )
                  v67 = v66;
                *v63 |= ((unsigned __int8)v62 & (unsigned __int8)byte_14001BC30[4 * v67]) << v64;
                v68 = v66 - (unsigned int)v67;
                v69 = v62 >> v65;
                v70 = v63 + 1;
                if ( (unsigned int)v68 >= 8 )
                {
                  v71 = (unsigned __int64)(unsigned int)v68 >> 3;
                  do
                  {
                    *v70 = v69;
                    v68 = (unsigned int)(v68 - 8);
                    v69 >>= 8;
                    ++v70;
                    --v71;
                  }
                  while ( v71 );
                }
                if ( (_DWORD)v68 )
                  *v70 |= (unsigned __int8)v69 & byte_14001BC30[4 * v68];
                *(_DWORD *)(v10 + 8) = v40 + v66;
              }
              a4 += 2;
            }
          }
          return 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v10 + 8) = v13;
        if ( 8 * a3 + v13 <= v23 )
        {
          v75 = a2;
          v24 = *(_QWORD *)v10;
          v74[0] = 8 * a3;
          v73 = v24;
          v72[0] = v23;
          RtlCopyBitMap(v74, (__int64)v72, v13);
          v25 = a7;
          *(_DWORD *)(v10 + 8) += 8 * a3;
          *v25 = 0;
          *(_OWORD *)(a1 + 1) = 0LL;
          return 0LL;
        }
      }
      return 3221225507LL;
    }
  }
  return result;
}
