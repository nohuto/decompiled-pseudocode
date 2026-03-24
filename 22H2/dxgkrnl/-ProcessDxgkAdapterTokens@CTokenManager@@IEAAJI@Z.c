/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0003CB0
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0003A70 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000F1B0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0012F04 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00170E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C00184CC (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001BDD0 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001C120 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C748 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C810 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z @ 0x1C001C958 (-Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001CB5C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C00639D0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0100460 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r12
  unsigned int v3; // r15d
  char *v4; // rax
  unsigned int v5; // esi
  CTokenManager *v6; // r14
  struct CLegacyTokenBuffer **v7; // rbx
  int v8; // edi
  _QWORD *v9; // rcx
  struct CLegacyTokenBuffer *v10; // rax
  __int64 v11; // rdx
  struct CLegacyTokenBuffer *v12; // rbx
  struct CLegacyTokenBuffer::TokenBlock *v13; // rax
  char *v14; // r13
  int PresentHistoryInternal; // eax
  char v16; // r8
  unsigned int *v17; // r12
  int v18; // edx
  unsigned int v19; // r15d
  int v20; // ebx
  unsigned int v21; // esi
  unsigned int v22; // eax
  void *v23; // r14
  _QWORD **v24; // rbx
  NTSTATUS v25; // eax
  _QWORD **v26; // rsi
  int v27; // edi
  int v28; // esi
  _QWORD **v29; // rcx
  CTokenManager *v30; // rcx
  char *v31; // rax
  CTokenManager **v32; // rdx
  _QWORD *v33; // rdi
  __int64 v34; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v36; // rax
  struct DXGGLOBAL *v37; // rax
  void *v38; // r13
  unsigned __int64 v39; // r15
  __int64 **v40; // rbx
  int v41; // esi
  unsigned int v42; // eax
  PVOID v43; // r14
  bool v44; // si
  __int64 **v45; // r15
  int v46; // r12d
  _QWORD *PoolWithTag; // rax
  _QWORD *v48; // rdi
  unsigned __int64 v49; // rax
  unsigned int *v50; // rdx
  unsigned int *v51; // rdi
  struct CTokenQueue *v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rax
  _QWORD *inserted; // rdi
  __int64 *v56; // rdi
  __int64 **v57; // r14
  __int64 *v58; // rax
  __int64 *v59; // rbx
  __int64 *v60; // rax
  char v61; // si
  __int64 *v62; // rcx
  void *v63; // rcx
  __int64 *v64; // rcx
  char v65; // di
  __int64 v66; // rax
  void *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  void *v70; // rcx
  char v72; // [rsp+30h] [rbp-D0h]
  bool v73; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 NewElement; // [rsp+32h] [rbp-CEh] BYREF
  char v75; // [rsp+33h] [rbp-CDh]
  bool v76; // [rsp+34h] [rbp-CCh] BYREF
  int v77; // [rsp+38h] [rbp-C8h]
  int v78; // [rsp+3Ch] [rbp-C4h]
  unsigned int v79; // [rsp+40h] [rbp-C0h]
  CTokenManager *v80; // [rsp+48h] [rbp-B8h]
  unsigned int v81; // [rsp+50h] [rbp-B0h]
  int v82; // [rsp+54h] [rbp-ACh]
  LONG PreviousState[2]; // [rsp+58h] [rbp-A8h] BYREF
  LONG v84[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v85; // [rsp+68h] [rbp-98h]
  LONG v86; // [rsp+6Ch] [rbp-94h] BYREF
  int v87; // [rsp+70h] [rbp-90h]
  struct CLegacyTokenBuffer::TokenBlock *v88; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PVOID v90; // [rsp+88h] [rbp-78h] BYREF
  struct CTokenQueue *v91; // [rsp+90h] [rbp-70h] BYREF
  char *v92; // [rsp+98h] [rbp-68h]
  _DWORD v93[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-58h]
  _BYTE *v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h]
  _QWORD Buffer[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE Src[2048]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = 1;
  v81 = a2;
  v3 = 640;
  v72 = 1;
  v82 = 640;
  v4 = (char *)this + 88;
  v5 = a2;
  v80 = this;
  v6 = this;
  v7 = (struct CLegacyTokenBuffer **)((char *)this + 184);
  while ( 2 )
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v8 = 0;
    *((_QWORD *)v6 + 12) = KeGetCurrentThread();
    if ( *v7 )
      goto LABEL_9;
    v9 = (_QWORD *)((char *)v6 + 160);
    v10 = (struct CLegacyTokenBuffer *)*((_QWORD *)v6 + 20);
    if ( v10 == (CTokenManager *)((char *)v6 + 160) )
    {
      v8 = CLegacyTokenBuffer::Create(v7);
LABEL_9:
      if ( v8 < 0 )
        goto LABEL_19;
      goto LABEL_10;
    }
    if ( *((_QWORD **)v10 + 1) != v9
      || (v11 = *(_QWORD *)v10, *(struct CLegacyTokenBuffer **)(*(_QWORD *)v10 + 8LL) != v10) )
    {
      __fastfail(3u);
    }
    *v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    --*((_DWORD *)v6 + 44);
    *v7 = v10;
LABEL_10:
    v12 = *v7;
    v8 = 0;
    if ( v3 > *((_DWORD *)v12 + 526) )
    {
      v88 = 0LL;
      v8 = CLegacyTokenBuffer::TokenBlock::Create((struct CLegacyTokenBuffer *)((char *)v12 + 16), &v88);
      if ( v8 >= 0 )
      {
        v13 = v88;
        *((_QWORD *)v12 + 261) = v88;
        *((_QWORD *)v12 + 262) = (char *)v13 + 20;
        *((_DWORD *)v12 + 526) = 2048;
      }
    }
    v14 = (char *)*((_QWORD *)v12 + 262);
    v92 = v14;
    if ( v8 < 0 )
      goto LABEL_18;
    v93[1] = *((_DWORD *)v12 + 526);
    v94 = 0LL;
    v95 = Src;
    v96 = 0LL;
    v93[0] = v5;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal(v93, 0LL);
    v87 = PresentHistoryInternal;
    v8 = PresentHistoryInternal;
    if ( PresentHistoryInternal )
    {
      if ( PresentHistoryInternal == -1073741789 )
      {
        v3 = 640;
        v7 = (struct CLegacyTokenBuffer **)((char *)v6 + 184);
        if ( (unsigned int)v94 > 0x280 )
          v3 = v94;
        v8 = 0;
        v82 = v3;
        goto LABEL_19;
      }
      if ( PresentHistoryInternal != 261 )
      {
        v2 = 0;
        v72 = 0;
LABEL_18:
        v7 = (struct CLegacyTokenBuffer **)((char *)v6 + 184);
        goto LABEL_19;
      }
    }
    else
    {
      v72 = 0;
    }
    v17 = (unsigned int *)Src;
    v18 = 0;
    *(_QWORD *)PreviousState = Src;
    v19 = 0;
    v77 = 0;
    v20 = 0;
    v85 = 0;
    v21 = 0;
    v78 = 0;
    v79 = 0;
    if ( !(_DWORD)v96 )
      goto LABEL_144;
    do
    {
      v22 = *v17;
      if ( *v17 == 7 )
      {
        v23 = (void *)*((_QWORD *)v17 + 2);
        if ( !v23 )
          goto LABEL_142;
        v24 = 0LL;
        Object = 0LL;
        v25 = ObReferenceObjectByHandle(v23, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
        v26 = (_QWORD **)Object;
        v27 = v25;
        if ( v25 >= 0 )
        {
          if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
          {
            if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v26[2] + 16LL))(v26[2]) == 2 )
            {
              v24 = v26;
              goto LABEL_36;
            }
            v27 = -1073741788;
          }
          else
          {
            v27 = -1073741816;
          }
          ObfDereferenceObject(v26);
        }
LABEL_36:
        if ( v27 < 0 )
          goto LABEL_55;
        v28 = 0;
        if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v24[9])(v24 + 9) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v24 + 10, 0LL);
          if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v24[9])(v24 + 9) )
          {
LABEL_41:
            if ( v28 < 0 )
              goto LABEL_54;
            if ( *((_DWORD *)v24 + 16) == 1 )
              ((void (__fastcall *)(_QWORD **))v24[5][3])(v24 + 5);
            else
              v28 = -1073741823;
            v29 = v24 + 10;
            if ( KeGetCurrentThread() == (struct _KTHREAD *)v24[11] )
            {
              v24[11] = 0LL;
              ExReleasePushLockExclusiveEx(v29, 0LL);
            }
            else
            {
              ExReleasePushLockSharedEx(v29, 0LL);
            }
            KeLeaveCriticalRegion();
            if ( v28 < 0 )
            {
LABEL_54:
              ObfDereferenceObject(v24);
            }
            else
            {
              v30 = (CTokenManager *)(v24 + 6);
              v31 = (char *)v80 + 264;
              v32 = (CTokenManager **)*((_QWORD *)v80 + 34);
              if ( *v32 != (CTokenManager *)((char *)v80 + 264) )
                goto LABEL_148;
              *(_QWORD *)v30 = v31;
              v24[7] = v32;
              *v32 = v30;
              *((_QWORD *)v31 + 1) = v30;
              v33 = v24[15];
              v24[15] = 0LL;
              if ( v33 )
              {
                if ( !DXGGLOBAL::m_pGlobal )
                {
                  v34 = WdLogNewEntry5_WdAssertion(v30, v32);
                  *(_QWORD *)(v34 + 24) = 2238LL;
                  WdLogEvent5_WdAssertion(v34);
                }
                (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 32LL))(v33, 1LL);
              }
            }
LABEL_55:
            NtClose(v23);
LABEL_56:
            v20 = v78;
            v21 = v79;
LABEL_57:
            v18 = v77;
            goto LABEL_142;
          }
          CPushLock::ReleaseLock((CPushLock *)(v24 + 9));
        }
        v28 = -1073741816;
        goto LABEL_41;
      }
      switch ( v22 )
      {
        case 8u:
          Global = DXGGLOBAL::GetGlobal();
          (*(void (**)(void))(*((_QWORD *)Global + 38048) + 144LL))();
          v36 = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v36 + 38048) + 8LL))(*((_QWORD *)v17 + 2));
          v37 = DXGGLOBAL::GetGlobal();
          (*(void (**)(void))(*((_QWORD *)v37 + 38048) + 184LL))();
          v18 = v77;
          break;
        case 2u:
          if ( (v17[15] & 0x2000) != 0 && (v17[15] & 0xC000) == 0x4000 )
          {
            CTokenManager::CompleteIndendentFlipToken(
              v6,
              *((_QWORD *)v17 + 1),
              (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v17 + 4),
              v81);
            v18 = v77;
            v78 = ++v20;
            break;
          }
          v38 = (void *)*((_QWORD *)v17 + 8);
          v39 = *((_QWORD *)v17 + 1);
          v40 = 0LL;
          v90 = 0LL;
          *(_QWORD *)v84 = v39;
          v75 = 0;
          v41 = CompositionSurfaceObject::ResolveHandle(v38, 2u, v16, (struct CompositionSurfaceObject **)&v90);
          if ( v41 < 0 )
          {
LABEL_82:
            if ( v41 < 0 )
              goto LABEL_56;
            if ( !((unsigned __int8 (__fastcall *)(__int64 **))(*v40)[18])(v40)
              || ((unsigned __int8 (__fastcall *)(__int64 **))(*v40)[19])(v40) )
            {
              v41 = 0;
              if ( ((unsigned __int8 (__fastcall *)(__int64 **))(*v40)[22])(v40) )
              {
                CTokenQueue::AddToken((CTokenManager *)((char *)v6 + 320), (struct CToken *)v40);
              }
              else
              {
                Buffer[0] = v40[4];
                Buffer[1] = 0LL;
                NewElement = 0;
                inserted = RtlInsertElementGenericTable(
                             (PRTL_GENERIC_TABLE)((char *)v6 + 192),
                             Buffer,
                             0x10u,
                             &NewElement);
                if ( inserted )
                {
                  if ( NewElement )
                  {
                    v91 = 0LL;
                    v41 = CTokenQueue::Create(&v91);
                    if ( v41 < 0 )
                    {
                      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)v6 + 192), inserted);
                      inserted = 0LL;
                    }
                    else
                    {
                      v52 = v91;
                      inserted[1] = v91;
                    }
                  }
                }
                else
                {
                  v41 = -1073741801;
                }
                if ( v41 >= 0 )
                {
                  v56 = (__int64 *)inserted[1];
                  v57 = v40 + 1;
                  *((_DWORD *)v56 + 6) = 0;
                  v58 = (__int64 *)*v56;
                  if ( *(__int64 **)(*v56 + 8) != v56 )
LABEL_148:
                    __fastfail(3u);
                  *v57 = v58;
                  v40[2] = v56;
                  v58[1] = (__int64)v57;
                  *v56 = (__int64)v57;
                  if ( *((_DWORD *)v40 + 6) == 2 )
                  {
                    if ( ((unsigned __int8 (__fastcall *)(__int64 **))(*v40)[13])(v40) )
                      v56[2] = (__int64)v40;
                    if ( !((unsigned int (__fastcall *)(__int64 **))(*v40)[15])(v40)
                      && ((unsigned __int8 (__fastcall *)(__int64 **))(*v40)[12])(v40)
                      && (*v57 == v56 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*(*v57 - 1) + 88))(*v57 - 1)) )
                    {
                      ((void (__fastcall *)(__int64 **))(*v40)[10])(v40);
                    }
                  }
                }
                v6 = v80;
              }
              if ( v41 >= 0 )
                goto LABEL_108;
              ((void (__fastcall *)(__int64 **, __int64))**v40)(v40, 1LL);
            }
            else
            {
              v52 = (CTokenManager *)((char *)v6 + 304);
              v75 = 1;
              v53 = *((_QWORD *)v6 + 38);
              v54 = v40 + 1;
              if ( *(CTokenManager **)(v53 + 8) != (CTokenManager *)((char *)v6 + 304) )
                goto LABEL_148;
              *v54 = v53;
              v40[2] = (__int64 *)v52;
              *(_QWORD *)(v53 + 8) = v54;
              *(_QWORD *)v52 = v54;
            }
            if ( v41 < 0 )
            {
LABEL_136:
              v20 = v78;
              v21 = v79;
              if ( !v75 )
                goto LABEL_57;
              v18 = v77;
              v20 = ++v78;
              break;
            }
LABEL_108:
            v59 = v40[4];
            if ( v59 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *))v59[6])(v59 + 6) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v59 + 7, 0LL);
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *))v59[6])(v59 + 6) )
                {
                  if ( !*((_DWORD *)v59 + 30) || (v60 = (__int64 *)v59[13], v60 == v59 + 13) )
                  {
LABEL_117:
                    v61 = 0;
                  }
                  else
                  {
                    while ( *(v60 - 1) != v39 )
                    {
                      v60 = (__int64 *)*v60;
                      if ( v60 == v59 + 13 )
                        goto LABEL_117;
                    }
                    v61 = (*(__int64 (__fastcall **)(__int64 *))(*(v60 - 3) + 32))(v60 - 3);
                  }
                  v62 = v59 + 7;
                  if ( KeGetCurrentThread() == (struct _KTHREAD *)v59[8] )
                  {
                    v59[8] = 0LL;
                    ExReleasePushLockExclusiveEx(v62, 0LL);
                  }
                  else
                  {
                    ExReleasePushLockSharedEx(v62, 0LL);
                  }
                  KeLeaveCriticalRegion();
                  if ( v61 )
                  {
                    v63 = (void *)*((_QWORD *)v6 + 8);
                    PreviousState[0] = 0;
                    ZwSetEvent(v63, PreviousState);
                  }
                }
                else
                {
                  CPushLock::ReleaseLock((CPushLock *)(v59 + 6));
                }
              }
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *))v59[6])(v59 + 6) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v59 + 7, 0LL);
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *))v59[6])(v59 + 6) )
                {
                  v64 = v59 + 7;
                  v65 = *((_BYTE *)v59 + 128);
                  if ( KeGetCurrentThread() == (struct _KTHREAD *)v59[8] )
                  {
                    v59[8] = 0LL;
                    ExReleasePushLockExclusiveEx(v64, 0LL);
                  }
                  else
                  {
                    ExReleasePushLockSharedEx(v64, 0LL);
                  }
                  KeLeaveCriticalRegion();
                  if ( v65 )
                  {
                    v52 = (struct CTokenQueue *)*((_QWORD *)v6 + 9);
                    v86 = 0;
                    if ( v52 )
                      ZwSetEvent(v52, &v86);
                  }
                }
                else
                {
                  CPushLock::ReleaseLock((CPushLock *)(v59 + 6));
                }
              }
            }
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v66 = WdLogNewEntry5_WdAssertion(v52, v53);
              *(_QWORD *)(v66 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v66);
            }
            (*(void (__fastcall **)(unsigned int *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 40LL))(
              v17 + 4,
              1LL);
            goto LABEL_136;
          }
          v42 = v17[15];
          v43 = v90;
          v44 = 1;
          v40 = 0LL;
          v73 = 1;
          v45 = 0LL;
          v46 = v42 & 0x2000;
          if ( (v42 & 0x2000) != 0 && (v42 & 0x40000) == 0 )
          {
            CompositionSurfaceObject::GetIndependentFlipNotifyDwm(
              (CompositionSurfaceObject *)v90,
              *(unsigned __int64 *)v84,
              &v73);
            v44 = v73;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x250uLL, 0x6F744D54u);
          v48 = PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag[3] = 6LL;
            *((_BYTE *)PoolWithTag + 48) = 0;
            *PoolWithTag = &CToken::`vftable';
            v49 = *(_QWORD *)v84;
            v48[10] = 0LL;
            *((_DWORD *)v48 + 13) = 0;
            v48[5] = v49;
            v48[4] = v43;
            ObReferenceObjectByPointer(v43, 3u, g_pDxgkCompositionObjectType, 0);
            v50 = *(unsigned int **)PreviousState;
            *v48 = &CFlipToken::`vftable';
            *((_WORD *)v48 + 44) = 0;
            v48[12] = 0LL;
            *((_BYTE *)v48 + 560) = 0;
            v48[71] = 0LL;
            v48[72] = 0LL;
            *(_QWORD *)((char *)v48 + 148) = 0LL;
            *(_QWORD *)((char *)v48 + 156) = 0LL;
            *(_QWORD *)((char *)v48 + 164) = 0LL;
            *(_QWORD *)((char *)v48 + 172) = 0LL;
            *((_DWORD *)v48 + 139) = 0x1000000;
            *(_QWORD *)((char *)v48 + 188) = 1065353216LL;
            *((_DWORD *)v48 + 49) = 0;
            v48[25] = 1065353216LL;
            *((_DWORD *)v48 + 52) = 0;
            v48[15] = 0LL;
            v48[16] = 0LL;
            v41 = CFlipToken::InitializeCompleted(v48, v50 + 4, v44);
            if ( v41 < 0 )
              (*(void (__fastcall **)(_QWORD *, __int64))*v48)(v48, 1LL);
            else
              v45 = (__int64 **)v48;
            if ( v41 >= 0 )
            {
              v40 = v45;
              v39 = *(_QWORD *)v84;
LABEL_77:
              if ( v41 < 0 )
                v40 = 0LL;
              if ( !v46 )
                ObCloseHandle(v38, 1);
              ObfDereferenceObject(v43);
              v17 = *(unsigned int **)PreviousState;
              v6 = v80;
              goto LABEL_82;
            }
          }
          else
          {
            v41 = -1073741801;
          }
          v51 = *(unsigned int **)PreviousState;
          v39 = *(_QWORD *)v84;
          CompositionSurfaceObject::SignalGpuFence(
            (CompositionSurfaceObject *)v43,
            *(unsigned __int64 *)v84,
            *(_QWORD *)(*(_QWORD *)PreviousState + 16LL),
            1);
          if ( *((_QWORD *)v51 + 6) )
            CompositionSurfaceObject::SignalPresentLimitSemaphore((CompositionSurfaceObject *)v43, v39);
          goto LABEL_77;
        case 9u:
          v67 = (void *)*((_QWORD *)v17 + 2);
          v76 = 0;
          CTokenManager::CompleteFlipManagerToken(v6, v67, &v76);
          if ( !v76 )
            goto LABEL_57;
          v18 = v77;
          v78 = ++v20;
          break;
        default:
          memmove(v14, v17, v17[1]);
          v68 = v17[1];
          v18 = ++v77;
          v85 = v68 + v19;
          v92 = &v14[v68];
          break;
      }
LABEL_142:
      ++v21;
      v6 = v80;
      v17 = (unsigned int *)((char *)v17 + v17[1]);
      v19 = v85;
      v14 = v92;
      *(_QWORD *)PreviousState = v17;
      v79 = v21;
    }
    while ( v21 < (unsigned int)v96 );
    v8 = v87;
LABEL_144:
    v69 = *((_QWORD *)v6 + 23);
    *(_DWORD *)(*(_QWORD *)(v69 + 2088) + 16LL) += v18;
    *(_DWORD *)(*(_QWORD *)(v69 + 2088) + 2068LL) += v19;
    *(_DWORD *)(v69 + 2104) -= v19;
    *(_QWORD *)(v69 + 2096) += v19;
    if ( (_DWORD)v96 != v20 )
    {
      v70 = (void *)*((_QWORD *)v6 + 7);
      v84[0] = 0;
      ZwSetEvent(v70, v84);
    }
    v5 = v81;
    v7 = (struct CLegacyTokenBuffer **)((char *)v6 + 184);
    v3 = v82;
    v2 = v72;
LABEL_19:
    *((_QWORD *)v6 + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 88, 0LL);
    if ( v8 >= 0 && v2 )
    {
      v4 = (char *)v6 + 88;
      continue;
    }
    return (unsigned int)v8;
  }
}
