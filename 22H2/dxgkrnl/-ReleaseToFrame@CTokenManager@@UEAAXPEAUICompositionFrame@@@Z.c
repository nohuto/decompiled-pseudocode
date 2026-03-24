/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0013DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011930 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001C44C (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C001DF6C (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     _CTokenManager::ReleaseFlipManagerTokensToFrame_::_2_::TokentokenEventTracker::_TokentokenEventTracker @ 0x1C0063904 (_CTokenManager--ReleaseFlipManagerTokensToFrame_--_2_--TokentokenEventTracker--_TokentokenEventT.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0063D6C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0063DC8 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0063EB8 (-PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0068890 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C006A3A4 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AE.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C006A714 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v3; // r12
  __int64 v4; // rcx
  bool v6; // r8
  ULONG v7; // ebx
  struct CTokenManager::TokenQueueTableEntry *i; // r15
  char *v9; // rbx
  CTokenManager **v10; // rsi
  CTokenManager *v11; // rax
  char *v12; // rax
  CTokenManager *v13; // rsi
  CTokenManager *v14; // r15
  char v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  _QWORD *j; // rcx
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // rax
  struct ICompositionFrame **v22; // rcx
  CTokenManager *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  _QWORD *v26; // rcx
  bool v27; // zf
  CompositionSurfaceObject **v28; // rcx
  struct ICompositionFrame **v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  CTokenManager ***v33; // rax
  char *v34; // rcx
  char **v35; // rcx
  char *v36; // rcx
  struct FlipManagerObject *v37; // r13
  CTokenManager *v38; // r13
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v43; // rbx
  int IsEndpointConnected; // eax
  char v45; // dl
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v49; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct ICompositionFrame **v51; // rcx
  struct FlipManagerObject *v52; // rbx
  CTokenManager *v53; // rax
  CTokenManager **v54; // rcx
  char *v55; // [rsp+30h] [rbp-19h] BYREF
  CTokenManager **v56; // [rsp+38h] [rbp-11h]
  struct _LIST_ENTRY v57; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v58; // [rsp+50h] [rbp+7h] BYREF
  int v59; // [rsp+58h] [rbp+Fh]
  struct _LIST_ENTRY *v60; // [rsp+B0h] [rbp+67h] BYREF
  char v61; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v62; // [rsp+C0h] [rbp+77h] BYREF
  struct FlipManagerObject *p_Blink; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    v6 = 0;
    if ( *(_QWORD *)(v4 + 2088) == v4 + 16 )
      v6 = *(_DWORD *)(v4 + 32) == 0;
    if ( !v6 )
    {
      *((_QWORD *)a2 + 13) = v4;
      *(_QWORD *)(v4 + 2088) = v4 + 16;
      *(_BYTE *)(v4 + 2108) = 1;
      *((_BYTE *)a2 + 112) = 1;
      *((_QWORD *)this + 23) = 0LL;
    }
  }
  if ( *((_DWORD *)this + 20) )
  {
    v7 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 192)) - 1;
    for ( i = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                              v7);
          i;
          i = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                              v7) )
    {
      v24 = *((_QWORD *)i + 1);
      v62 = v24;
      v61 = 0;
      if ( *(_QWORD *)v24 != v24 )
      {
        v25 = *(_QWORD *)(v24 + 8);
        if ( *(_QWORD *)v25 != v24 )
          goto LABEL_64;
        v26 = *(_QWORD **)(v25 + 8);
        if ( *v26 != v25 )
          goto LABEL_64;
        *(_QWORD *)(v24 + 8) = v26;
        *v26 = v24;
        if ( v25 == v24 )
          goto LABEL_48;
        while ( 1 )
        {
          v27 = *(_QWORD *)(v24 + 16) == 0LL;
          v28 = (CompositionSurfaceObject **)(v25 - 8);
          p_Blink = (struct FlipManagerObject *)(v25 - 8);
          LOBYTE(v60) = 0;
          if ( !v27 )
          {
            CompositionSurfaceObject::SetSyncRefreshCount(v28[4], 0);
            v28 = (CompositionSurfaceObject **)(v25 - 8);
            if ( *(_QWORD *)(v62 + 16) == v25 - 8 )
              *(_QWORD *)(v62 + 16) = 0LL;
          }
          if ( (*((int (__fastcall **)(CompositionSurfaceObject **, struct ICompositionFrame *, struct _LIST_ENTRY **))*v28
                + 4))(
                 v28,
                 a2,
                 &v60) < 0 )
          {
            v37 = p_Blink;
            (*(void (__fastcall **)(struct FlipManagerObject *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
            (**(void (__fastcall ***)(struct FlipManagerObject *, __int64))v37)(v37, 1LL);
          }
          else
          {
            if ( !(_BYTE)v60 )
            {
              if ( *(_DWORD *)(v25 + 16) == 2 )
                v61 = 1;
              v31 = v62;
              v32 = *(_QWORD **)(v62 + 8);
              if ( *v32 == v62 )
              {
                *(_QWORD *)v25 = v62;
                *(_QWORD *)(v25 + 8) = v32;
                *v32 = v25;
                *(_QWORD *)(v31 + 8) = v25;
                goto LABEL_48;
              }
LABEL_64:
              __fastfail(3u);
            }
            v29 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
            if ( *v29 != (struct ICompositionFrame *)((char *)a2 + 144) )
              goto LABEL_64;
            *(_QWORD *)v25 = (char *)a2 + 144;
            *(_QWORD *)(v25 + 8) = v29;
            *v29 = (struct ICompositionFrame *)v25;
            *((_QWORD *)a2 + 19) = v25;
          }
          v24 = v62;
          v25 = *(_QWORD *)(v62 + 8);
          if ( *(_QWORD *)v25 != v62 )
            goto LABEL_64;
          v30 = *(_QWORD **)(v25 + 8);
          if ( *v30 != v25 )
            goto LABEL_64;
          *(_QWORD *)(v62 + 8) = v30;
          *v30 = v24;
          if ( v25 == v24 )
            goto LABEL_48;
        }
      }
      ++*(_DWORD *)(v24 + 24);
LABEL_48:
      v3 |= v61;
      if ( *(_DWORD *)(*((_QWORD *)i + 1) + 24LL) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(this, i);
      --v7;
    }
  }
  else
  {
    v3 = 1;
  }
  v9 = (char *)this + 264;
  v10 = (CTokenManager **)*((_QWORD *)this + 33);
  v56 = (CTokenManager **)&v55;
  v55 = (char *)&v55;
  if ( v10[1] != (CTokenManager *)((char *)this + 264) )
    goto LABEL_64;
  v11 = *v10;
  if ( *((CTokenManager ***)*v10 + 1) != v10 )
    goto LABEL_64;
  *(_QWORD *)v9 = v11;
  for ( *((_QWORD *)v11 + 1) = v9; v10 != (CTokenManager **)v9; *((_QWORD *)v23 + 1) = v9 )
  {
    v21 = (__int64)*(v10 - 1);
    LOBYTE(v60) = 0;
    if ( (*(int (__fastcall **)(CTokenManager **, struct ICompositionFrame *, struct _LIST_ENTRY **))(v21 + 32))(
           v10 - 1,
           a2,
           &v60) < 0 )
    {
      (*((void (__fastcall **)(CTokenManager **))*(v10 - 1) + 7))(v10 - 1);
      ObfDereferenceObject(v10 - 6);
    }
    else if ( (_BYTE)v60 )
    {
      v22 = (struct ICompositionFrame **)*((_QWORD *)a2 + 21);
      if ( *v22 != (struct ICompositionFrame *)((char *)a2 + 160) )
        goto LABEL_64;
      *v10 = (struct ICompositionFrame *)((char *)a2 + 160);
      v10[1] = (CTokenManager *)v22;
      *v22 = (struct ICompositionFrame *)v10;
      *((_QWORD *)a2 + 21) = v10;
    }
    else
    {
      v33 = (CTokenManager ***)v56;
      if ( *v56 != (CTokenManager *)&v55 )
        goto LABEL_64;
      v10[1] = (CTokenManager *)v56;
      *v10 = (CTokenManager *)&v55;
      *v33 = v10;
      v56 = v10;
    }
    v10 = *(CTokenManager ***)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_64;
    v23 = *v10;
    if ( *((CTokenManager ***)*v10 + 1) != v10 )
      goto LABEL_64;
    *(_QWORD *)v9 = v23;
  }
  v12 = v55;
  if ( v55 != (char *)&v55 )
  {
    v34 = *(char **)v55;
    if ( *((char ***)v55 + 1) != &v55 || *((char **)v34 + 1) != v55 )
      goto LABEL_64;
    v55 = *(char **)v55;
    for ( *((_QWORD *)v34 + 1) = &v55; v12 != (char *)&v55; *((_QWORD *)v36 + 1) = &v55 )
    {
      v35 = (char **)*((_QWORD *)this + 34);
      if ( *v35 != v9 )
        goto LABEL_64;
      *((_QWORD *)v12 + 1) = v35;
      *(_QWORD *)v12 = v9;
      *v35 = v12;
      *((_QWORD *)this + 34) = v12;
      v12 = v55;
      if ( *((char ***)v55 + 1) != &v55 )
        goto LABEL_64;
      v36 = *(char **)v55;
      if ( *(char **)(*(_QWORD *)v55 + 8LL) != v55 )
        goto LABEL_64;
      v55 = *(char **)v55;
    }
  }
  v13 = (CTokenManager *)((char *)this + 280);
  v14 = (CTokenManager *)*((_QWORD *)this + 35);
  if ( v14 != (CTokenManager *)((char *)this + 280) )
  {
    do
    {
      v38 = v14;
      v60 = 0LL;
      v14 = *(CTokenManager **)v14;
      FlipManagerTokenObject::GetPresentId((CTokenManager *)((char *)v38 - 96), (unsigned __int64 *)&v60);
      v39 = (unsigned __int64)v60;
      v58 = (unsigned __int64)v60;
      v59 = -1;
      Global = DXGGLOBAL::GetGlobal(v41, v40);
      (*(void (__fastcall **)(unsigned __int64))(*((_QWORD *)Global + 38048) + 88LL))(v39);
      v43 = (_QWORD *)((char *)v38 - 96);
      p_Blink = 0LL;
      LOBYTE(v60) = 0;
      if ( (int)FlipManagerTokenObject::GetFlipManagerObjectNoRef((CTokenManager *)((char *)v38 - 96), &p_Blink) < 0 )
        goto LABEL_91;
      IsEndpointConnected = FlipManagerObject::IsEndpointConnected(p_Blink, 1, (bool *)&v60);
      if ( IsEndpointConnected < 0 )
        goto LABEL_91;
      v45 = (char)v60;
      if ( (_BYTE)v60 )
      {
        IsEndpointConnected = FlipManagerObject::IsDwmBound(p_Blink, (bool *)&v60);
        v45 = (char)v60;
      }
      if ( IsEndpointConnected >= 0 && v45 )
      {
        v60 = 0LL;
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v43 + 9)) >= 0 )
        {
          v60 = (struct _LIST_ENTRY *)v43[17];
          CPushLock::ReleaseLock((CPushLock *)(v43 + 9));
        }
        v46 = *((_QWORD *)a2 + 5);
        p_Blink = *(struct FlipManagerObject **)((char *)a2 + 52);
        LODWORD(v62) = 0;
        v57.Blink = &v57;
        v57.Flink = &v57;
        if ( (int)FlipManagerApplyDwmConsumerUpdates(
                    v46,
                    (const struct tagCompositionRate *)&p_Blink,
                    (CTokenManager *)((char *)v38 - 96),
                    &v57,
                    (enum FlipPresentProcessResult *)&v62) < 0 )
          goto LABEL_94;
        v59 = v62;
        if ( (_DWORD)v62 == 1 )
          goto LABEL_94;
        CTokenManager::PostFlipManagerProcessSummary(v47, (char *)v38 - 96, v60);
        if ( !(_DWORD)v62 )
        {
          while ( 1 )
          {
            Flink = v57.Flink;
            if ( v57.Flink == &v57 )
              break;
            if ( v57.Flink->Blink != &v57 )
              goto LABEL_64;
            v49 = v57.Flink->Flink;
            if ( v57.Flink->Flink->Blink != v57.Flink )
              goto LABEL_64;
            v57.Flink = v57.Flink->Flink;
            v49->Blink = &v57;
            v61 = 0;
            Flink[6].Blink = v60;
            Blink = Flink[-1].Blink;
            p_Blink = (struct FlipManagerObject *)&Flink[-1].Blink;
            if ( ((int (__fastcall *)(struct _LIST_ENTRY **, struct ICompositionFrame *, char *))Blink[2].Flink)(
                   &Flink[-1].Blink,
                   a2,
                   &v61) < 0 )
            {
              v52 = p_Blink;
              (*(void (__fastcall **)(struct FlipManagerObject *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
              (**(void (__fastcall ***)(struct FlipManagerObject *, __int64))v52)(v52, 1LL);
            }
            else
            {
              v51 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
              if ( *v51 != (struct ICompositionFrame *)((char *)a2 + 144) )
                goto LABEL_64;
              Flink->Flink = (struct _LIST_ENTRY *)((char *)a2 + 144);
              Flink->Blink = (struct _LIST_ENTRY *)v51;
              *v51 = (struct ICompositionFrame *)Flink;
              *((_QWORD *)a2 + 19) = Flink;
            }
          }
          v43 = (_QWORD *)((char *)v38 - 96);
        }
        v53 = *(CTokenManager **)v38;
        if ( *(CTokenManager **)(*(_QWORD *)v38 + 8LL) != v38 )
          goto LABEL_64;
        v54 = (CTokenManager **)*((_QWORD *)v38 + 1);
        if ( *v54 != v38 )
          goto LABEL_64;
      }
      else
      {
LABEL_91:
        v53 = *(CTokenManager **)v38;
        if ( *(CTokenManager **)(*(_QWORD *)v38 + 8LL) != v38 )
          goto LABEL_64;
        v54 = (CTokenManager **)*((_QWORD *)v38 + 1);
        if ( *v54 != v38 )
          goto LABEL_64;
      }
      *v54 = v53;
      *((_QWORD *)v53 + 1) = v54;
      ObfDereferenceObject(v43);
LABEL_94:
      CTokenManager::ReleaseFlipManagerTokensToFrame_::_2_::TokentokenEventTracker::_TokentokenEventTracker(&v58);
    }
    while ( v14 != v13 );
  }
  v15 = (*(_QWORD *)v13 != (_QWORD)v13) | v3;
  v16 = (*(__int64 (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  v17 = (_QWORD *)((char *)this + 128);
  *((_QWORD *)this + 15) = v16;
  if ( (_QWORD *)*v17 != v17 )
  {
    for ( j = (_QWORD *)*((_QWORD *)this + 17); j != v17; j = (_QWORD *)j[1] )
    {
      if ( j )
        v19 = (__int64)(j + 9);
      else
        v19 = 80LL;
      *(_QWORD *)v19 = v16;
    }
  }
  v20 = (char *)this + 144;
  if ( *((_BYTE *)this + 152) )
    ExReleasePushLockExclusiveEx(v20, 0LL);
  else
    ExReleasePushLockSharedEx(v20, 0LL);
  if ( !v15 )
    ZwClearEvent(*((HANDLE *)this + 7));
}
