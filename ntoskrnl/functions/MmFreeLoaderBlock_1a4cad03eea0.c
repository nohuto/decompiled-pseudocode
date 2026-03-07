void MmFreeLoaderBlock()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  unsigned int v2; // ebp
  __int64 v3; // rax
  int v4; // r14d
  unsigned __int64 i; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  _QWORD **v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *Pool; // rax
  signed __int64 v12; // rbx
  char *v13; // rdi
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  unsigned __int64 j; // r14
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rax
  unsigned __int64 k; // rsi
  unsigned int v25; // eax
  _QWORD **v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbp
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rsi
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // di
  __int64 v41; // rbx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // r13
  bool v45; // cf
  _QWORD *v46; // rcx
  _QWORD *m; // rbx
  __int64 v48; // r8
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdi
  bool v54; // zf
  unsigned __int8 v55; // [rsp+20h] [rbp-158h]
  unsigned int v56; // [rsp+30h] [rbp-148h]
  __int64 v57; // [rsp+38h] [rbp-140h]
  __int64 v58; // [rsp+40h] [rbp-138h]
  __int64 v59; // [rsp+48h] [rbp-130h]
  _QWORD *v60; // [rsp+50h] [rbp-128h]
  unsigned __int64 *v61; // [rsp+58h] [rbp-120h]
  __int64 v62; // [rsp+60h] [rbp-118h] BYREF
  char *AnyMultiplexedVm; // [rsp+68h] [rbp-110h]
  __int64 v64; // [rsp+70h] [rbp-108h]
  __int64 v65; // [rsp+78h] [rbp-100h]
  _QWORD v66[24]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v66, 0, 0xB8uLL);
  v0 = KeLoaderBlock_0 + 352;
  v1 = 0LL;
  v65 = KeLoaderBlock_0 + 352;
  v59 = 0LL;
  v2 = 0;
  v57 = 0LL;
  v3 = *(_QWORD *)(KeLoaderBlock_0 + 360);
  v4 = 2113664;
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_34;
    i = v3 ^ (v0 | 1);
  }
  else
  {
    i = *(_QWORD *)(KeLoaderBlock_0 + 360);
  }
  if ( i )
  {
    do
    {
      v6 = *(_QWORD *)(i + 40);
      if ( v6 )
      {
        v7 = *(_DWORD *)(i + 24);
        if ( v7 == 19 )
        {
          v1 += v6;
        }
        else if ( v7 <= 0x15 && _bittest(&v4, v7) )
        {
          ++v2;
        }
      }
      v8 = *(_QWORD ***)(i + 8);
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = *(_QWORD *)(i + 8); v10; v10 = (_QWORD *)*v10 )
          i = (unsigned __int64)v10;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
    }
    while ( i );
    v56 = v2;
    if ( v1 )
    {
      Pool = MiAllocatePool(64, 8 * v1 + 8, 0x624D6D4Du);
      v60 = Pool;
      v12 = (signed __int64)Pool;
      if ( Pool )
      {
        *Pool = v1;
        v66[3] = 0LL;
        v61 = Pool + 1;
        LODWORD(v66[1]) = 20;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v13 = AnyMultiplexedVm;
        v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v15 = *(_QWORD *)(v0 + 8);
        v55 = v14;
        if ( (v15 & 1) != 0 )
        {
          if ( v15 == 1 )
            goto LABEL_32;
          j = v15 ^ (v0 | 1);
        }
        else
        {
          j = *(_QWORD *)(v0 + 8);
        }
        if ( !j )
          goto LABEL_31;
        while ( *(_DWORD *)(j + 24) != 19 || !*(_QWORD *)(j + 40) )
        {
LABEL_22:
          v17 = *(_QWORD ***)(j + 8);
          v18 = j;
          if ( v17 )
          {
            v19 = *v17;
            for ( j = *(_QWORD *)(j + 8); v19; v19 = (_QWORD *)*v19 )
              j = (unsigned __int64)v19;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v18 )
                break;
              v18 = j;
            }
          }
          if ( !j )
          {
            v0 = v65;
            v12 = (signed __int64)v60;
            v2 = v56;
            v14 = v55;
LABEL_31:
            v4 = 2113664;
LABEL_32:
            MiUnlockWorkingSetShared((__int64)v13, v14);
            if ( _InterlockedCompareExchange64(&qword_140C69558, v12, 0LL) )
            {
              qword_140C69558 = v12;
              MmFreeBootRegistry();
            }
            goto LABEL_34;
          }
        }
        v58 = 0LL;
        v28 = 0LL;
        v29 = *(_QWORD *)(j + 32);
        v30 = 0LL;
        v64 = 0LL;
        v31 = 48 * v29 - 0x220000000000LL;
        v32 = v29;
        while ( 1 )
        {
          v33 = *(_QWORD *)(v31 + 8) | 0x8000000000000000uLL;
          v34 = (__int64)((v33 << 25) - v30) >> 16;
          *v61++ = v34;
          v35 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v28 != v35 )
          {
            if ( v28 )
            {
              MiFlushTbList((int *)v66);
              MiFreeRegistryPageRange(v59, v57);
              MiUnlockPageTableInternal((__int64)v13, v28);
            }
            v28 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            MiLockPageTableInternal((__int64)v13, v35, 0);
          }
          v62 = MI_READ_PTE_LOCK_FREE(v33);
          MiMarkPfnTradable(v31, 0);
          MiGetWsleContents(v36, v34);
          MiWriteWsle(v37, v34);
          v38 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62);
          v39 = MiSwizzleInvalidPte(v38 & 0xFFFFFFFFFF000LL | 0x880);
          v40 = v39;
          v62 = v39;
          v41 = v39;
          if ( MiPteInShadowRange(v33) )
          {
            if ( MiPteHasShadow() )
            {
              v43 = 1;
              if ( !HIBYTE(word_140C6697C) )
              {
                v54 = (v40 & 1) == 0;
                goto LABEL_81;
              }
            }
            else
            {
              v43 = 0;
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v54 = (v40 & 1) == 0;
LABEL_81:
                if ( !v54 )
                  v41 |= 0x8000000000000000uLL;
              }
            }
          }
          else
          {
            v43 = 0;
          }
          *(_QWORD *)v33 = v41;
          if ( v43 )
            MiWritePteShadow(v33, v41, v42);
          if ( HIDWORD(v66[1]) )
          {
            v44 = v57 + 1;
          }
          else
          {
            v44 = 1LL;
            v59 = v32 + v58;
          }
          v57 = v44;
          MiInsertTbFlushEntry((__int64)v66, v34, 1LL, 0);
          v31 += 48LL;
          v13 = AnyMultiplexedVm;
          v45 = (unsigned __int64)++v58 < *(_QWORD *)(j + 40);
          v30 = v64;
          if ( !v45 )
          {
            MiFlushTbList((int *)v66);
            MiFreeRegistryPageRange(v59, v44);
            MiUnlockPageTableInternal((__int64)v13, v28);
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_34:
  v20 = MiAllocatePool(64, 16LL * v2, 0x624D6D4Du);
  v21 = v20;
  if ( v20 )
  {
    v22 = v20;
    v23 = *(_QWORD *)(v0 + 8);
    if ( (v23 & 1) != 0 )
    {
      if ( v23 == 1 )
      {
LABEL_70:
        ExFreePoolWithTag(v21, 0);
        return;
      }
      k = v23 ^ (v0 | 1);
    }
    else
    {
      k = *(_QWORD *)(v0 + 8);
    }
    if ( k )
    {
      do
      {
        v25 = *(_DWORD *)(k + 24);
        if ( v25 <= 0x15 && _bittest(&v4, v25) && *(_QWORD *)(k + 40) )
        {
          *v22 = *(_QWORD *)(k + 32);
          v22[1] = *(_QWORD *)(k + 40);
          v22 += 2;
        }
        v26 = *(_QWORD ***)(k + 8);
        v27 = k;
        if ( v26 )
        {
          v46 = *v26;
          for ( k = *(_QWORD *)(k + 8); v46; v46 = (_QWORD *)*v46 )
            k = (unsigned __int64)v46;
        }
        else
        {
          while ( 1 )
          {
            k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !k || *(_QWORD *)k == v27 )
              break;
            v27 = k;
          }
        }
      }
      while ( k );
      if ( v22 != v21 )
      {
        for ( m = v22 - 2; m >= v21; m -= 2 )
        {
          v48 = 48LL * *m;
          v49 = m[1];
          v50 = (_QWORD *)(v48 - 0x21FFFFFFFFF8LL);
          v51 = *(_QWORD *)(v48 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v49 )
          {
            v50 += 6;
            v51 += 8LL;
            if ( (*v50 | 0x8000000000000000uLL) != v51 )
            {
              v52 = *(_QWORD *)(v48 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
              v53 = (__int64)(v51 - v52) >> 3;
              MiDeleteBootRange(v52, v53, v48);
              m[1] -= v53;
              *m += v53;
              m += 2;
              if ( v53 )
                goto LABEL_69;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *m - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, m[1], v48);
LABEL_69:
          ;
        }
      }
    }
    goto LABEL_70;
  }
}
