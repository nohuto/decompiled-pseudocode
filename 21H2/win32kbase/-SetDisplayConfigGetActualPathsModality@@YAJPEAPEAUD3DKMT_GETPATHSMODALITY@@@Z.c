/*
 * XREFs of ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C008349C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0083798 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall SetDisplayConfigGetActualPathsModality(struct D3DKMT_GETPATHSMODALITY **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  int *v5; // rdx
  int v6; // eax
  int PathsModality; // r15d
  struct D3DKMT_GETPATHSMODALITY *v8; // rdi
  unsigned int v9; // r8d
  unsigned int v10; // esi
  unsigned int i; // r14d
  _DWORD *v12; // rbx
  int v14; // edx
  _DWORD *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int128 v38; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-D0h]
  _BYTE v40[304]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = 0;
  v38 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, _QWORD))qword_1C0296918)(&v38, 0LL) == -1073741789 )
  {
    P[1] = (PVOID)ExAllocatePool2(258LL, 1076LL * LODWORD(P[0]));
    if ( P[1] )
    {
      HIDWORD(P[0]) = P[0];
      if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, _QWORD))qword_1C0296918)(&v38, 0LL) == -1073741789
        && (v3 = LODWORD(P[0]), LODWORD(P[0]) <= HIDWORD(P[0])) )
      {
        if ( LODWORD(P[0]) )
        {
          v4 = LODWORD(P[0]);
          v5 = (int *)((char *)P[1] + 1072);
          do
          {
            v6 = *v5;
            v3 = v2++;
            v5 += 269;
            if ( (v6 & 1) == 0 )
              v2 = v3;
            --v4;
          }
          while ( v4 );
        }
      }
      else
      {
        P[0] = 0LL;
      }
    }
  }
  PathsModality = GetPathsModality(v3, a1, 16777280LL);
  if ( PathsModality >= 0 )
  {
    v8 = *a1;
    if ( v2 )
    {
      v9 = (unsigned int)P[0];
      v10 = 0;
      for ( i = *((unsigned __int16 *)v8 + 10); v10 < v9; ++v10 )
      {
        if ( i >= *((unsigned __int16 *)v8 + 11) )
          break;
        v12 = (char *)P[1] + 1076 * v10;
        if ( (v12[268] & 1) != 0 )
        {
          v14 = 0;
          if ( *((_WORD *)v8 + 10) )
          {
            v15 = (_DWORD *)((char *)v8 + 76);
            while ( *(v15 - 1) != *v12 || *v15 != v12[1] || v15[2] != v12[2] )
            {
              ++v14;
              v15 += 74;
              if ( v14 >= *((unsigned __int16 *)v8 + 10) )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            v16 = (__int64)v8 + 296 * i;
            memset(v40, 0, 0x128uLL);
            v17 = 2LL;
            v18 = (_OWORD *)(v16 + 56);
            v19 = v40;
            do
            {
              v20 = v19[1];
              *v18 = *v19;
              v21 = v19[2];
              v18[1] = v20;
              v22 = v19[3];
              v18[2] = v21;
              v23 = v19[4];
              v18[3] = v22;
              v24 = v19[5];
              v18[4] = v23;
              v25 = v19[6];
              v18[5] = v24;
              v26 = v19[7];
              v19 += 8;
              v18[6] = v25;
              v18 += 8;
              *(v18 - 1) = v26;
              --v17;
            }
            while ( v17 );
            v27 = *v19;
            v28 = v19[1];
            v29 = *((_QWORD *)v19 + 4);
            *v18 = v27;
            v18[1] = v28;
            *((_QWORD *)v18 + 4) = v29;
            *(_DWORD *)(v16 + 84) = v12[2];
            *(_QWORD *)(v16 + 72) = *(_QWORD *)v12;
            v30 = 0x1000000000000000LL;
            *(_BYTE *)(v16 + 185) = v12[268] & 2 | ((v12[268] & 4) != 0) | (v12[268] >> 3) & 4;
            v31 = v12[264];
            if ( v31 != 5 )
              v30 = 0LL;
            v32 = v30 | ((unsigned __int64)(v12[268] & 0x10) << 53);
            v33 = 0x1000000000000000LL;
            if ( v31 != 3 )
              v33 = 0LL;
            v34 = v33 | v32;
            v35 = 0x800000000000000LL;
            if ( v31 != 4 )
              v35 = 0LL;
            v36 = v35 | v34;
            v37 = 0x508700000000000LL;
            if ( v31 != 2 )
              v37 = 0x108700000000000LL;
            *(_QWORD *)(v16 + 56) |= v37 | v36;
            v9 = (unsigned int)P[0];
            ++i;
          }
        }
      }
      *((_WORD *)v8 + 10) = i;
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x7774656Cu);
  return (unsigned int)PathsModality;
}
