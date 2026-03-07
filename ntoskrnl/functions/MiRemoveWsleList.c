__int64 __fastcall MiRemoveWsleList(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  char v5; // al
  int *v6; // r8
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r12d
  _BYTE *v16; // r14
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rbp
  int v19; // edi
  char v20; // cl
  unsigned __int64 v21; // r15
  __int64 v22; // r15
  unsigned __int64 v23; // rdi
  __int64 v24; // r14
  volatile LONG *v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // r11
  unsigned __int64 v28; // rsi
  _BYTE *v29; // rdx
  __int64 v30; // rax
  _BYTE *v31; // rbx
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int8 v34; // bp
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r11
  __int64 *v38; // r8
  __int64 v39; // rdx
  unsigned __int8 v40; // al
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 *v45; // r14
  int *v46; // r8
  volatile LONG *v47; // rbp
  _BYTE *v48; // rsi
  unsigned __int64 *v49; // rbx
  unsigned __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 IsDriverPage; // rax
  __int64 v54; // rax
  __int64 **v55; // rcx
  __int64 v56; // rbp
  __int64 **v57; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v59; // r8
  __int64 v60; // rax
  int v61; // [rsp+20h] [rbp-98h]
  int v62; // [rsp+28h] [rbp-90h]
  __int64 v63; // [rsp+30h] [rbp-88h]
  __int64 v64; // [rsp+38h] [rbp-80h]
  __int64 v65; // [rsp+40h] [rbp-78h] BYREF
  __int64 v66; // [rsp+48h] [rbp-70h]
  int *v67; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  _BYTE *v72; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v74; // [rsp+D8h] [rbp+20h]

  v5 = *(_BYTE *)(a1 + 184) & 7;
  v6 = &dword_140C69E80;
  v9 = a1;
  v66 = 0LL;
  v10 = 0LL;
  v64 = 0LL;
  if ( v5 != 2 )
    v6 = 0LL;
  v65 = 0LL;
  v67 = v6;
  v11 = 0LL;
  v61 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( !a4 )
    return v10;
  v16 = &a3[-a2];
  v17 = (_QWORD *)(a2 + 24);
  v18 = a4;
  v19 = 0;
  do
  {
    v20 = *((_BYTE *)v17 + (_QWORD)v16 - 23);
    if ( (v20 & 1) != 0 )
    {
      v21 = *v17;
      ++v12;
      if ( *v17 < 0xFFFFF68000000000uLL || v21 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v15 = 2;
        v10 = ((v21 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      }
      else
      {
        v15 = 1;
      }
      if ( (v20 & 2) != 0 )
      {
        v64 = ++v13;
        if ( v15 == 2 )
          v65 = ++v11;
      }
      if ( (*(_BYTE *)(v9 + 184) & 7) == 4 )
      {
        if ( PsNtosImageBase
          && (v21 < PsNtosImageEnd && v21 >= PsNtosImageBase || v21 < PsHalImageEnd && v21 >= PsHalImageBase) )
        {
          v61 = ++v14;
        }
        else if ( (unsigned int)MiGetSystemRegionType(v21) == 12 )
        {
          IsDriverPage = MiIsDriverPage(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
          v9 = a1;
          v11 = v65;
          v13 = v64;
          v14 = v61;
          if ( IsDriverPage )
            ++v19;
        }
        else
        {
          v9 = a1;
          v11 = v65;
          v13 = v64;
          v14 = v61;
        }
      }
    }
    ++v17;
    v63 = v10;
    v22 = v10;
    --v18;
  }
  while ( v18 );
  v62 = v19;
  v23 = a4;
  if ( !v15 )
    return v10;
  v24 = a1;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v25 = &dword_140C69E40;
  else
    v25 = (volatile LONG *)(a1 + 256);
  ExAcquireSpinLockSharedAtDpcLevel(v25);
  if ( v64 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), -v64);
    if ( v65 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), -v65);
  }
  if ( v61 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C655D0, -v61);
  v26 = -v12;
  v74 = v26;
  if ( v62 )
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 1, -v62);
  v27 = 0LL;
  v28 = 0LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), v26);
  v29 = &a3[-a2];
  v30 = a2 - (_QWORD)a3 + 24;
  v31 = a3;
  while ( 1 )
  {
    if ( (v31[v30 - 23 + (_QWORD)v29] & 1) == 0 )
      goto LABEL_38;
    v32 = *(_QWORD *)&v31[v30];
    if ( v15 != 1 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v24 + 128));
      v33 = v27 + 1;
      if ( !v67 )
        v33 = v27;
      v66 = v33;
      if ( (*v31 & 0xF) == 8 )
        goto LABEL_37;
      v66 = v33;
LABEL_26:
      v34 = *v31 & 0xF;
      if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v35 = (v32 >> 18) & 0x3FFFFFF8;
        v36 = *(_QWORD *)(v35 - 0x904C0000000LL);
        v37 = v35 - 0x904C0000000LL;
        if ( (unsigned __int64)(v35 - 0x904C0000000LL) < 0xFFFFF6FB7DBED000uLL
          || v37 > 0xFFFFF6FB7DBED7F8uLL
          || (MiFlags & 0x600000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          v74 = v26;
          v63 = v22;
        }
        else
        {
          v63 = v22;
          v74 = v26;
          if ( (v36 & 1) != 0 )
          {
            v63 = v22;
            v74 = v26;
            if ( (v36 & 0x20) == 0 || (v63 = v22, v74 = v26, (v36 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v59 = v36 | 0x20;
                v60 = *((_QWORD *)&Flink->Flink + ((v37 >> 3) & 0x1FF));
                if ( (v60 & 0x20) == 0 )
                  v59 = *(_QWORD *)(v35 - 0x904C0000000LL);
                v36 = v59;
                if ( (v60 & 0x42) != 0 )
                  v36 = v59 | 0x42;
              }
            }
          }
        }
        v65 = v36;
        v38 = (__int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v65) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL);
        v39 = *v38;
        v40 = ((unsigned __int64)*v38 >> 14) & 7;
        if ( (((unsigned __int64)*v38 >> 4) & 0x3FF) != 0 )
        {
          if ( v34 == v40 )
          {
            *v38 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v38 >> 4) & 0x3FF) - 1))) & 0x3FF0;
          }
          else if ( v34 > v40 )
          {
            *v38 = v39 ^ ((unsigned int)v39 ^ (v34 << 14)) & 0x1C000 | 0x3FF0;
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8LL * v34 + 40), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v34 == 7 )
      {
        v41 = *(_QWORD *)(v24 + 96);
        v42 = *(unsigned __int16 *)(v24 + 174);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v43 = *(_QWORD *)(qword_140C67048 + 8 * v42);
        v44 = *(_QWORD *)(v43 + 16920);
        if ( v41 < *(_QWORD *)(v44 + 56) )
        {
          v45 = (__int64 *)(v24 + 24);
          if ( *v45 && *(__int64 **)(v43 + 16936) != v45 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &LockHandle);
            if ( *(_BYTE *)(v44 + 53) || (v54 = *v45) == 0 )
            {
              *(_BYTE *)(v44 + 54) = 1;
              KxReleaseQueuedSpinLock(&LockHandle);
            }
            else
            {
              if ( *(__int64 **)(v54 + 8) != v45
                || (v55 = (__int64 **)v45[1], *v55 != v45)
                || (*v55 = (__int64 *)v54,
                    v56 = v43 + 16928,
                    *(_QWORD *)(v54 + 8) = v55,
                    v57 = *(__int64 ***)(v56 + 8),
                    *v57 != (__int64 *)v56) )
              {
                __fastfail(3u);
              }
              *v45 = v56;
              v45[1] = (__int64)v57;
              *v57 = v45;
              *(_QWORD *)(v56 + 8) = v45;
              KxReleaseQueuedSpinLock(&LockHandle);
            }
          }
          v24 = a1;
        }
      }
      goto LABEL_37;
    }
    if ( (*(_BYTE *)(v24 + 184) & 7) == 0 )
      goto LABEL_26;
LABEL_37:
    v29 = &a3[-a2];
LABEL_38:
    ++v28;
    v31 += 8;
    if ( v28 >= v23 )
      break;
    v26 = v74;
    v30 = a2 - (_QWORD)a3 + 24;
    v27 = v66;
  }
  v46 = v67;
  if ( v67 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 1, v74);
    if ( v66 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 2, -v66);
  }
  if ( (*(_BYTE *)(v24 + 184) & 7) == 2 )
  {
    v47 = &dword_140C69E40;
    v48 = &a3[-a2];
    v72 = &a3[-a2];
  }
  else
  {
    v47 = (volatile LONG *)(v24 + 256);
    v72 = v29;
    v48 = v29;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v47);
  v49 = (unsigned __int64 *)(a2 + 24);
  do
  {
    if ( (v48[(_QWORD)v49 - 23] & 1) != 0 )
    {
      v50 = *v49;
      if ( v15 == 2 )
      {
        v51 = (v50 >> 9) & 0x7FFFFFFFF8LL;
        if ( (*(_BYTE *)(v51 - 0x98000000000LL) & 1) != 0 )
          MiWriteWsle(v51, *v49);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
        MiLogRemoveWsleEvent(v50, *(_BYTE *)(v24 + 184) & 7);
      v48 = v72;
    }
    ++v49;
    --v23;
  }
  while ( v23 );
  return v63;
}
