/*
 * XREFs of RtlStackDbStackAdd @ 0x1801188A8
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180108840 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x180118FF4 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x180119078 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x180119234 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x180119A58 (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // r10
  __int64 v18; // r9
  int v19; // r8d
  _QWORD *v20; // r12
  __int64 v21; // r9
  int v22; // r8d
  unsigned __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rbx
  char *v26; // rax
  _QWORD *v27; // r9
  char *v28; // r8
  char v29; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r10
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v39; // [rsp+20h] [rbp-20h]
  void (__fastcall *v40)(__int64, __int64, char *, _QWORD *); // [rsp+28h] [rbp-18h]
  unsigned int v41; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 *v42; // [rsp+38h] [rbp-8h]
  __int64 v43; // [rsp+80h] [rbp+40h]
  __int64 v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+80h] [rbp+40h]
  __int64 v46; // [rsp+98h] [rbp+58h]

  v3 = a2;
  if ( !a1 || !a3 || !a2 )
    return 0LL;
  v41 = a3;
  v5 = 314159LL;
  v6 = a3;
  v7 = 8LL * a3;
  v42 = a2;
  if ( (unsigned __int64)v7 >= 8 )
  {
    v7 -= 8LL * (unsigned int)v6;
    do
    {
      v8 = v3[6] + 37 * (v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v5))))));
      v9 = v3[7];
      v3 += 8;
      v5 = v9 + 37 * v8;
      --v6;
    }
    while ( v6 );
  }
  if ( v7 < 1 || v7 > 7 )
    goto LABEL_23;
  v10 = v7 - 1;
  if ( !v10 )
    goto LABEL_22;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_21:
    v5 = *v3++ + 37 * v5;
LABEL_22:
    v5 = *v3 + 37 * v5;
    goto LABEL_23;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_20:
    v5 = *v3++ + 37 * v5;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_19:
    v5 = *v3++ + 37 * v5;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_18:
    v5 = *v3++ + 37 * v5;
    goto LABEL_19;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
LABEL_17:
    v5 = *v3++ + 37 * v5;
    goto LABEL_18;
  }
  if ( v15 == 1 )
  {
    v5 = *v3++ + 37 * v5;
    goto LABEL_17;
  }
LABEL_23:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v16 = 0LL;
  while ( 1 )
  {
    v17 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v18 = v17 & v5;
    if ( v16 )
      goto LABEL_27;
    v19 = *(_DWORD *)(a1 + 20) >> 5;
    if ( !v19 )
      break;
    v43 = v17 & v5;
    v16 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v43)
           + 37
           * (BYTE5(v43)
            + 37
            * (BYTE4(v43)
             + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v43)) & (unsigned int)(v19 - 1));
LABEL_27:
    while ( 1 )
    {
      v16 = *(_QWORD *)v16;
      if ( (v16 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v16 + 8)) )
        goto LABEL_31;
    }
    v16 = 0LL;
LABEL_31:
    if ( !v16 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v16, &v41) )
      goto LABEL_35;
  }
  v16 = 0LL;
LABEL_35:
  if ( !v16 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
    v46 = RtlpStackDbEntryCreate(a1, &v41, v5);
    v20 = (_QWORD *)v46;
    if ( v46 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
      v16 = 0LL;
      while ( 1 )
      {
        v21 = v5 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
        if ( v16 )
          goto LABEL_44;
        v22 = *(_DWORD *)(a1 + 20) >> 5;
        if ( !v22 )
          break;
        v16 = *(_QWORD *)(a1 + 24)
            + 8LL
            * ((37
              * (BYTE6(v21)
               + 37
               * (BYTE5(v21)
                + 37
                * (BYTE4(v21)
                 + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
              + HIBYTE(v21)) & (unsigned int)(v22 - 1));
LABEL_44:
        while ( 1 )
        {
          v16 = *(_QWORD *)v16;
          if ( (v16 & 1) != 0 )
            break;
          if ( v21 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v16 + 8)) )
            goto LABEL_48;
        }
        v16 = 0LL;
LABEL_48:
        if ( !v16 )
          goto LABEL_55;
        if ( (unsigned int)RtlpStackDbStackComparitor(v16, &v41) )
          goto LABEL_52;
      }
      v16 = 0LL;
LABEL_52:
      if ( v16 )
      {
        if ( !(unsigned int)RtlpStackDbRefCountIncrement(v16 + 16) )
          v16 = 0LL;
        goto LABEL_80;
      }
LABEL_55:
      v23 = a1 + 16;
      v40 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
      v24 = *(_DWORD *)(a1 + 20);
      v25 = 2 * (v24 >> 5);
      v39 = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 16) >= (unsigned int)v25 )
      {
        if ( (unsigned int)v25 < 4 )
          v25 = 4LL;
        v26 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v25);
        v27 = 0LL;
        v28 = v26;
        if ( v26 )
        {
          if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
          {
            v29 = -1;
            do
            {
              ++v29;
              LODWORD(v25) = (unsigned int)v25 >> 1;
            }
            while ( (_DWORD)v25 );
            v25 = (unsigned int)(1 << v29);
          }
          if ( (unsigned int)v25 > 0x4000000 )
            v25 = 0x4000000LL;
          v30 = (unsigned int)v25;
          if ( v26 > &v26[8 * v25] )
            v30 = 0LL;
          if ( v30 )
            memset64(v26, v23 | 1, v30);
          v31 = 0;
          v32 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v33 = *(_QWORD *)(a1 + 24);
              while ( 1 )
              {
                v27 = *(_QWORD **)(v33 + 8LL * v31);
                if ( ((unsigned __int8)v27 & 1) != 0 )
                  break;
                *(_QWORD *)(v33 + 8LL * v31) = *v27;
                v44 = v32 & v27[1];
                v34 = (37
                     * (BYTE6(v44)
                      + 37
                      * (BYTE5(v44)
                       + 37
                       * (BYTE4(v44)
                        + 37
                        * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
                     + HIBYTE(v44)) & (unsigned int)(v25 - 1);
                *v27 = *(_QWORD *)&v26[8 * v34];
                *(_QWORD *)&v26[8 * v34] = v27;
              }
              ++v31;
            }
            while ( v31 < *(_DWORD *)(a1 + 20) >> 5 );
            v20 = (_QWORD *)v46;
          }
          v35 = *(_QWORD *)(a1 + 24);
          v24 = (32 * v25) | *(_DWORD *)(a1 + 20) & 0x1F;
          *(_QWORD *)(a1 + 24) = v28;
          *(_DWORD *)(a1 + 20) = v24;
          if ( v35 )
          {
            v40(v35, v39, v28, v27);
            v24 = *(_DWORD *)(a1 + 20);
          }
        }
        else
        {
          v24 = *(_DWORD *)(a1 + 20);
          if ( v24 < 0x20 )
          {
            v16 = 0LL;
LABEL_80:
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
            RtlpStackDbEntryCleanup(a1, v46);
            return (_QWORD *)v16;
          }
        }
      }
      v45 = v20[1] & (-1LL << (v24 & 0x1F));
      v36 = *(_QWORD *)(a1 + 24);
      v37 = (37
           * (BYTE6(v45)
            + 37
            * (BYTE5(v45)
             + 37
             * (BYTE4(v45)
              + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
           + HIBYTE(v45)) & ((v24 >> 5) - 1);
      *v20 = *(_QWORD *)(v36 + 8 * v37);
      *(_QWORD *)(v36 + 8 * v37) = v20;
      ++*(_DWORD *)v23;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
      return v20;
    }
    return 0LL;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v16 + 16) )
    v16 = 0LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  return (_QWORD *)v16;
}
