__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  int v4; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14
  int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // rdi
  ULONG_PTR v13; // r13
  __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *i; // rcx
  char *v19; // r8
  char v20; // cl
  unsigned __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r10
  __int64 v24; // r13
  _QWORD *v25; // r9
  __int64 v26; // rdx
  struct _PRIVILEGE_SET *v27; // rcx
  int v28; // r15d
  int v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+28h] [rbp-48h]
  __int64 v31; // [rsp+30h] [rbp-40h]
  __int64 v32; // [rsp+38h] [rbp-38h]
  __int64 v33; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+58h] [rbp-18h]

  v29 = 0;
  v4 = a3;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( a3 > 0 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      goto LABEL_7;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  }
  if ( v4 )
    goto LABEL_7;
  v8 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v8 || *(_QWORD *)(v8 + 8) != *a2 )
  {
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
LABEL_10:
      v8 = 0LL;
      goto LABEL_11;
    }
LABEL_7:
    v9 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
    v10 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
    v11 = v10 & *a2;
    v30 = v11;
    if ( v9 )
    {
      v33 = v11;
      v8 = *(_QWORD *)(BugCheckParameter2 + 16)
         + 8LL
         * ((37
           * (BYTE6(v30)
            + 37
            * (BYTE5(v30)
             + 37
             * (BYTE4(v30)
              + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v11 + 11623883)))))))
           + HIBYTE(v30)) & (unsigned int)(v9 - 1));
      while ( 1 )
      {
        v8 = *(_QWORD *)v8;
        if ( (v8 & 1) != 0 )
          break;
        if ( v11 == (v10 & *(_QWORD *)(v8 + 8)) )
        {
          if ( !v8 )
            break;
          if ( v4 == 2 )
          {
            v30 = v10 & *(_QWORD *)(v8 + 8);
            v34 = v30;
            for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                               + 8LL
                               * ((v9 - 1) & (HIBYTE(v30)
                                            + 37
                                            * (BYTE6(v30)
                                             + 37
                                             * (BYTE5(v30)
                                              + 37
                                              * (BYTE4(v30)
                                               + 37
                                               * (BYTE3(v30)
                                                + 37
                                                * (BYTE2(v30)
                                                 + 37
                                                 * (BYTE1(v30) + 37 * ((unsigned int)(unsigned __int8)v30 + 11623883))))))))));
                  (*i & 1) == 0;
                  i = (_QWORD *)*i )
            {
              if ( *i == v8 )
              {
                *i = *(_QWORD *)v8;
                --*(_DWORD *)(BugCheckParameter2 + 8);
                *(_QWORD *)v8 |= 0x8000000000000002uLL;
                break;
              }
            }
            if ( *(_QWORD *)(BugCheckParameter2 + 24) == v8 )
              *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter2 + 24) = v8;
          }
          goto LABEL_11;
        }
      }
    }
    if ( v4 != 1 )
    {
      *(_QWORD *)(BugCheckParameter2 + 32) = *a2;
      goto LABEL_10;
    }
    v13 = BugCheckParameter2 + 8;
    v29 = 1414032755;
    v14 = (unsigned int)(2 * v9);
    v8 = (__int64)(a2 - 1);
    if ( *(_DWORD *)(BugCheckParameter2 + 8) >= (unsigned int)v14 )
    {
      if ( (unsigned int)v14 < 4 )
        v14 = 4LL;
      v19 = (char *)SmAllocWrapper(8LL * (unsigned int)v14, &v29);
      if ( v19 )
      {
        if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
        {
          v20 = -1;
          do
          {
            ++v20;
            LODWORD(v14) = (unsigned int)v14 >> 1;
          }
          while ( (_DWORD)v14 );
          v14 = (unsigned int)(1 << v20);
        }
        if ( (unsigned int)v14 > 0x4000000 )
          v14 = 0x4000000LL;
        v21 = (unsigned int)v14;
        if ( v19 > &v19[8 * v14] )
          v21 = 0LL;
        if ( v21 )
          memset64(v19, v13 | 1, v21);
        v22 = 0;
        v23 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v24 = *(_QWORD *)(v13 + 8);
            while ( 1 )
            {
              v25 = *(_QWORD **)(v24 + 8LL * v22);
              if ( ((unsigned __int8)v25 & 1) != 0 )
                break;
              *(_QWORD *)(v24 + 8LL * v22) = *v25;
              v31 = v23 & v25[1];
              v26 = (37
                   * (BYTE6(v31)
                    + 37
                    * (BYTE5(v31)
                     + 37
                     * (BYTE4(v31)
                      + 37
                      * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                   + HIBYTE(v31)) & (unsigned int)(v14 - 1);
              *v25 = *(_QWORD *)&v19[8 * v26];
              *(_QWORD *)&v19[8 * v26] = v25;
            }
            v13 = BugCheckParameter2 + 8;
            ++v22;
          }
          while ( v22 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v27 = *(struct _PRIVILEGE_SET **)(v13 + 8);
        v28 = *(_DWORD *)(v13 + 4) & 0x1F | (32 * v14);
        *(_QWORD *)(v13 + 8) = v19;
        *(_DWORD *)(v13 + 4) = v28;
        if ( v27 )
          CmSiFreeMemory(v27);
      }
      else if ( *(_DWORD *)(BugCheckParameter2 + 12) < 0x20u )
      {
        v8 = 0LL;
LABEL_31:
        v4 = a3;
        goto LABEL_11;
      }
    }
    v15 = *(_DWORD *)(v13 + 4);
    v32 = *a2 & (-1LL << (v15 & 0x1F));
    v16 = *(_QWORD *)(v13 + 8);
    v17 = (37
         * (BYTE6(v32)
          + 37
          * (BYTE5(v32)
           + 37
           * (BYTE4(v32)
            + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
         + HIBYTE(v32)) & ((v15 >> 5) - 1);
    *(_QWORD *)v8 = *(_QWORD *)(v16 + 8 * v17);
    *(_QWORD *)(v16 + 8 * v17) = v8;
    ++*(_DWORD *)v13;
    if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
      *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    goto LABEL_31;
  }
LABEL_11:
  if ( !a4 )
  {
    if ( v4 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    }
    else if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    }
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v8;
}
