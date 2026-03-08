/*
 * XREFs of CmpGetNameControlBlock @ 0x1407B01F0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpUnlockNameHashEntry @ 0x140A1C95C (CmpUnlockNameHashEntry.c)
 */

_DWORD *__fastcall CmpGetNameControlBlock(__m128i *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v4; // r8d
  char v5; // r14
  unsigned int v6; // r9d
  unsigned __int16 v7; // r11
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // dx
  __int64 v11; // r13
  unsigned __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r15
  _DWORD *v16; // r12
  unsigned __int16 v17; // r8
  bool v18; // dl
  signed __int64 v19; // r10
  __int64 *v20; // rdi
  int v21; // ecx
  unsigned __int16 *v22; // r14
  unsigned __int16 *v23; // rbp
  unsigned __int16 v24; // r10
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // dx
  int v27; // r11d
  int v28; // ecx
  unsigned int v29; // esi
  _DWORD *Pool; // rax
  int v31; // eax
  __int64 v32; // r10
  _BYTE *v33; // r9
  __int64 v34; // r11
  unsigned __int16 v35; // dx
  char *v36; // rcx
  int v37; // eax
  signed __int64 *v38; // rbx
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  signed __int64 v41; // rtt
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v44; // dx
  struct _LIST_ENTRY *v45; // rax
  unsigned __int16 v46; // dx
  struct _LIST_ENTRY *v47; // rax
  unsigned __int16 v48; // dx
  int v49; // r9d
  unsigned int v50; // edx
  unsigned int v51; // ecx
  struct _LIST_ENTRY *v52; // rax
  unsigned __int16 v53; // dx
  unsigned int v54; // esi
  __int64 v55; // r9
  __int64 v56; // r10
  unsigned __int16 v57; // dx
  struct _LIST_ENTRY *v58; // rax
  unsigned __int16 v59; // dx
  char v60; // [rsp+60h] [rbp+8h]
  unsigned __int16 v61; // [rsp+68h] [rbp+10h]
  bool v62; // [rsp+70h] [rbp+18h]

  v62 = 0;
  if ( a2 )
    v3 = *a2;
  else
    v3 = CmpHashUnicodeComponent(a1);
  v4 = a1->m128i_u16[0];
  v5 = 1;
  v6 = 0;
  v60 = 1;
  v61 = (unsigned __int16)v4 >> 1;
  if ( (v4 & 0xFFFFFFFE) != 0 )
  {
    v7 = 255;
    do
    {
      v8 = *(_WORD *)(a1->m128i_i64[1] + 2LL * v6);
      if ( v8 >= 0x61u )
      {
        if ( v8 > 0x7Au )
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v10 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v44);
        }
        else
        {
          v9 = v4;
          v10 = v8 - 32;
        }
        if ( v10 > v7 )
        {
          v61 = v9;
          v5 = 0;
        }
      }
      else
      {
        v9 = v4;
      }
      ++v6;
      LOWORD(v4) = v9;
    }
    while ( v6 < v9 >> 1 );
    v60 = v5;
  }
  v11 = 16LL
      * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF);
  v12 = (unsigned __int64 *)((char *)CmpNameCacheTable + v11);
  v13 = KeAbPreAcquire((__int64)CmpNameCacheTable + v11, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v15 = *(_QWORD *)((char *)CmpNameCacheTable + v11 + 8);
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = (_DWORD *)(v15 - 8);
      v17 = v61;
      if ( v3 == *(_DWORD *)v15 && (v21 = *((unsigned __int16 *)v16 + 12), v61 == (_WORD)v21) )
      {
        v20 = &a1->m128i_i64[1];
        v22 = (unsigned __int16 *)a1->m128i_i64[1];
        v23 = (unsigned __int16 *)v16 + 13;
        v18 = 1;
        if ( (*v16 & 1) != 0 )
        {
          v24 = v61;
          v25 = (unsigned __int16)a1->m128i_i16[0] >> 1;
          if ( v25 )
          {
            while ( 1 )
            {
              if ( !v24 )
              {
LABEL_32:
                v17 = v61;
                goto LABEL_33;
              }
              v26 = *v22++;
              v27 = *(unsigned __int8 *)v23;
              v23 = (unsigned __int16 *)((char *)v23 + 1);
              if ( v26 != (_WORD)v27 )
              {
                if ( v26 >= 0x61u )
                {
                  if ( v26 > 0x7Au )
                  {
                    v47 = PsGetCurrentServerSiloGlobals();
                    v26 = NLS_UPCASE((__int64)v47[77].Flink, v48);
                  }
                  else
                  {
                    v26 -= 32;
                  }
                }
                v28 = v26 - v27;
                if ( v26 != v27 )
                  break;
              }
              --v24;
              if ( !--v25 )
                goto LABEL_32;
            }
            v17 = v61;
          }
          else
          {
LABEL_33:
            v28 = v25 - v24;
          }
          v18 = v28 == 0;
          v19 = 0LL;
          v62 = v28 == 0;
          if ( !v28 )
          {
LABEL_35:
            if ( (*v16 & 0xFFFFFFFE) == 0xFFFFFFFE )
              v16 = (_DWORD *)v19;
            else
              *v16 += 2;
LABEL_37:
            if ( !v18 )
            {
              v5 = v60;
              goto LABEL_40;
            }
LABEL_47:
            v38 = (signed __int64 *)((char *)CmpNameCacheTable + v11);
            _m_prefetchw((char *)CmpNameCacheTable + v11);
            v39 = *v38;
            v40 = *v38 - 16;
            if ( (*v38 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v40 = v19;
            if ( (v39 & 2) != 0 || (v41 = *v38, v41 != _InterlockedCompareExchange64(v38, v40, v39)) )
              ExfReleasePushLock(v38);
            KeAbPostRelease((ULONG_PTR)v38);
            return v16;
          }
        }
        else
        {
          v19 = 0LL;
          v49 = 0;
          if ( (v21 & 0xFFFFFFFE) == 0 )
            goto LABEL_35;
          while ( 1 )
          {
            v50 = *v22;
            if ( v50 >= 0x61 )
            {
              if ( v50 <= 0x7A )
              {
                v51 = v50 - 32;
              }
              else
              {
                v52 = PsGetCurrentServerSiloGlobals();
                v51 = NLS_UPCASE((__int64)v52[77].Flink, v53);
              }
            }
            else
            {
              v51 = *v22;
            }
            if ( v51 != *v23 )
              break;
            ++v22;
            ++v23;
            if ( ++v49 >= (unsigned int)(*((unsigned __int16 *)v16 + 12) >> 1) )
            {
              v18 = 1;
              v17 = v61;
              goto LABEL_35;
            }
          }
          v17 = v61;
          v18 = 0;
          v62 = 0;
        }
      }
      else
      {
        v18 = v62;
        v19 = 0LL;
      }
      v15 = *(_QWORD *)(v15 + 8);
      if ( !v15 )
      {
        v20 = &a1->m128i_i64[1];
        goto LABEL_37;
      }
    }
  }
  v17 = v61;
  v20 = &a1->m128i_i64[1];
LABEL_40:
  v29 = v17;
  Pool = (_DWORD *)CmpAllocatePool(256LL, (unsigned int)v17 + 26, 1649298755LL);
  v16 = Pool;
  if ( Pool )
  {
    v31 = *Pool;
    if ( v5 )
    {
      *v16 = v31 | 1;
      if ( v29 )
      {
        v32 = 0LL;
        v33 = (char *)v16 + 26;
        v34 = v29;
        do
        {
          v35 = *(_WORD *)(v32 + *v20);
          if ( v35 >= 0x61u )
          {
            if ( v35 > 0x7Au )
            {
              v45 = PsGetCurrentServerSiloGlobals();
              LOBYTE(v35) = NLS_UPCASE((__int64)v45[77].Flink, v46);
            }
            else
            {
              LOBYTE(v35) = v35 - 32;
            }
          }
          *v33 = v35;
          v32 += 2LL;
          ++v33;
          --v34;
        }
        while ( v34 );
      }
    }
    else
    {
      v54 = v29 >> 1;
      *v16 = v31 & 0xFFFFFFFE;
      if ( v54 )
      {
        v55 = 0LL;
        v56 = v54;
        do
        {
          v57 = *(_WORD *)(v55 + *v20);
          if ( v57 >= 0x61u )
          {
            if ( v57 <= 0x7Au )
            {
              v57 -= 32;
            }
            else
            {
              v58 = PsGetCurrentServerSiloGlobals();
              v57 = NLS_UPCASE((__int64)v58[77].Flink, v59);
            }
          }
          *(_WORD *)((char *)v16 + v55 + 26) = v57;
          v55 += 2LL;
          --v56;
        }
        while ( v56 );
      }
    }
    v36 = (char *)CmpNameCacheTable;
    v37 = *v16 & 1 | 2;
    v16[2] = v3;
    *v16 = v37;
    v19 = 0LL;
    *((_WORD *)v16 + 12) = v61;
    *((_QWORD *)v16 + 2) = *(_QWORD *)&v36[v11 + 8];
    *(_QWORD *)&v36[v11 + 8] = v16 + 2;
    goto LABEL_47;
  }
  CmpUnlockNameHashEntry(v3);
  return 0LL;
}
