__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  int v8; // ebp
  __int64 v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  int v17; // ebp
  unsigned __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r8
  _BYTE *v21; // rbx
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  int v25; // ebx
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  char v33; // cl
  bool v34; // zf
  __int64 v35; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v37; // rax
  struct _LIST_ENTRY *v38; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  int v42; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v46; // [rsp+90h] [rbp+18h]

  v6 = a2;
  v46 = 0;
  v8 = 0;
  v10 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = (__int64)(a3 << 25) >> 16;
  v12 = 0xFFFFF6FB7DBED000uLL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v13 = 0;
    if ( !a4 )
    {
      v17 = a6;
      goto LABEL_23;
    }
    goto LABEL_3;
  }
  if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
    || *(_WORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v13 = 1;
  if ( a4 )
  {
    if ( v11 >= 0xFFFFF68000000000uLL )
    {
LABEL_49:
      if ( v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v8 = 1;
        MiLockPageTableInternal(a1, a3, 0);
      }
LABEL_4:
      if ( !v13 )
        goto LABEL_5;
      goto LABEL_55;
    }
LABEL_3:
    if ( v11 < 0xFFFFF68000000000uLL )
      goto LABEL_4;
    goto LABEL_49;
  }
LABEL_55:
  v42 = 0;
  v46 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v42);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( ((*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v6 + 40) < 0)
    && ((*(_BYTE *)(v10 + 184) & 7) == 0 || *(_WORD *)(v6 + 32) <= 1u) )
  {
LABEL_5:
    if ( !a4 )
    {
      v17 = a6;
      goto LABEL_20;
    }
    if ( v8 )
    {
      v35 = MI_READ_PTE_LOCK_FREE(a3);
      MiUnlockNestedPageTableWritePte(
        v10,
        a3,
        v35 & 0xCFFFFFFFFFFFFFDFuLL,
        0LL,
        v42,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock);
      goto LABEL_11;
    }
    v14 = *(_QWORD *)a3;
    v15 = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v37 = *((_QWORD *)&Flink->Flink + ((a3 >> 3) & 0x1FF));
        if ( (v37 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v37 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
    }
    if ( a3 >= 0xFFFFF6FB7DBED000uLL
      && a3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v38 )
      {
        v39 = *((_QWORD *)&v38->Flink + ((a3 >> 3) & 0x1FF));
        if ( (v39 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v39 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
    }
    v16 = (v15 & 0xF0FFFFFFFFFFFFDFuLL | v14 & 0xF00000000000000LL) ^ ((v15 & 0xF0FFFFFFFFFFFFDFuLL | v14 & 0xF00000000000000LL) ^ v14) & 0x7000000000000000LL;
    if ( MiPteInShadowRange(a3) )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C6697C) && (v16 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
        *(_QWORD *)a3 = v16;
        MiWritePteShadow(a3, v16, v40);
LABEL_11:
        v17 = 1;
        v18 = v11;
        v19 = 1LL;
        if ( *(_DWORD *)a4 != 1 )
        {
          v33 = *(_BYTE *)(a4 + 4);
          if ( (v33 & 8) == 0 && v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
            *(_BYTE *)(a4 + 4) = v33 | 8;
        }
        LODWORD(v20) = *(_DWORD *)(a4 + 12);
        v21 = (_BYTE *)(a4 + 4);
        if ( !(_DWORD)v20 || (*v21 & 4) != 0 )
        {
          v22 = (unsigned int)(v20 - 1);
          v27 = (_BYTE *)(a4 + 4);
          if ( !(_DWORD)v20 )
            goto LABEL_37;
          goto LABEL_34;
        }
        v22 = (unsigned int)(v20 - 1);
        v23 = *(_QWORD *)(a4 + 8 * v22 + 24);
        if ( (v23 & 0xC00) == 0 )
        {
          v24 = *(_QWORD *)(a4 + 8 * v22 + 24) & 0x3FFLL;
          if ( (v23 & 0xFFFFFFFFFFFFF000uLL) + ((v24 + 1) << 12) != v11 )
          {
            v27 = (_BYTE *)(a4 + 4);
LABEL_34:
            if ( (*v27 & 4) == 0 )
            {
              v28 = *(_QWORD *)(a4 + 8 * v22 + 24);
              if ( (v28 & 0xC00) == 0 && (v28 & 0xFFFFFFFFFFFFF000uLL) == v11 + 4096 )
              {
                v41 = *(_QWORD *)(a4 + 8 * v22 + 24) & 0x3FFLL;
                if ( v41 + 1 >= v41 && v41 + 1 <= 0x3FF )
                {
                  ++*(_QWORD *)(a4 + 16);
                  *(_QWORD *)(a4 + 8 * v22 + 24) = ((unsigned __int16)(v28 - 4096) ^ (unsigned __int16)(v28 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v28 - 4096);
                  goto LABEL_19;
                }
              }
            }
LABEL_37:
            if ( (unsigned int)v20 < *(_DWORD *)(a4 + 8) )
            {
              while ( 1 )
              {
                v29 = (unsigned __int64)(v19 - 1) > 0x3FF ? 1024LL : v19;
                v30 = v18 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
                v19 -= v29;
                v18 += v29 << 12;
                *(_QWORD *)(a4 + 8LL * (unsigned int)v20 + 24) = v30;
                v31 = *(_DWORD *)(a4 + 12);
                *(_QWORD *)(a4 + 16) += v29;
                v32 = v31 + 1;
                LODWORD(v20) = v32;
                *(_DWORD *)(a4 + 12) = v32;
                if ( v32 == *(_DWORD *)(a4 + 8) && (*v21 & 4) == 0 )
                {
                  qsort((void *)(a4 + 24), v32, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                  MiCompressTbFlushList(a4);
                  v20 = *(unsigned int *)(a4 + 12);
                  if ( (_DWORD)v20 == *(_DWORD *)(a4 + 8) )
                    break;
                }
                if ( !v19 )
                  goto LABEL_19;
              }
              v6 = a2;
              v34 = v19 == 0;
              v10 = a1;
              if ( !v34 )
              {
                *(_BYTE *)(a4 + 5) = 1;
                *(_QWORD *)(a4 + 16) = v20;
              }
              goto LABEL_20;
            }
            *(_BYTE *)(a4 + 5) = 1;
            goto LABEL_19;
          }
          if ( v24 + 1 >= v24 && v24 + 1 <= 0x3FF )
          {
            ++*(_QWORD *)(a4 + 16);
            *(_QWORD *)(a4 + 8 * v22 + 24) = ((unsigned __int16)v23 ^ (unsigned __int16)(v23 + 1)) & 0x3FF ^ v23;
LABEL_19:
            v6 = a2;
            v10 = a1;
LABEL_20:
            if ( v46 )
              _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v12 = 0xFFFFF6FB7DBED000uLL;
LABEL_23:
            if ( v17 )
            {
              if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
                v25 = HIBYTE(*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
              else
                v25 = (*(_DWORD *)(48
                                 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                 - 0x220000000000LL) >> 1) & 7;
              if ( !a5 )
                goto LABEL_29;
              if ( v25 != 7 )
              {
                MiLogPageAccess(v10, a3);
LABEL_29:
                if ( !v25 )
                {
                  LOBYTE(v12) = 1;
                  MiSetVaAgeList(v10, v11, 1u, v12);
                }
              }
            }
            return 1LL;
          }
        }
        v27 = (_BYTE *)(a4 + 4);
        goto LABEL_34;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v16 & 1) != 0 )
      {
        v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v16;
    goto LABEL_11;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
    MiUnlockPageTableInternal(v10, a3);
  return 0LL;
}
