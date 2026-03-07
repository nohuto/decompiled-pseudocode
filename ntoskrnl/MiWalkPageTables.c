__int64 __fastcall MiWalkPageTables(__m128i *a1)
{
  __m128i *v1; // rdi
  unsigned __int64 v2; // rax
  int v3; // r8d
  int v4; // r10d
  unsigned int v5; // eax
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __m128i *p_si128; // r13
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  __int32 v24; // eax
  __int64 v25; // r9
  unsigned __int64 v26; // r14
  _KPROCESS *Process; // rcx
  __int64 i; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  int v31; // ebx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v37; // [rsp+28h] [rbp-D0h]
  __m128i *v38; // [rsp+30h] [rbp-C8h]
  __int64 v39; // [rsp+38h] [rbp-C0h]
  __int64 v40; // [rsp+40h] [rbp-B8h]
  __m128i si128; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+60h] [rbp-98h]
  unsigned __int64 v44; // [rsp+68h] [rbp-90h]
  unsigned __int64 v45; // [rsp+70h] [rbp-88h]
  unsigned __int64 v46; // [rsp+78h] [rbp-80h]
  __int64 v47; // [rsp+80h] [rbp-78h]
  _QWORD v48[14]; // [rsp+88h] [rbp-70h] BYREF
  int v50; // [rsp+108h] [rbp+10h]
  unsigned int v51; // [rsp+110h] [rbp+18h]
  unsigned int v52; // [rsp+118h] [rbp+20h]

  v1 = a1;
  if ( (a1->m128i_i32[0] & 0x10000) == 0 )
    a1[4].m128i_i64[1] = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1[1].m128i_i64[1] + 174));
  if ( !a1->m128i_i8[6] )
    a1->m128i_i8[6] = 15;
  v2 = a1[3].m128i_u64[1];
  if ( !v2 )
  {
    si128 = a1[2];
LABEL_47:
    v4 = 1;
    goto LABEL_13;
  }
  if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v2 = 0xFFFFF6FB7DBEDF70uLL;
    a1[3].m128i_i64[1] = 0xFFFFF6FB7DBEDF70uLL;
  }
  v3 = -1;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
    a1[3].m128i_i64[1] = 0LL;
    goto LABEL_47;
  }
  do
  {
    ++v3;
    v2 = (__int64)(v2 << 25) >> 16;
  }
  while ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL );
  si128.m128i_i64[0] = v2;
  v50 = 1;
  si128.m128i_i64[1] = -1LL;
  if ( v3 == -1 )
    goto LABEL_14;
  v42 = 0LL;
  v43 = v2 - 1;
  v4 = 2;
LABEL_13:
  v50 = v4;
LABEL_14:
  v5 = MiInitializeWalkBounds(a1, v48);
  v7 = 0;
  v51 = v5;
  p_si128 = &si128;
  v52 = 0;
  v9 = v5;
  v38 = &si128;
  do
  {
    v10 = 0;
    if ( v9 )
    {
      v11 = p_si128->m128i_i64[0];
      v12 = p_si128->m128i_u64[1];
      v40 = p_si128->m128i_i64[0];
      v37 = v12;
      do
      {
        v13 = v11;
        v14 = v48[2 * v10 + 1];
        if ( v11 <= v14 )
        {
          v15 = v48[2 * v10];
          if ( v12 >= v15 )
          {
            if ( v11 < v15 )
              v13 = v48[2 * v10];
            v16 = v12;
            if ( v12 > v14 )
              v16 = v48[2 * v10 + 1];
            v17 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[5].m128i_i64[0] = v17;
            v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[5].m128i_i64[1] = v18;
            v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[6].m128i_i64[0] = v19;
            v20 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[6].m128i_i64[1] = v20;
            v21 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[7].m128i_i64[0] = v21;
            v22 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[7].m128i_i64[1] = v22;
            v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[8].m128i_i64[0] = v23;
            v1[8].m128i_i64[1] = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v24 = v1->m128i_i32[0];
            v1[4].m128i_i64[0] = 0LL;
            if ( (v24 & 0x10000) != 0 )
            {
              result = MiWalkPageTablesRecursivelyNoSynch(v1, v23, 3LL);
              if ( (int)result >= 4 )
                return result;
            }
            else
            {
              if ( (v24 & 4) != 0 )
              {
                v25 = v1[1].m128i_i64[1];
                v1->m128i_i8[4] |= 1u;
                v39 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v36 = v25;
                v44 = (((unsigned __int64)(v39 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v47 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v26 = 0xFFFFF6FB7DBEDF68uLL;
                MiLockPageTableInternal(v25, 0xFFFFF6FB7DBEDF68uLL, 0LL);
                for ( i = 2LL; ; --i )
                {
                  v29 = *(&v44 + i);
                  v30 = *(_QWORD *)v29;
                  if ( v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
                  {
                    Process = KeGetCurrentThread()->ApcState.Process;
                    if ( Process->AddressPolicy != 1 && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
                    {
                      Process = KeGetCurrentThread()->ApcState.Process;
                      Flink = Process[1].ProcessListEntry.Flink;
                      if ( Flink )
                      {
                        v34 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
                        v35 = v30 | 0x20;
                        if ( (v34 & 0x20) == 0 )
                          v35 = *(_QWORD *)v29;
                        v30 = v35;
                        if ( (v34 & 0x42) != 0 )
                          v30 = v35 | 0x42;
                      }
                    }
                  }
                  if ( (v30 & 0x81) != 1 )
                    break;
                  if ( (v30 & 0x20) == 0 )
                    MiPerformSafePdeWrite(Process, *(&v44 + i), v30, 1LL);
                  if ( v29 != v26 )
                  {
                    MiLockPageTableInternal(v36, v29, 0LL);
                    MiUnlockPageTableInternal(v36, v26);
                    v26 = v29;
                  }
                  if ( !i )
                    break;
                }
                v1 = a1;
                p_si128 = v38;
                if ( v26 == v39 )
                {
                  a1->m128i_i8[4] &= ~1u;
                  v9 = v51;
                  a1[3].m128i_i64[0] = v39;
                }
                else
                {
                  MiUnlockPageTableInternal(v36, v26);
                  v9 = v51;
                }
              }
              else
              {
                v1[3].m128i_i64[0] = 0LL;
                if ( (v24 & 0x400) != 0 )
                  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66CA4);
                v1->m128i_i8[4] &= ~1u;
              }
              v31 = MiWalkPageTablesRecursively(v1, v23, 3LL);
              if ( (v1->m128i_i32[0] & 0x400) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66CA4);
              if ( v31 >= 4 )
                return (unsigned int)v31;
            }
            v12 = v37;
          }
        }
        v11 = v40;
        ++v10;
      }
      while ( v10 < v9 );
      v6 = v50;
      v7 = v52;
    }
    ++v7;
    ++p_si128;
    v52 = v7;
    v38 = p_si128;
  }
  while ( v7 < v6 );
  return 4LL;
}
