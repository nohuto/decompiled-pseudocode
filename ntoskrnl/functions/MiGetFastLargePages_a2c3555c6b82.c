__int64 __fastcall MiGetFastLargePages(int *a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r9d
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r13d
  int v12; // eax
  int v13; // edx
  __int64 v14; // r9
  int v15; // ecx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edi
  unsigned __int64 *v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 PfnPageSizeIndex; // r9
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 *v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned int v37; // [rsp+38h] [rbp-50h]
  unsigned int v38; // [rsp+90h] [rbp+8h]
  char v40; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v41; // [rsp+A8h] [rbp+20h]

  MiInitializeLargePfnList(a2);
  v3 = MiProtectionToCacheAttribute(a1[9]);
  v6 = *((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 8);
  v7 = *((_QWORD *)a1 + 5);
  v8 = v3;
  v9 = (unsigned int)a1[12];
  v38 = v3;
  if ( v7 != -1 )
  {
    v29 = 48 * v7 - 0x220000000000LL;
    if ( (*(_BYTE *)(v29 + 34) & 7u) <= 1 )
    {
      if ( (unsigned int)MiGetPfnPageSizeIndex(v29, v4, v5, v3) == (_DWORD)v9 )
      {
        v30 = MiLargePageSizes[v9];
        v21 = (unsigned __int64 *)(a1 + 14);
        v31 = *((_QWORD *)a1 + 7);
        if ( v31 )
        {
          v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( (unsigned int)v9 < 2 )
          {
            v33 = (unsigned int)(2 - v9);
            do
            {
              v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v33;
            }
            while ( v33 );
          }
          v34 = (v32 >> 3) & 0x1FF;
          if ( v6 > v30 * (512 - v34) )
            v6 = v30 * (512 - v34);
        }
        v35 = *((_QWORD *)a1 + 1);
        v41 = a1 + 2;
        v22 = MiTryUnlinkNodeLargePages(v35, v7, (unsigned int)v9, v6 / v30, 0, &v40, 0LL);
        if ( v22 )
        {
          v11 = 1;
          v20 = 0;
          do
          {
LABEL_8:
            v23 = *(_QWORD *)v22;
            PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(v22, v17, v18, v19);
            v25 = MiLargePageSizes[PfnPageSizeIndex];
            v26 = a2 + 24 * PfnPageSizeIndex;
            v27 = *(__int64 **)(v26 + 8);
            if ( *v27 != v26 )
              __fastfail(3u);
            *(_QWORD *)v22 = v26;
            *(_QWORD *)(v22 + 8) = v27;
            *v27 = v22;
            *(_QWORD *)(v26 + 8) = v22;
            ++*(_QWORD *)(v26 + 16);
            *((_QWORD *)a1 + 8) += v25;
            v28 = *v21;
            if ( *v21 )
            {
              v28 += v25 << 12;
              *v21 = v28;
            }
            if ( v11 )
            {
              v36 = *((_QWORD *)a1 + 5);
              if ( v36 + v25 > v36 )
              {
                if ( v28
                  && (_DWORD)PfnPageSizeIndex
                  && ((v28 >> 12) & MiLargePageSizes[(unsigned int)(PfnPageSizeIndex - 1)]) == 0 )
                {
                  v20 = 1;
                }
              }
              else
              {
                v20 = 1;
              }
              *((_QWORD *)a1 + 5) = v36 + v25;
            }
            if ( *(unsigned __int8 *)(v22 + 34) >> 6 != v38 )
              MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * ((v22 + 0x220000000000LL) >> 4), v25, v38, 0);
            result = MiUpdateLargePageBitMap(
                       *v41,
                       -1431655765 * (unsigned int)((v22 + 0x220000000000LL) >> 4),
                       v25,
                       1,
                       1);
            v22 = v23;
          }
          while ( v23 );
          if ( v20 )
            *((_QWORD *)a1 + 5) = -1LL;
          return result;
        }
      }
      v8 = v38;
    }
    *((_QWORD *)a1 + 5) = -1LL;
  }
  v10 = *a1;
  v11 = 0;
  v12 = (*a1 & 8) != 0 ? 8 : 4;
  if ( KeGetCurrentIrql() < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    v12 |= 0x80u;
  v13 = a1[8];
  v37 = v8;
  v14 = *((_QWORD *)a1 + 3);
  v15 = v12 | 1;
  *((_QWORD *)a1 + 5) = -1LL;
  if ( (v10 & 1) == 0 )
    v15 = v12;
  result = MiGetLargePagesDemoteAsNeeded(
             *((_QWORD *)a1 + 1),
             v13,
             (unsigned int)*((_QWORD *)a1 + 2) - a1[16],
             v14,
             *((_QWORD *)a1 + 7),
             1,
             v15,
             v37);
  v20 = 0;
  v41 = a1 + 2;
  v21 = (unsigned __int64 *)(a1 + 14);
  v22 = result;
  if ( result )
    goto LABEL_8;
  return result;
}
