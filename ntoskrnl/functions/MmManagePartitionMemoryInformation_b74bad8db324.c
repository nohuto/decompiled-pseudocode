__int64 __fastcall MmManagePartitionMemoryInformation(unsigned __int16 **a1, __int64 a2)
{
  unsigned __int16 *v2; // r13
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned __int64 v22; // rax
  __int64 j; // r12
  __int64 v24; // r9
  __int64 v25; // r10
  char *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned int v32; // eax
  __int64 v33; // rax
  int i; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v39[22]; // [rsp+50h] [rbp-B0h] BYREF
  char v40[24]; // [rsp+100h] [rbp+0h] BYREF
  char v41; // [rsp+118h] [rbp+18h] BYREF

  v2 = *a1;
  v38 = 0LL;
  memset(v39, 0, sizeof(v39));
  if ( (*(_DWORD *)a2 & 0xFFFFFFFE) == 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    v5 = (unsigned __int16)KeNumberNodes;
    if ( (v4 == -1 || v4 < (unsigned __int16)KeNumberNodes) && *(_DWORD *)(a2 + 8) == -1 )
    {
      v6 = 0;
      v7 = 0;
      *(_QWORD *)(a2 + 224) = 0LL;
      for ( i = 0; ; v6 = i )
      {
        v8 = 0LL;
        v9 = v6;
        if ( v2 != MiSystemPartition || (*(_DWORD *)a2 & 1) != 0 )
        {
          v32 = *(_DWORD *)(a2 + 4);
          if ( v32 != -1 )
            goto LABEL_44;
        }
        else
        {
          v10 = *(unsigned int *)(a2 + 4);
          if ( (_DWORD)v10 != -1 )
          {
            v8 = MiState[v10 + 1002];
            v32 = *(_DWORD *)(a2 + 4);
LABEL_44:
            *(_DWORD *)(a2 + 12) = 0;
            v5 = v32 + 1;
            v7 = v32;
LABEL_45:
            i = 1;
LABEL_46:
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 40) = 0LL;
            *(_QWORD *)(a2 + 216) = 0LL;
            memset((void *)(a2 + 88), 0, 0x80uLL);
            goto LABEL_23;
          }
          if ( v7 < v5 )
          {
            v11 = &MiState[v7 + 1002];
            v12 = v5 - v7;
            do
            {
              v8 += *v11++;
              --v12;
            }
            while ( v12 );
          }
        }
        *(_DWORD *)(a2 + 12) = (unsigned __int16)KeNumberNodes;
        if ( (*(_DWORD *)a2 & 1) != 0 )
          goto LABEL_45;
        *(_QWORD *)(a2 + 16) = *((_QWORD *)v2 + 2160);
        v13 = *((_QWORD *)v2 + 2197);
        if ( v13 < v8 )
          goto LABEL_47;
        *(_QWORD *)(a2 + 24) = v13 - v8;
        v14 = *((_QWORD *)v2 + 2227);
        if ( v14 < v8 )
          goto LABEL_47;
        *(_QWORD *)(a2 + 32) = v14 - v8;
        v15 = *((_QWORD *)v2 + 2048);
        if ( v15 < v8 )
          goto LABEL_47;
        *(_QWORD *)(a2 + 40) = v15 - v8;
        MiQueryMemoryListInformation(v2, v39);
        memmove((void *)(a2 + 88), &v39[5], 0x40uLL);
        memmove((void *)(a2 + 152), &v39[13], 0x40uLL);
        v16 = *((_QWORD *)v2 + 2049);
        if ( v16 < v8 )
          goto LABEL_47;
        *(_QWORD *)(a2 + 216) = v16 - v8;
        v17 = *(_QWORD *)(a2 + 216);
        v18 = *(_QWORD *)(a2 + 32);
        if ( v18 > v17 )
          v17 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 216) = v17;
        v19 = *(_QWORD *)(a2 + 24);
        if ( *(_QWORD *)(a2 + 40) < v19 )
          *(_QWORD *)(a2 + 40) = v19;
        if ( v19 > v18 )
          *(_QWORD *)(a2 + 24) = v18;
        i = v9;
        if ( v9 )
          goto LABEL_46;
LABEL_23:
        *(_QWORD *)(a2 + 64) = 0LL;
        v20 = 0LL;
        *(_QWORD *)(a2 + 72) = 0LL;
        v21 = v7;
        *(_QWORD *)(a2 + 80) = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
        v22 = 0LL;
        for ( j = *((_QWORD *)v2 + 2) + 25408LL * v7; v21 < v5; j += 25408LL )
        {
          if ( (*(_DWORD *)a2 & 1) != 0 )
          {
            v35 = 0LL;
            v36 = 0LL;
            v37 = 0LL;
            MiGetNodeHugeRangeCounts(j, &v37, &v35, &v36);
            v33 = v35;
            *(_QWORD *)(a2 + 80) = 0LL;
            *(_QWORD *)(a2 + 64) += v33 << 18;
            *(_QWORD *)(a2 + 72) += v36 << 18;
            *(_QWORD *)(a2 + 48) += v37 << 18;
            v20 = 0LL;
          }
          else
          {
            MiGetChannelInformation((__int64)v2, v21, (__int64)v40, &v38);
            v24 = *(_QWORD *)(a2 + 64);
            v25 = *(_QWORD *)(a2 + 72);
            v20 = *(_QWORD *)(a2 + 80);
            if ( (unsigned int)(v38 / 0x28) )
            {
              v26 = &v41;
              v27 = (unsigned int)(v38 / 0x28);
              do
              {
                v24 += *((_QWORD *)v26 - 1);
                v25 += *(_QWORD *)v26;
                v20 += *((_QWORD *)v26 + 1);
                v26 += 40;
                --v27;
              }
              while ( v27 );
            }
            *(_QWORD *)(a2 + 64) = v24;
            *(_QWORD *)(a2 + 72) = v25;
            *(_QWORD *)(a2 + 80) = v20;
            *(_QWORD *)(a2 + 48) += *(_QWORD *)(j + 22832);
          }
          v22 = *(_QWORD *)(a2 + 48);
          ++v21;
        }
        if ( v2 == MiSystemPartition )
        {
          if ( v22 < v8 )
            goto LABEL_47;
          *(_QWORD *)(a2 + 48) = v22 - v8;
        }
        if ( *(_DWORD *)(a2 + 4) == -1 && (*(_DWORD *)a2 & 1) == 0 )
        {
          *(_QWORD *)(a2 + 80) = 0LL;
          v28 = (_QWORD *)(a2 + 88);
          v20 = 0LL;
          v29 = 8LL;
          do
          {
            v20 += *v28++;
            *(_QWORD *)(a2 + 80) = v20;
            --v29;
          }
          while ( v29 );
        }
        v30 = *(_QWORD *)(a2 + 72) + v20 + *(_QWORD *)(a2 + 64);
        *(_QWORD *)(a2 + 56) = v30;
        if ( v30 <= *(_QWORD *)(a2 + 48) )
        {
          *(_DWORD *)(a2 + 232) = *v2;
          return 0LL;
        }
LABEL_47:
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiOneMillisecond);
      }
    }
  }
  return 3221225485LL;
}
