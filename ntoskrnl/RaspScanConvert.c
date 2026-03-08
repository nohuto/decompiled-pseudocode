/*
 * XREFs of RaspScanConvert @ 0x1403827F0
 * Callers:
 *     RaspRasterize @ 0x140382470 (RaspRasterize.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x140382570 (RaspDestroySegmentList.c)
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     RaspTestIntersection @ 0x140382C60 (RaspTestIntersection.c)
 *     BgpFmRoundUp @ 0x14038305C (BgpFmRoundUp.c)
 *     RaspRectangleCreate @ 0x140383284 (RaspRectangleCreate.c)
 *     RaspCreateSegmentList @ 0x1403837AC (RaspCreateSegmentList.c)
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     BgpGxInitializeRectangle @ 0x140383D4C (BgpGxInitializeRectangle.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RaspScanConvert(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 **a6,
        int *a7,
        _QWORD *a8)
{
  bool v10; // bp
  _QWORD *v11; // r13
  int SegmentList; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // edx
  int v22; // r11d
  int v23; // r8d
  __int64 v24; // rcx
  int v25; // r10d
  int v26; // r9d
  int v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // r12d
  int v31; // esi
  int v32; // r14d
  int v33; // eax
  __int64 *v34; // rdi
  __int64 v35; // rbx
  __int64 *Memory; // rbp
  unsigned int v37; // edi
  int v38; // r13d
  size_t v39; // rcx
  unsigned int v40; // r12d
  _BYTE *v41; // rsi
  signed int v42; // r10d
  __int64 v43; // rdx
  _BYTE *v44; // r9
  int i; // r8d
  _BYTE *v46; // rax
  char v47; // cl
  __int64 v48; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  int v53; // r9d
  int v54; // r8d
  __int64 v55; // rdx
  signed int v56; // r11d
  signed int v57; // eax
  int v58; // r8d
  int v59; // eax
  bool v60; // zf
  int v61; // ecx
  signed int v62; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v63; // [rsp+38h] [rbp-70h] BYREF
  int v64; // [rsp+40h] [rbp-68h]
  int v65; // [rsp+44h] [rbp-64h]
  __int64 v66; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v67; // [rsp+50h] [rbp-58h]
  _DWORD v68[6]; // [rsp+58h] [rbp-50h] BYREF
  signed int v69; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v70; // [rsp+C0h] [rbp+18h] BYREF
  int v71; // [rsp+C8h] [rbp+20h]

  v71 = a4;
  v70 = 0;
  v69 = 0;
  v62 = 0;
  v63 = 0LL;
  v66 = 0LL;
  v10 = (a5 & 1) != 0;
  v11 = a8;
  SegmentList = RaspCreateSegmentList(
                  a1,
                  a2,
                  *(unsigned __int16 *)(a1 + 24),
                  (unsigned int)&v66,
                  (__int64)&v70,
                  (__int64)a8);
  v14 = v70;
  v15 = SegmentList;
  if ( SegmentList < 0 )
    goto LABEL_33;
  v16 = BgpFmRoundUp(*(unsigned int *)(a1 + 14), v13);
  v17 = *(unsigned int *)(a1 + 6);
  v71 = v16;
  v19 = BgpFmRoundUp(v17, v18);
  v21 = v20 + 1;
  v23 = v22 - v19 + 1;
  if ( v22 == v19 )
  {
    v58 = *(_DWORD *)(17LL * v21 + a2 + 4);
    v59 = v58 >> 6;
    if ( v58 < 0 )
      v59 |= 0xFC000000;
    v60 = (v58 & 0x20) == 0;
    v23 = v59 + 1;
    if ( v60 )
      v23 = v59;
    v71 = v23;
  }
  v24 = 17LL * v20;
  v25 = *(_DWORD *)(v24 + a2);
  v26 = *(_DWORD *)(v24 + a2 + 8);
  v27 = *(_DWORD *)(17LL * v21 + a2) + *(_DWORD *)(17LL * v21 + a2 + 8) - v25 - v26;
  v28 = v27 >> 6;
  if ( v27 < 0 )
    v28 |= 0xFC000000;
  v29 = v28 + 1;
  v30 = 4 * v23;
  if ( (v27 & 0x20) == 0 )
    v29 = v28;
  v65 = 4 * v23;
  v31 = 4 * v29;
  v32 = v25 + v26;
  v64 = v31;
  v68[1] = 4 * v23;
  v68[0] = v31;
  v68[2] = v31;
  if ( v10 )
  {
    v34 = qword_140D9C970;
    v67 = qword_140D9C970;
    v15 = BgpGxInitializeRectangle(v68, 1LL, qword_140D9C970, 3140LL);
    if ( v15 < 0 )
      goto LABEL_33;
    goto LABEL_10;
  }
  v33 = RaspRectangleCreate(v68, 1LL, &v63, v11);
  v34 = v63;
  v15 = v33;
  if ( v33 >= 0 )
  {
    v67 = v63;
LABEL_10:
    memset((void *)v34[3], 0, *((unsigned int *)v34 + 3));
    if ( !v66 )
    {
      v61 = v71;
      *a6 = v34;
      *a7 = v61;
      return 0LL;
    }
    if ( v10 )
    {
      if ( v31 <= 104 )
      {
        Memory = qword_140D9C7D0;
        v35 = v31;
        goto LABEL_13;
      }
    }
    else
    {
      v35 = v31;
      Memory = (__int64 *)RaspAllocateMemory(4LL * v31);
      if ( Memory )
      {
LABEL_13:
        v37 = 0;
        v38 = 0;
        a5 = 0;
        if ( v30 > 0 )
        {
          v39 = 4 * v35;
          LODWORD(v63) = v71 << 6;
          while ( 1 )
          {
            memset(Memory, 0, v39);
            v40 = (_DWORD)v63 + -16 * (v38 & 3) - ((unsigned int)v38 >> 2 << 6);
            if ( (_DWORD)v14 )
              break;
LABEL_20:
            v43 = 0LL;
            v44 = (_BYTE *)(v67[3] + ((unsigned __int64)v37 >> 3));
            for ( i = 128 >> (v37 & 7); v43 < v35; v44 = v46 )
            {
              if ( *((_DWORD *)Memory + v43) )
                *v44 |= i;
              LOBYTE(i) = (unsigned __int8)i >> 1;
              v46 = v44 + 1;
              v47 = i;
              if ( !(_BYTE)i )
                LOBYTE(i) = 0x80;
              ++v43;
              if ( v47 )
                v46 = v44;
            }
            v37 += v31;
            v39 = 4 * v35;
            ++v38;
            a5 = v37;
            if ( v38 >= v65 )
              goto LABEL_29;
          }
          v41 = (_BYTE *)(v66 + 24);
          while ( 1 )
          {
            RaspTestIntersection(v41 - 24, v40, &v69, &v62);
            v42 = v69;
            if ( v69 != 0x7FFFFFFF )
              break;
LABEL_18:
            v41 += 25;
            if ( !--v14 )
            {
              v37 = a5;
              v14 = v70;
              v31 = v64;
              goto LABEL_20;
            }
          }
          v50 = *((_QWORD *)v41 - 1);
          v51 = *(_DWORD *)(v50 + 12);
          v52 = v51
              + *(_DWORD *)(v50 + 4)
              - *(_DWORD *)(*((_QWORD *)v41 - 3) + 12LL)
              - *(_DWORD *)(*((_QWORD *)v41 - 3) + 4LL);
          if ( !v52 )
          {
            if ( *v41 == 1 )
              goto LABEL_60;
            v52 = v51
                + *(_DWORD *)(v50 + 4)
                - *(_DWORD *)(*((_QWORD *)v41 - 2) + 12LL)
                - *(_DWORD *)(*((_QWORD *)v41 - 2) + 4LL);
          }
          if ( v52 > 0 )
          {
            v53 = 1;
LABEL_39:
            v54 = 0;
            v55 = 0LL;
            if ( v35 <= 0 )
              goto LABEL_18;
            v56 = v62;
            while ( 1 )
            {
              v57 = v32 + ((16 * v54) & 0xFFFFFFC0) + 16 * (v54 & 3);
              if ( *v41 == 1 )
                break;
              if ( v56 != 0x7FFFFFFF )
              {
                if ( v57 < v42 || v57 > v56 )
                  goto LABEL_45;
LABEL_44:
                *((_DWORD *)Memory + v55) += v53;
                goto LABEL_45;
              }
              if ( v57 <= v42 )
                goto LABEL_44;
LABEL_45:
              ++v54;
              if ( ++v55 >= v35 )
                goto LABEL_18;
            }
            if ( v57 > v42 )
              goto LABEL_45;
            goto LABEL_44;
          }
          if ( v52 < 0 )
          {
            v53 = -1;
            goto LABEL_39;
          }
LABEL_60:
          v53 = 0;
          goto LABEL_39;
        }
LABEL_29:
        v15 = 0;
        *a6 = v67;
        *a7 = v71;
        v11 = a8;
        if ( Memory == qword_140D9C7D0 || *a8 )
          goto LABEL_33;
        v48 = (__int64)Memory;
        goto LABEL_32;
      }
    }
    v15 = -1073741670;
  }
  if ( v34 && !*v11 )
  {
    v48 = (__int64)v34;
LABEL_32:
    BgpFwFreeMemory(v48);
  }
LABEL_33:
  if ( v66 )
    RaspDestroySegmentList(v66, v14, (__int64)v11);
  return (unsigned int)v15;
}
