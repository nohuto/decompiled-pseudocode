/*
 * XREFs of RaspScanConvert @ 0x1403B2780
 * Callers:
 *     RaspRasterize @ 0x1403B24AC (RaspRasterize.c)
 * Callees:
 *     BgpFmRoundUp @ 0x14039C9B8 (BgpFmRoundUp.c)
 *     RaspDestroySegmentList @ 0x1403B25AC (RaspDestroySegmentList.c)
 *     RaspFreeMemory @ 0x1403B2678 (RaspFreeMemory.c)
 *     RaspTestIntersection @ 0x1403B2BE0 (RaspTestIntersection.c)
 *     RaspRectangleCreate @ 0x1403B2FEC (RaspRectangleCreate.c)
 *     BgpGxInitializeRectangle @ 0x1403B3064 (BgpGxInitializeRectangle.c)
 *     RaspCreateSegmentList @ 0x1403B37A0 (RaspCreateSegmentList.c)
 *     RaspAllocateMemory @ 0x1403B3B78 (RaspAllocateMemory.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 v13; // r15
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r9d
  int v19; // r11d
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r10d
  int v24; // r9d
  int v25; // eax
  int v26; // ecx
  int v27; // esi
  int v28; // r12d
  int v29; // esi
  int v30; // r14d
  int v31; // eax
  __int64 *v32; // rdi
  __int64 *Memory; // rbp
  unsigned int v34; // edi
  __int64 v35; // rbx
  int v36; // r13d
  size_t v37; // rcx
  unsigned int v38; // r12d
  _BYTE *v39; // rsi
  signed int v40; // r10d
  __int64 v41; // rdx
  _BYTE *v42; // r9
  int i; // r8d
  _BYTE *v44; // rax
  char v45; // cl
  __int64 v46; // rcx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // r9d
  int v52; // r8d
  __int64 v53; // rdx
  signed int v54; // r11d
  signed int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  signed int v59; // [rsp+30h] [rbp-68h] BYREF
  int v60; // [rsp+34h] [rbp-64h]
  int v61; // [rsp+38h] [rbp-60h]
  int v62; // [rsp+3Ch] [rbp-5Ch]
  __int64 v63; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v64; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v65[4]; // [rsp+50h] [rbp-48h] BYREF
  signed int v66; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v67; // [rsp+B0h] [rbp+18h] BYREF
  int v68; // [rsp+B8h] [rbp+20h]

  v68 = a4;
  v67 = 0;
  v66 = 0;
  v59 = 0;
  v64 = 0LL;
  v63 = 0LL;
  v10 = (a5 & 1) != 0;
  v11 = a8;
  SegmentList = RaspCreateSegmentList(
                  a1,
                  a2,
                  *(unsigned __int16 *)(a1 + 24),
                  (unsigned int)&v63,
                  (__int64)&v67,
                  (__int64)a8);
  v13 = v67;
  v14 = SegmentList;
  if ( SegmentList >= 0 )
  {
    v15 = BgpFmRoundUp(*(_DWORD *)(a1 + 14));
    v16 = *(_DWORD *)(a1 + 6);
    v68 = v15;
    v17 = BgpFmRoundUp(v16);
    v20 = v19 - v17 + 1;
    if ( v19 == v17 )
    {
      v56 = *(_DWORD *)(17LL * (v18 + 1) + a2 + 4);
      v57 = v56 >> 6;
      if ( v56 < 0 )
        v57 |= 0xFC000000;
      v20 = v57 + 1;
      if ( (v56 & 0x20) == 0 )
        v20 = v57;
      v68 = v20;
    }
    v21 = 17LL * (v18 + 1);
    v22 = 17LL * v18;
    v23 = *(_DWORD *)(v22 + a2);
    v24 = *(_DWORD *)(v22 + a2 + 8);
    v25 = *(_DWORD *)(v21 + a2) + *(_DWORD *)(v21 + a2 + 8) - v23 - v24;
    v26 = v25 >> 6;
    if ( v25 < 0 )
      v26 |= 0xFC000000;
    v27 = v26 + 1;
    v28 = 4 * v20;
    if ( (v25 & 0x20) == 0 )
      v27 = v26;
    v62 = 4 * v20;
    v29 = 4 * v27;
    v30 = v23 + v24;
    v61 = v29;
    v65[1] = 4 * v20;
    v65[0] = v29;
    v65[2] = v29;
    if ( v10 )
    {
      v32 = qword_140D73000;
      v64 = qword_140D73000;
      v14 = BgpGxInitializeRectangle(v65, 1LL, qword_140D73000, 3140LL);
      if ( v14 < 0 )
        goto LABEL_32;
    }
    else
    {
      v31 = RaspRectangleCreate(v65, 1LL, &v64, v11);
      v32 = v64;
      v14 = v31;
    }
    if ( v14 >= 0 )
    {
      memset((void *)v32[3], 0, *((unsigned int *)v32 + 3));
      if ( !v63 )
      {
        v58 = v68;
        *a6 = v32;
        *a7 = v58;
        return 0LL;
      }
      if ( v10 )
      {
        if ( v29 <= 104 )
        {
          Memory = qword_140D72E60;
          goto LABEL_13;
        }
      }
      else
      {
        Memory = (__int64 *)RaspAllocateMemory(4LL * v29);
        if ( Memory )
        {
LABEL_13:
          v34 = 0;
          v35 = v29;
          v36 = 0;
          a5 = 0;
          if ( v28 > 0 )
          {
            v37 = 4LL * v29;
            v60 = v68 << 6;
            while ( 1 )
            {
              memset(Memory, 0, v37);
              v38 = v60 + -16 * (v36 & 3) - ((unsigned int)v36 >> 2 << 6);
              if ( (_DWORD)v13 )
                break;
LABEL_20:
              v41 = 0LL;
              v42 = (_BYTE *)(v64[3] + ((unsigned __int64)v34 >> 3));
              for ( i = 128 >> (v34 & 7); v41 < v35; v42 = v44 )
              {
                if ( *((_DWORD *)Memory + v41) )
                  *v42 |= i;
                LOBYTE(i) = (unsigned __int8)i >> 1;
                v44 = v42 + 1;
                v45 = i;
                if ( !(_BYTE)i )
                  LOBYTE(i) = 0x80;
                ++v41;
                if ( v45 )
                  v44 = v42;
              }
              v34 += v29;
              v37 = 4 * v35;
              ++v36;
              a5 = v34;
              if ( v36 >= v62 )
                goto LABEL_29;
            }
            v39 = (_BYTE *)(v63 + 24);
            while ( 1 )
            {
              RaspTestIntersection(v39 - 24, v38, &v66, &v59);
              v40 = v66;
              if ( v66 != 0x7FFFFFFF )
                break;
LABEL_18:
              v39 += 25;
              if ( !--v13 )
              {
                v34 = a5;
                v13 = v67;
                v29 = v61;
                goto LABEL_20;
              }
            }
            v48 = *((_QWORD *)v39 - 1);
            v49 = *(_DWORD *)(v48 + 12);
            v50 = v49
                + *(_DWORD *)(v48 + 4)
                - *(_DWORD *)(*((_QWORD *)v39 - 3) + 12LL)
                - *(_DWORD *)(*((_QWORD *)v39 - 3) + 4LL);
            if ( !v50 )
            {
              if ( *v39 == 1 )
                goto LABEL_59;
              v50 = v49
                  + *(_DWORD *)(v48 + 4)
                  - *(_DWORD *)(*((_QWORD *)v39 - 2) + 12LL)
                  - *(_DWORD *)(*((_QWORD *)v39 - 2) + 4LL);
            }
            if ( v50 > 0 )
            {
              v51 = 1;
LABEL_38:
              v52 = 0;
              v53 = 0LL;
              if ( v35 <= 0 )
                goto LABEL_18;
              v54 = v59;
              while ( 1 )
              {
                v55 = v30 + ((16 * v52) & 0xFFFFFFC0) + 16 * (v52 & 3);
                if ( *v39 == 1 )
                  break;
                if ( v54 != 0x7FFFFFFF )
                {
                  if ( v55 < v40 || v55 > v54 )
                    goto LABEL_44;
LABEL_43:
                  *((_DWORD *)Memory + v53) += v51;
                  goto LABEL_44;
                }
                if ( v55 <= v40 )
                  goto LABEL_43;
LABEL_44:
                ++v52;
                if ( ++v53 >= v35 )
                  goto LABEL_18;
              }
              if ( v55 > v40 )
                goto LABEL_44;
              goto LABEL_43;
            }
            if ( v50 < 0 )
            {
              v51 = -1;
              goto LABEL_38;
            }
LABEL_59:
            v51 = 0;
            goto LABEL_38;
          }
LABEL_29:
          v14 = 0;
          *a6 = v64;
          *a7 = v68;
          v11 = a8;
          if ( Memory == qword_140D72E60 )
            goto LABEL_32;
          v46 = (__int64)Memory;
LABEL_31:
          RaspFreeMemory(v46, v11);
          goto LABEL_32;
        }
      }
      v14 = -1073741670;
    }
    if ( !v32 )
      goto LABEL_32;
    v46 = (__int64)v32;
    goto LABEL_31;
  }
LABEL_32:
  if ( v63 )
    RaspDestroySegmentList(v63, v13, (__int64)v11);
  return (unsigned int)v14;
}
