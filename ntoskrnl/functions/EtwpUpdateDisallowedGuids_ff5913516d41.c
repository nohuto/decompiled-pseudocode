__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  size_t v7; // r14
  unsigned int v8; // ebx
  void *Pool2; // rax
  unsigned __int64 v13; // r15
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rsi
  char *v18; // r13
  char *v19; // r12
  char *v20; // rdi
  int v21; // eax
  PVOID **v22; // rax
  PVOID *v23; // rcx
  PVOID **v24; // r14
  PVOID *v25; // rax
  PVOID *v26; // rax
  PVOID **v27; // rsi
  PVOID *v28; // rax
  PVOID *v29; // rax
  PVOID **v30; // rcx
  PVOID **v31; // rax
  PVOID *v32; // rcx
  volatile signed __int64 *v33; // rdi
  void *v34; // r14
  PVOID *v35; // rax
  _QWORD *v36; // rsi
  void *v37; // rdi
  _DWORD *v38; // rcx
  void **v39; // rax
  PVOID *v40; // rax
  _QWORD *v41; // rsi
  _QWORD *v42; // rax
  _QWORD *v43; // rdi
  _QWORD *v44; // rcx
  PVOID *v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  PVOID *v50; // rax
  _QWORD *v51; // rsi
  _DWORD **v52; // rdi
  _DWORD *v53; // rcx
  void **v54; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v57; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v58; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = a2;
  v8 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v58 = &v57;
  v57 = &v57;
  if ( a2 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 16LL * a2, 1685550149LL);
    v13 = (unsigned __int64)Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
      goto LABEL_55;
    }
    memmove(Pool2, a3, 16 * v7);
    qsort((void *)v13, v7, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v14 = 0;
    if ( (_DWORD)v7 != 1 )
    {
      while ( 1 )
      {
        v15 = 16LL * v14;
        v16 = *(_QWORD *)(v15 + v13) - *(_QWORD *)(v15 + v13 + 16);
        if ( !v16 )
          v16 = *(_QWORD *)(v15 + v13 + 8) - *(_QWORD *)(v15 + v13 + 24);
        if ( !v16 )
          break;
        if ( ++v14 >= (int)v7 - 1 )
          goto LABEL_14;
      }
      ExFreePoolWithTag((PVOID)v13, 0);
      v8 = -1073741811;
      goto LABEL_55;
    }
  }
  else
  {
    v13 = 0LL;
  }
LABEL_14:
  Mutex = (struct _KMUTANT *)(a1 + 632);
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  if ( *(_WORD *)(a1 + 1064) )
  {
    v17 = *(char **)(a1 + 1072);
    v18 = &v17[16 * *(unsigned __int16 *)(a1 + 1064)];
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( (_WORD)v7 )
    v19 = (char *)(v13 + 16 * v7);
  else
    v19 = 0LL;
  v20 = (char *)(v13 & -(__int64)((_WORD)v7 != 0));
  if ( v17 >= v18 )
  {
LABEL_34:
    if ( v20 >= v19 )
    {
LABEL_45:
      v33 = (volatile signed __int64 *)(a1 + 688);
      ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
      *(_WORD *)(a1 + 1064) = v7;
      v34 = *(void **)(a1 + 1072);
      *(_QWORD *)(a1 + 1072) = v13;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v33);
      KeAbPostRelease((ULONG_PTR)v33);
      KeReleaseMutex((PRKMUTEX)(a1 + 632), 0);
      v35 = (PVOID *)P;
      v36 = P;
      while ( v35 != &P )
      {
        v37 = v36;
        v36 = (_QWORD *)*v36;
        EtwpNotifyDisallowedGuidChange(*((_DWORD **)v37 + 2), a7, 0);
        v38 = *(_DWORD **)v37;
        if ( *(void **)(*(_QWORD *)v37 + 8LL) != v37 )
          goto LABEL_70;
        v39 = (void **)*((_QWORD *)v37 + 1);
        if ( *v39 != v37 )
          goto LABEL_70;
        *v39 = v38;
        *((_QWORD *)v38 + 1) = v39;
        ExFreePoolWithTag(*((PVOID *)v37 + 2), 0);
        ExFreePoolWithTag(v37, 0);
        v35 = (PVOID *)P;
      }
      v50 = (PVOID *)v57;
      v51 = v57;
      while ( v50 != &v57 )
      {
        v52 = (_DWORD **)v51;
        v51 = (_QWORD *)*v51;
        EtwpNotifyDisallowedGuidChange(v52[2], a7, 1);
        v53 = *v52;
        if ( *((_DWORD ***)*v52 + 1) != v52 )
          goto LABEL_70;
        v54 = (void **)v52[1];
        if ( *v54 != v52 )
          goto LABEL_70;
        *v54 = v53;
        *((_QWORD *)v53 + 1) = v54;
        ExFreePoolWithTag(v52, 0);
        v50 = (PVOID *)v57;
      }
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      return v8;
    }
    while ( 1 )
    {
      v27 = (PVOID **)ExAllocatePool2(256LL, 24LL, 1953985605LL);
      if ( !v27 )
        break;
      v28 = (PVOID *)ExAllocatePool2(256LL, 16LL, 1953985605LL);
      if ( !v28 )
      {
        v30 = v27;
        goto LABEL_53;
      }
      *(_OWORD *)v28 = *(_OWORD *)v20;
      v27[2] = v28;
      v29 = p_P;
      if ( *p_P != &P )
        goto LABEL_70;
      v27[1] = p_P;
      *v27 = &P;
      v20 += 16;
      *v29 = v27;
      p_P = (PVOID *)v27;
      if ( v20 >= v19 )
        goto LABEL_45;
    }
  }
  else
  {
    while ( v20 < v19 )
    {
      v21 = memcmp(v17, v20, 0x10uLL);
      if ( v21 )
      {
        if ( v21 >= 0 )
        {
          v24 = (PVOID **)ExAllocatePool2(256LL, 24LL, 1953985605LL);
          if ( !v24 )
            goto LABEL_54;
          v25 = (PVOID *)ExAllocatePool2(256LL, 16LL, 1953985605LL);
          if ( !v25 )
          {
            v30 = v24;
LABEL_53:
            ExFreePoolWithTag(v30, 0);
            goto LABEL_54;
          }
          *(_OWORD *)v25 = *(_OWORD *)v20;
          v24[2] = v25;
          v26 = p_P;
          if ( *p_P != &P )
            goto LABEL_70;
          v24[1] = p_P;
          *v24 = &P;
          v20 += 16;
          *v26 = v24;
          p_P = (PVOID *)v24;
        }
        else
        {
          v22 = (PVOID **)ExAllocatePool2(256LL, 24LL, 1953985605LL);
          if ( !v22 )
            goto LABEL_54;
          v22[2] = (PVOID *)v17;
          v23 = v58;
          if ( *v58 != &v57 )
LABEL_70:
            __fastfail(3u);
          v22[1] = v58;
          *v22 = &v57;
          v17 += 16;
          *v23 = v22;
          v58 = (PVOID *)v22;
        }
      }
      else
      {
        v17 += 16;
        v20 += 16;
      }
      if ( v17 >= v18 )
      {
        LOWORD(v7) = a2;
        goto LABEL_34;
      }
    }
    while ( 1 )
    {
      v31 = (PVOID **)ExAllocatePool2(256LL, 24LL, 1953985605LL);
      if ( !v31 )
        break;
      v31[2] = (PVOID *)v17;
      v32 = v58;
      if ( *v58 != &v57 )
        goto LABEL_70;
      v31[1] = v58;
      *v31 = &v57;
      v17 += 16;
      *v32 = v31;
      v58 = (PVOID *)v31;
      if ( v17 >= v18 )
      {
        LOWORD(v7) = a2;
        goto LABEL_45;
      }
    }
  }
LABEL_54:
  v8 = -1073741670;
  KeReleaseMutex(Mutex, 0);
LABEL_55:
  v40 = (PVOID *)P;
  v41 = P;
  while ( v40 != &P )
  {
    v42 = (_QWORD *)*v41;
    v43 = v41;
    v41 = v42;
    if ( (_QWORD *)v42[1] != v43 )
      goto LABEL_70;
    v44 = (_QWORD *)v43[1];
    if ( (_QWORD *)*v44 != v43 )
      goto LABEL_70;
    *v44 = v42;
    v42[1] = v44;
    ExFreePoolWithTag((PVOID)v43[2], 0);
    ExFreePoolWithTag(v43, 0);
    v40 = (PVOID *)P;
  }
  v45 = (PVOID *)v57;
  v46 = v57;
  while ( v45 != &v57 )
  {
    v47 = *v46;
    v48 = v46;
    v46 = (_QWORD *)v47;
    if ( *(_QWORD **)(v47 + 8) != v48 )
      goto LABEL_70;
    v49 = (_QWORD *)v48[1];
    if ( (_QWORD *)*v49 != v48 )
      goto LABEL_70;
    *v49 = v47;
    *(_QWORD *)(v47 + 8) = v49;
    ExFreePoolWithTag(v48, 0);
    v45 = (PVOID *)v57;
  }
  return v8;
}
