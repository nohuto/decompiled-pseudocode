__int64 __fastcall ExDupHandleTable(__int64 a1, volatile __int64 *a2, unsigned int a3, _BYTE *a4, __int64 *a5)
{
  __int64 *v5; // r14
  int v6; // eax
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  int v12; // r8d
  _DWORD *v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // rcx
  unsigned __int64 i; // rax
  char HandleTableEntrySlow; // al
  int v18; // esi
  unsigned __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r9d
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // rax
  _DWORD *v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  char v34; // r12
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // edx
  _QWORD *v39; // r8
  unsigned __int64 v40; // rax
  __int64 HandleTable; // rax
  signed __int32 v42[8]; // [rsp+0h] [rbp-C8h] BYREF
  _DWORD *v43; // [rsp+40h] [rbp-88h]
  __int64 *v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+58h] [rbp-70h]
  __int64 v47; // [rsp+60h] [rbp-68h]
  __int64 v48; // [rsp+68h] [rbp-60h]
  __int64 v49; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  __int64 v51; // [rsp+D0h] [rbp+8h]
  unsigned int v53; // [rsp+E0h] [rbp+18h]
  unsigned int v55; // [rsp+F0h] [rbp+28h]

  v51 = a1;
  v5 = a5;
  v6 = *(_DWORD *)a2;
  v8 = *(unsigned int *)a2;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v38 = 1;
      if ( a3 <= 1 )
      {
LABEL_46:
        v40 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v40 < v8 )
        {
          v8 = v40 + 4;
LABEL_8:
          a1 = v51;
          goto LABEL_9;
        }
      }
      else
      {
        v39 = a4 + 8;
        while ( (*v39 & 3) == 0 && *v39 > *(_QWORD *)&a4[8 * v38 - 8] )
        {
          ++v38;
          ++v39;
          if ( v38 >= a3 )
            goto LABEL_46;
        }
      }
    }
    return 3221225485LL;
  }
  if ( v6 )
  {
LABEL_3:
    v10 = ExpLookupHandleTableEntry(a2, v8 - 1024);
    v12 = 255;
    v13 = (_DWORD *)(v10 + 4080);
    while ( (*v13 & 0x40000LL) == 0 )
    {
      v13 -= 4;
      if ( !--v12 )
      {
        v8 = v11;
        if ( v11 )
          goto LABEL_3;
        break;
      }
    }
    v5 = a5;
    goto LABEL_8;
  }
LABEL_9:
  if ( !v8 )
  {
    HandleTable = ExCreateHandleTable(a1, 1LL);
    *v5 = HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v14 = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
  *v5 = (__int64)v14;
  v15 = v14;
  if ( !v14 )
    return 3221225626LL;
  for ( i = *v14; i < v8; i = *v15 )
  {
    HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v15, 0LL);
    v15 = (unsigned int *)*v5;
    if ( !HandleTableEntrySlow )
    {
      ExpFreeHandleTable(v15);
      *v5 = 0LL;
      return 3221225626LL;
    }
  }
  *((_BYTE *)v15 + 44) |= 8u;
  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  v55 = 0;
  --CurrentThread->KernelApcDisable;
  v48 = *v5;
  v20 = (__int64 *)(v48 + 72);
  v44 = (__int64 *)(v48 + 72);
  do
  {
    v21 = ExpLookupHandleTableEntry(a2, v19);
    v22 = *v5;
    v45 = v21;
    v46 = ExpLookupHandleTableEntry(v22, v19);
    v26 = 1LL;
    v27 = (_DWORD *)(v25 + 16);
    v49 = v46 - v25;
    v53 = 1;
    v43 = (_DWORD *)(v25 + 16);
    while ( v18 >= 0 )
    {
      v28 = v19 + (unsigned int)(4 * v26);
      if ( !a3 || *(_QWORD *)&a4[8 * v23] == v28 )
      {
        if ( (*v27 & 0x40000) == 0 )
          goto LABEL_20;
        v47 = 16LL * v53;
        if ( !ExLockHandleTableEntry(v24, (_QWORD *)(v25 + v47)) )
        {
          v27 = v43;
LABEL_20:
          if ( a3 )
            v18 = -1073741811;
          goto LABEL_22;
        }
        if ( (*v43 & 0x40000) != 0 )
        {
          v36 = ExpDuplicateSingleHandle(v51, v28, (_DWORD)a2, (int)v47 + (int)v45, *v5, v47 + v46, a4 != 0LL);
          v18 = v36;
          if ( v36 >= 0 )
          {
            if ( v36 != 263 )
            {
              v37 = *v5;
              ++*(_DWORD *)(*v5 + 88);
              if ( a3 && v55 < a3 - 1 )
                ++v55;
              if ( *(_QWORD *)(v37 + 96) )
                ExpUpdateDebugInfo(v37, KeGetCurrentThread(), v28, 1LL);
              v27 = v43;
              v20 = v44;
              goto LABEL_23;
            }
            v18 = 0;
          }
          v27 = v43;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + v45), 1uLL);
          _InterlockedOr(v42, 0);
          if ( *((_QWORD *)a2 + 6) )
            ExfUnblockPushLock(a2 + 6, 0LL);
          v27 = v43;
          if ( a3 )
            v18 = -1073741811;
        }
      }
LABEL_22:
      v29 = 16LL * v53 + v46;
      *v44 = v29;
      v20 = (__int64 *)(v29 + 8);
      v44 = (__int64 *)(v29 + 8);
      *(_QWORD *)(v48 + 80) = v29;
      *(_QWORD *)((char *)v27 + v49) = 0LL;
LABEL_23:
      v27 += 4;
      v23 = v55;
      v26 = v53 + 1;
      v24 = (__int64)a2;
      v25 = v45;
      v53 = v26;
      v43 = v27;
      if ( (unsigned int)v26 >= 0x100 )
        goto LABEL_24;
    }
    memset((void *)(16 * v26 + v46), 0, 4096 - 16 * v26);
LABEL_24:
    v19 += 1024LL;
  }
  while ( v19 < v8 );
  v30 = (__int64)CurrentThread;
  *v20 = 0LL;
  v31 = *v5;
  if ( v18 < 0 )
  {
    *(_BYTE *)(v31 + 44) |= 4u;
    *(_QWORD *)(v31 + 32) = v31 + 24;
    *(_QWORD *)(v31 + 24) = v31 + 24;
  }
  else
  {
    *(_DWORD *)(v31 + 92) = *(_DWORD *)(v31 + 88);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
    v32 = (_QWORD *)qword_140D54EC8;
    v33 = (_QWORD *)(*v5 + 24);
    if ( *(__int64 **)qword_140D54EC8 != &HandleTableListHead )
      __fastfail(3u);
    *v33 = &HandleTableListHead;
    v33[1] = v32;
    *v32 = v33;
    qword_140D54EC8 = (__int64)v33;
    v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v34 & 2) != 0 && (v34 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v18 = 0;
  }
  KeLeaveCriticalRegionThread(v30);
  return (unsigned int)v18;
}
