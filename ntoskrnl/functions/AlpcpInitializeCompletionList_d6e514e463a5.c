__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int a5, int a6)
{
  size_t v6; // rbx
  char v8; // r15
  char v9; // r12
  void *v10; // rdi
  void *Pool2; // rax
  unsigned int v12; // ebx
  struct _MDL *Mdl; // rcx
  __int64 v14; // rcx
  PVOID v15; // rax
  char v16; // r13
  __int64 v17; // r15
  __int64 v18; // r10
  unsigned int v19; // ebx
  __int64 v20; // r11
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int HeaderSize; // eax
  char *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  char *CompletionPacketLookaside; // r13
  struct _MDL *v32; // rcx
  unsigned int v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+3Ch] [rbp-5Ch]
  int v36; // [rsp+40h] [rbp-58h]
  size_t v37; // [rsp+48h] [rbp-50h]
  char *v38; // [rsp+50h] [rbp-48h]

  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL
    || (a3 & 0xFFF) != 0
    || a3 - 0x4000 > 0x3FFFC000
    || (a5 & 0x55FFFFFF) != 0
    || !a4 )
  {
    v12 = -1073741811;
    goto LABEL_43;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 160LL, 1850305601LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xA0uLL);
    *((_QWORD *)v10 + 2) = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)v10 + 5) = a2;
    v37 = v6;
    v38 = &a2[v6];
    *((_QWORD *)v10 + 6) = &a2[v6];
    if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
    {
      v12 = -1073741800;
      goto LABEL_43;
    }
    v9 = 1;
    Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
    *((_QWORD *)v10 + 4) = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
      v14 = *((_QWORD *)v10 + 4);
      if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
        v15 = *(PVOID *)(v14 + 24);
      else
        v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000000u);
      *((_QWORD *)v10 + 8) = v15;
      if ( !v15 )
      {
        v12 = -1073741670;
        v16 = 1;
        goto LABEL_44;
      }
      memset(v15, 0, v6);
      v17 = *((_QWORD *)v10 + 8);
      *(_QWORD *)v17 = 0xDEADBEEFBAADF00DuLL;
      *(_QWORD *)(v17 + 328) = 0xBAADF00DDEADBEEFuLL;
      v18 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
      v34 = v18;
      v19 = v6 - v18 - 4096;
      v20 = ((v19 >> 9) + 4095) & 0xFFFFF000;
      v35 = v20;
      v36 = v19 - v20;
      *((_QWORD *)v10 + 9) = v37;
      *((_QWORD *)v10 + 10) = v17;
      v21 = *((_QWORD *)v10 + 8) + 4096LL;
      *((_QWORD *)v10 + 11) = v21;
      *((_QWORD *)v10 + 12) = (unsigned int)v18;
      *((_QWORD *)v10 + 13) = v18 + v21;
      *((_QWORD *)v10 + 14) = (unsigned int)v20;
      *((_DWORD *)v10 + 34) = (v19 >> 6) - ((unsigned int)v20 >> 6);
      *((_QWORD *)v10 + 15) = v18 + v21 + v20;
      *((_QWORD *)v10 + 16) = v19 - (unsigned int)v20;
      *((_DWORD *)v10 + 36) = a4;
      *((_QWORD *)v10 + 5) = a2;
      *((_QWORD *)v10 + 6) = v38;
      *((_QWORD *)v10 + 7) = &a2[v20 + 4096 + v18];
      *((_DWORD *)v10 + 37) = a5;
      if ( a6 )
      {
        v22 = ((a5 >> 31) & 0xC) + 24;
        if ( (a5 & 0x40000000) == 0 )
          v22 = ((a5 >> 31) & 0xC) + 8;
        v23 = v22 + 20;
        if ( (a5 & 0x20000000) == 0 )
          v23 = v22;
        v24 = v23 + 16;
        if ( (a5 & 0x10000000) == 0 )
          v24 = v23;
        v25 = v24 + 24;
        if ( (a5 & 0x8000000) == 0 )
          v25 = v24;
        HeaderSize = v25 + 8;
        if ( (a5 & 0x2000000) == 0 )
          HeaderSize = v25;
      }
      else
      {
        HeaderSize = AlpcGetHeaderSize(a5);
        LODWORD(v18) = v34;
        LODWORD(v20) = v35;
      }
      *((_DWORD *)v10 + 38) = HeaderSize;
      *(_DWORD *)(v17 + 8) = a3;
      *(_DWORD *)(v17 + 12) = 4096;
      *(_DWORD *)(v17 + 16) = v18;
      *(_DWORD *)(v17 + 20) = v18 + 4096;
      *(_DWORD *)(v17 + 24) = v20;
      *(_DWORD *)(v17 + 28) = v20 + v18 + 4096;
      *(_DWORD *)(v17 + 32) = v36;
      *(_QWORD *)(v17 + 64) |= 0xFFFFFFuLL;
      *(_QWORD *)(v17 + 64) |= 0xFFFFFF000000uLL;
      *(_QWORD *)(v17 + 64) &= 0xFFFFFFFFFFFFuLL;
      *(_DWORD *)(v17 + 36) = *((_DWORD *)v10 + 37);
      *(_DWORD *)(v17 + 40) = *((_DWORD *)v10 + 38);
      v27 = (char *)*((_QWORD *)v10 + 11);
      v28 = *((_QWORD *)v10 + 12);
      v29 = (unsigned __int64)(v28 + 3) >> 2;
      if ( v27 > &v27[v28] )
        v29 = 0LL;
      if ( v29 )
        memset(v27, -1, 4 * v29);
      ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
      v8 = 1;
      if ( *(_QWORD *)(a1 + 360) )
      {
        v12 = -1073740006;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
        {
          v30 = *(_QWORD *)(a1 + 32);
          if ( v30 )
          {
            CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v34 >> 3, v30, *(_QWORD *)(a1 + 40));
            if ( !CompletionPacketLookaside )
            {
              v12 = -1073741670;
              goto LABEL_34;
            }
            AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
            *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
          }
          *(_QWORD *)(a1 + 360) = v10;
          v10 = 0LL;
          *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
          v12 = 0;
          goto LABEL_34;
        }
        v12 = -1073740032;
      }
LABEL_34:
      v16 = 1;
      goto LABEL_44;
    }
  }
  v12 = -1073741670;
LABEL_43:
  v16 = 0;
LABEL_44:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v16 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v32 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v32 )
      IoFreeMdl(v32);
    if ( v9 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v12;
}
