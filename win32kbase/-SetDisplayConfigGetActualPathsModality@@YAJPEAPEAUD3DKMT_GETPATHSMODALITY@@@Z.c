__int64 __fastcall SetDisplayConfigGetActualPathsModality(struct D3DKMT_GETPATHSMODALITY **a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  int *v9; // rdx
  int v10; // eax
  unsigned int v11; // r12d
  struct D3DKMT_GETPATHSMODALITY *v12; // rdi
  unsigned int v13; // r8d
  unsigned int v14; // esi
  unsigned int v15; // r14d
  _DWORD *v16; // rbx
  int v18; // edx
  _DWORD *v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rdx
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int128 v42; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-D0h]
  _BYTE v44[304]; // [rsp+40h] [rbp-C0h] BYREF
  int PathsModality; // [rsp+1A8h] [rbp+A8h]

  v2 = 0;
  v42 = 0LL;
  *(_OWORD *)P = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  if ( (*(unsigned int (__fastcall **)(__int128 *, _QWORD))(DxgkWin32kInterface + 696))(&v42, 0LL) == -1073741789 )
  {
    P[1] = (PVOID)ExAllocatePool2(258LL, 1076LL * LODWORD(P[0]), 2004116844LL);
    if ( P[1] )
    {
      HIDWORD(P[0]) = P[0];
      v7 = DxDdGetDxgkWin32kInterface(v5, v6);
      if ( (*(unsigned int (__fastcall **)(__int128 *, _QWORD))(v7 + 696))(&v42, 0LL) == -1073741789
        && (v5 = LODWORD(P[0]), LODWORD(P[0]) <= HIDWORD(P[0])) )
      {
        if ( LODWORD(P[0]) )
        {
          v8 = LODWORD(P[0]);
          v9 = (int *)((char *)P[1] + 1072);
          do
          {
            v10 = *v9;
            v5 = v2++;
            v9 += 269;
            if ( (v10 & 1) == 0 )
              v2 = v5;
            --v8;
          }
          while ( v8 );
        }
      }
      else
      {
        P[0] = 0LL;
      }
    }
  }
  PathsModality = GetPathsModality(v5, a1, 16777280LL);
  v11 = PathsModality;
  if ( PathsModality >= 0 )
  {
    v12 = *a1;
    if ( v2 )
    {
      v13 = (unsigned int)P[0];
      v14 = 0;
      v15 = *((unsigned __int16 *)v12 + 10);
      if ( LODWORD(P[0]) )
      {
        do
        {
          if ( v15 >= *((unsigned __int16 *)v12 + 11) )
            break;
          v16 = (char *)P[1] + 1076 * v14;
          if ( (v16[268] & 1) != 0 )
          {
            v18 = 0;
            if ( *((_WORD *)v12 + 10) )
            {
              v19 = (_DWORD *)((char *)v12 + 76);
              while ( *(v19 - 1) != *v16 || *v19 != v16[1] || v19[2] != v16[2] )
              {
                ++v18;
                v19 += 74;
                if ( v18 >= *((unsigned __int16 *)v12 + 10) )
                  goto LABEL_27;
              }
            }
            else
            {
LABEL_27:
              v20 = (__int64)v12 + 296 * v15;
              memset(v44, 0, 0x128uLL);
              v21 = 2LL;
              v22 = (_OWORD *)(v20 + 56);
              v23 = v44;
              do
              {
                v24 = v23[1];
                *v22 = *v23;
                v25 = v23[2];
                v22[1] = v24;
                v26 = v23[3];
                v22[2] = v25;
                v27 = v23[4];
                v22[3] = v26;
                v28 = v23[5];
                v22[4] = v27;
                v29 = v23[6];
                v22[5] = v28;
                v30 = v23[7];
                v23 += 8;
                v22[6] = v29;
                v22 += 8;
                *(v22 - 1) = v30;
                --v21;
              }
              while ( v21 );
              v31 = *v23;
              v32 = v23[1];
              v33 = *((_QWORD *)v23 + 4);
              *v22 = v31;
              v22[1] = v32;
              *((_QWORD *)v22 + 4) = v33;
              *(_DWORD *)(v20 + 84) = v16[2];
              *(_QWORD *)(v20 + 72) = *(_QWORD *)v16;
              v34 = 0x1000000000000000LL;
              *(_BYTE *)(v20 + 185) = v16[268] & 2 | ((v16[268] & 4) != 0) | (v16[268] >> 3) & 4;
              v35 = v16[264];
              if ( v35 != 5 )
                v34 = 0LL;
              v36 = v34 | ((unsigned __int64)(v16[268] & 0x10) << 53);
              v37 = 0x1000000000000000LL;
              if ( v35 != 3 )
                v37 = 0LL;
              v38 = v37 | v36;
              v39 = 0x800000000000000LL;
              if ( v35 != 4 )
                v39 = 0LL;
              v40 = v39 | v38;
              v41 = 0x508700000000000LL;
              if ( v35 != 2 )
                v41 = 0x108700000000000LL;
              *(_QWORD *)(v20 + 56) |= v41 | v40;
              v13 = (unsigned int)P[0];
              ++v15;
            }
          }
          ++v14;
        }
        while ( v14 < v13 );
        v11 = PathsModality;
      }
      *((_WORD *)v12 + 10) = v15;
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x7774656Cu);
  return v11;
}
