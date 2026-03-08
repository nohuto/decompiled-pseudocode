/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000F010
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C007706C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0077224 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z @ 0x1C0077A30 (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1C008243C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  __int64 v2; // rax
  char v3; // r12
  ULONG v6; // edi
  CTokenQueue **i; // r14
  char *v8; // rsi
  CTokenManager **v9; // rdi
  CTokenManager *v10; // rax
  char *v11; // rax
  CTokenManager *v12; // rax
  CTokenManager *v13; // rcx
  struct _LIST_ENTRY **v14; // rdi
  struct _LIST_ENTRY *v15; // rsi
  struct _LIST_ENTRY *v16; // rax
  char v17; // r12
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *j; // rcx
  __int64 v21; // rax
  char *v22; // rcx
  __int64 v23; // rax
  struct ICompositionFrame **v24; // rcx
  CTokenManager *v25; // rax
  CTokenManager ***v26; // rax
  char *v27; // rcx
  char **v28; // rcx
  char *v29; // rcx
  struct ICompositionFrame *v30; // rdx
  __int64 v31; // r8
  struct ICompositionFrame **v32; // r9
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *v36; // rsi
  struct FlipManagerObject *v37; // r13
  struct _LIST_ENTRY *v38; // r14
  struct _LIST_ENTRY *v39; // rax
  struct _LIST_ENTRY *v40; // rax
  struct FlipManagerObject *v41; // rsi
  struct _LIST_ENTRY *v42; // rax
  char *v43; // [rsp+20h] [rbp-30h] BYREF
  CTokenManager **v44; // [rsp+28h] [rbp-28h]
  struct _LIST_ENTRY v45; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v46; // [rsp+40h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v47; // [rsp+48h] [rbp-8h]
  struct FlipManagerObject *v48; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 24);
  v3 = 0;
  if ( v2 && (*(_QWORD *)(v2 + 2088) != v2 + 16 || *(_DWORD *)(v2 + 32)) )
  {
    *((_QWORD *)a2 + 14) = v2;
    *(_BYTE *)(v2 + 2108) = 1;
    *(_QWORD *)(v2 + 2088) = v2 + 16;
    *((_BYTE *)a2 + 120) = 1;
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_DWORD *)this + 22) )
  {
    v6 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 200)) - 1;
    for ( i = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), v6);
          i;
          i = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), v6) )
    {
      v3 |= CTokenQueue::ReleaseTokensToFrame(i[1], a2);
      if ( *((_DWORD *)i[1] + 6) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(this, (struct CTokenManager::TokenQueueTableEntry *)i);
      --v6;
    }
  }
  else
  {
    v3 = 1;
  }
  v8 = (char *)this + 272;
  v9 = (CTokenManager **)*((_QWORD *)this + 34);
  v44 = (CTokenManager **)&v43;
  v43 = (char *)&v43;
  if ( v9[1] != (CTokenManager *)((char *)this + 272) )
    goto LABEL_44;
  v10 = *v9;
  if ( *((CTokenManager ***)*v9 + 1) != v9 )
    goto LABEL_44;
  *(_QWORD *)v8 = v10;
  *((_QWORD *)v10 + 1) = v8;
  if ( v9 != (CTokenManager **)v8 )
  {
    while ( 1 )
    {
      v23 = (__int64)*(v9 - 1);
      LOBYTE(v48) = 0;
      if ( (*(int (__fastcall **)(CTokenManager **, struct ICompositionFrame *, struct FlipManagerObject **))(v23 + 32))(
             v9 - 1,
             a2,
             &v48) < 0 )
      {
        (*((void (__fastcall **)(CTokenManager **))*(v9 - 1) + 7))(v9 - 1);
        ObfDereferenceObject(v9 - 6);
      }
      else if ( (_BYTE)v48 )
      {
        v24 = (struct ICompositionFrame **)*((_QWORD *)a2 + 22);
        if ( *v24 != (struct ICompositionFrame *)((char *)a2 + 168) )
          break;
        *v9 = (struct ICompositionFrame *)((char *)a2 + 168);
        v9[1] = (CTokenManager *)v24;
        *v24 = (struct ICompositionFrame *)v9;
        *((_QWORD *)a2 + 22) = v9;
      }
      else
      {
        v26 = (CTokenManager ***)v44;
        if ( *v44 != (CTokenManager *)&v43 )
          break;
        v9[1] = (CTokenManager *)v44;
        *v9 = (CTokenManager *)&v43;
        *v26 = v9;
        v44 = v9;
      }
      v9 = *(CTokenManager ***)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
        break;
      v25 = *v9;
      if ( *((CTokenManager ***)*v9 + 1) != v9 )
        break;
      *(_QWORD *)v8 = v25;
      *((_QWORD *)v25 + 1) = v8;
      if ( v9 == (CTokenManager **)v8 )
        goto LABEL_9;
    }
LABEL_44:
    __fastfail(3u);
  }
LABEL_9:
  v11 = v43;
  if ( v43 != (char *)&v43 )
  {
    v27 = *(char **)v43;
    if ( *((char ***)v43 + 1) != &v43 || *((char **)v27 + 1) != v43 )
      goto LABEL_44;
    v43 = *(char **)v43;
    for ( *((_QWORD *)v27 + 1) = &v43; v11 != (char *)&v43; *((_QWORD *)v29 + 1) = &v43 )
    {
      v28 = (char **)*((_QWORD *)this + 35);
      if ( *v28 != v8 )
        goto LABEL_44;
      *((_QWORD *)v11 + 1) = v28;
      *(_QWORD *)v11 = v8;
      *v28 = v11;
      *((_QWORD *)this + 35) = v11;
      v11 = v43;
      if ( *((char ***)v43 + 1) != &v43 )
        goto LABEL_44;
      v29 = *(char **)v43;
      if ( *(char **)(*(_QWORD *)v43 + 8LL) != v43 )
        goto LABEL_44;
      v43 = *(char **)v43;
    }
  }
  v12 = (CTokenManager *)((char *)this + 304);
  v13 = (CTokenManager *)*((_QWORD *)this + 38);
  if ( v13 != (CTokenManager *)((char *)this + 304) )
  {
    do
    {
      v30 = *(struct ICompositionFrame **)v12;
      v13 = *(CTokenManager **)v13;
      if ( *(CTokenManager **)(*(_QWORD *)v12 + 8LL) != v12 )
        goto LABEL_44;
      v31 = *(_QWORD *)v30;
      if ( *(struct ICompositionFrame **)(*(_QWORD *)v30 + 8LL) != v30 )
        goto LABEL_44;
      *(_QWORD *)v12 = v31;
      *(_QWORD *)(v31 + 8) = v12;
      v32 = (struct ICompositionFrame **)*((_QWORD *)a2 + 20);
      if ( *v32 != (struct ICompositionFrame *)((char *)a2 + 152) )
        goto LABEL_44;
      *(_QWORD *)v30 = (char *)a2 + 152;
      *((_QWORD *)v30 + 1) = v32;
      *v32 = v30;
      *((_QWORD *)a2 + 20) = v30;
    }
    while ( v13 != v12 );
  }
  v47 = (struct _LIST_ENTRY *)&v46;
  v14 = (struct _LIST_ENTRY **)((char *)this + 288);
  v46 = (struct _LIST_ENTRY *)&v46;
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == (struct _LIST_ENTRY *)v14 )
      break;
    v48 = 0LL;
    FlipManagerTokenObject::GetFlipManagerObjectNoRef((FlipManagerTokenObject *)&v15[-3], &v48);
    v45.Blink = &v45;
    v45.Flink = &v45;
    Flink = v15->Flink;
    if ( v15->Flink->Blink != v15 )
      goto LABEL_44;
    Blink = v15->Blink;
    if ( Blink->Flink != v15 )
      goto LABEL_44;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v35 = v45.Blink;
    if ( v45.Blink->Flink != &v45 )
      goto LABEL_44;
    v15->Blink = v45.Blink;
    v15->Flink = &v45;
    v35->Flink = v15;
    v45.Blink = v15;
    v36 = *v14;
    if ( *v14 != (struct _LIST_ENTRY *)v14 )
    {
      v37 = v48;
      do
      {
        v48 = 0LL;
        v38 = v36;
        FlipManagerTokenObject::GetFlipManagerObjectNoRef((FlipManagerTokenObject *)&v36[-3], &v48);
        v36 = v36->Flink;
        if ( v37 == v48 )
        {
          if ( v36->Blink != v38 )
            goto LABEL_44;
          v39 = v38->Blink;
          if ( v39->Flink != v38 )
            goto LABEL_44;
          v39->Flink = v36;
          v36->Blink = v39;
          v40 = v45.Blink;
          if ( v45.Blink->Flink != &v45 )
            goto LABEL_44;
          v38->Blink = v45.Blink;
          v38->Flink = &v45;
          v40->Flink = v38;
          v45.Blink = v38;
        }
      }
      while ( v36 != (struct _LIST_ENTRY *)v14 );
    }
    v48 = 0LL;
    if ( (int)FlipManagerTokenObject::GetFlipManagerObjectNoRef((FlipManagerTokenObject *)&v45.Flink[-3], &v48) >= 0 )
    {
      v41 = v48;
      if ( (int)CPushLock::AcquireLockExclusive((struct FlipManagerObject *)((char *)v48 + 40)) >= 0 )
      {
        CFlipManager::ConsumerDwmApplyUpdates((struct FlipManagerObject *)((char *)v41 + 32), &v45, a2);
        CPushLock::ReleaseLock((struct FlipManagerObject *)((char *)v41 + 40));
      }
    }
    if ( v45.Flink != &v45 )
    {
      v47->Flink = v45.Flink;
      v45.Flink->Blink = v47;
      v45.Blink->Flink = (struct _LIST_ENTRY *)&v46;
      v47 = v45.Blink;
    }
  }
  v16 = v46;
  if ( v46 != (struct _LIST_ENTRY *)&v46 )
  {
    *v14 = v46;
    v16->Blink = (struct _LIST_ENTRY *)v14;
    v42 = v47;
    *((_QWORD *)this + 37) = v47;
    v42->Flink = (struct _LIST_ENTRY *)v14;
  }
  v17 = (*v14 != (struct _LIST_ENTRY *)v14) | v3;
  v18 = (*(__int64 (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  ExAcquirePushLockExclusiveEx((char *)this + 152, 0LL);
  *((_BYTE *)this + 160) = 1;
  v19 = (_QWORD *)((char *)this + 136);
  *((_QWORD *)this + 16) = v18;
  if ( (_QWORD *)*v19 != v19 )
  {
    for ( j = (_QWORD *)*((_QWORD *)this + 18); j != v19; j = (_QWORD *)j[1] )
    {
      if ( j )
        v21 = (__int64)(j + 10);
      else
        v21 = 88LL;
      *(_QWORD *)v21 = v18;
    }
  }
  v22 = (char *)this + 152;
  if ( *((_BYTE *)this + 160) )
    ExReleasePushLockExclusiveEx(v22, 0LL);
  else
    ExReleasePushLockSharedEx(v22, 0LL);
  if ( !v17 )
    ZwClearEvent(*((HANDLE *)this + 8));
}
