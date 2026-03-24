/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0014950
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00142E8 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000164C (-IsTokenManagerReady@@YAHXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00170E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0065524 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F9304 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rbx
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  _QWORD *v8; // rbx
  void (__fastcall ***v9)(_QWORD); // r13
  _QWORD *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v15)(_QWORD); // r14
  __int64 v16; // r12
  _QWORD *v17; // rax
  _QWORD **v18; // rdi
  _QWORD *v19; // r14
  _QWORD *v20; // rcx
  int v21; // ebx
  bool v22; // zf
  UINT64 CompositionBindingId; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  UINT v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  struct DXGSESSIONDATA *v38; // rax
  __int64 v39; // r14
  int v40; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // r15
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  struct _KPROCESS *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _KPROCESS *v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  UINT64 CompositionSyncKey; // rbx
  __int64 v63; // rax
  char v65; // [rsp+50h] [rbp-29h] BYREF
  char v66[7]; // [rsp+51h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-21h] BYREF
  int v68; // [rsp+60h] [rbp-19h] BYREF
  int v69; // [rsp+64h] [rbp-15h]
  void *Handle; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  v69 = a1;
  Object = 0LL;
  KeEnterCriticalRegion();
  v7 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( v7 < 0 )
    goto LABEL_94;
  v8 = Object;
  v9 = 0LL;
  v10 = 0LL;
  v7 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v7 >= 0 )
  {
    v7 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v8[6])(v8 + 6) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8 + 7, 0LL);
      v8[8] = KeGetCurrentThread();
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v8[6])(v8 + 6) )
      {
        v8 = Object;
LABEL_7:
        if ( v7 < 0 )
          ObfDereferenceObject(v8);
        else
          v10 = v8 + 5;
        goto LABEL_11;
      }
      CPushLock::ReleaseLock((CPushLock *)(v8 + 6));
      v8 = Object;
    }
    v7 = -1073741816;
    goto LABEL_7;
  }
LABEL_11:
  if ( v7 >= 0 )
  {
    v7 = -1073741823;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v13 + 24) = 2238LL;
      WdLogEvent5_WdAssertion(v13);
    }
    SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v15 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2340);
      if ( v15 )
      {
        (**v15)(*((_QWORD *)SessionData + 2340));
        v7 = 0;
        v9 = v15;
      }
    }
    if ( v7 >= 0 )
    {
      v16 = 0LL;
      if ( !*((_DWORD *)v10 + 20) || (v17 = (_QWORD *)v10[8], v18 = (_QWORD **)(v10 + 8), v17 == v10 + 8) )
      {
LABEL_22:
        v7 = -1071775728;
      }
      else
      {
        while ( 1 )
        {
          v19 = v17 - 3;
          if ( *(v17 - 1) == a2->CompositionBindingId )
            break;
          v17 = (_QWORD *)*v17;
          if ( v17 == v18 )
            goto LABEL_22;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 8LL))(v17 - 3);
        v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
        if ( v21 != 2 )
          goto LABEL_26;
        v22 = *((_DWORD *)v10 + 20) == 0;
        CompositionBindingId = a2->CompositionBindingId;
        v65 = 0;
        v66[0] = 0;
        if ( v22 )
          goto LABEL_26;
        v24 = *v18;
        if ( *v18 == v18 )
          goto LABEL_26;
        while ( 1 )
        {
          v25 = v24 - 3;
          if ( *(v24 - 1) == CompositionBindingId )
            break;
          v24 = (_QWORD *)*v24;
          if ( v24 == v18 )
          {
            v7 = -1073741811;
            goto LABEL_23;
          }
        }
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v25 + 8LL))(v24 - 3) != 2 )
        {
LABEL_26:
          v7 = -1073741811;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, char *, char *))(*v25 + 64LL))(
            v25,
            &a2->Token,
            &v65,
            v66);
          v7 = 0;
          if ( v65 )
          {
            v26 = a2->Token.Flip.Flags.Value | 0x200000;
            a2->Token.Flip.Flags.Value = v26;
            if ( v66[0] )
              a2->Token.Flip.Flags.Value = v26 | 0x400000;
          }
        }
      }
LABEL_23:
      v20 = v10 + 2;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v10[3] )
      {
        v10[3] = 0LL;
        ExReleasePushLockExclusiveEx(v20, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v20, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v10 - 5);
      if ( v7 < 0 )
        goto LABEL_91;
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
      {
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v29 = WdLogNewEntry5_WdAssertion(v28, v27);
          *(_QWORD *)(v29 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v29);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 208LL))();
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v32 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v32 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v32);
        }
        v35 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 240LL))();
        if ( v16 )
        {
          v68 = 0;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v36 = WdLogNewEntry5_WdAssertion(v34, v33);
            *(_QWORD *)(v36 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v36);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, int *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 248LL))(
                 v16,
                 &v68) )
          {
            if ( !v69 || v35 )
              goto LABEL_56;
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v37 = WdLogNewEntry5_WdAssertion(v34, v33);
              *(_QWORD *)(v37 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v37);
            }
            v38 = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
            if ( !v38
              || (v39 = *((_QWORD *)v38 + 2340)) == 0
              || ((**(void (__fastcall ***)(_QWORD))v39)(*((_QWORD *)v38 + 2340)),
                  v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 176LL))(v39),
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39),
                  !v40)
              || !v68 )
            {
LABEL_56:
              v7 = -1071775733;
            }
          }
          else
          {
            v7 = -1071775729;
          }
        }
        else if ( !v69
               || v35
               || !(unsigned int)IsTokenManagerReady()
               || (Global = DXGGLOBAL::GetGlobal(v34, v33),
                   !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 224LL))()) )
        {
          v7 = -1071775730;
        }
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v42 = WdLogNewEntry5_WdAssertion(v34, v33);
          *(_QWORD *)(v42 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v42);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 256LL))();
      }
      if ( v7 < 0 )
      {
LABEL_91:
        v8 = Object;
      }
      else
      {
        v8 = Object;
        v7 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), PVOID))(*v9)[12])(v9, Object);
        if ( v7 >= 0 )
        {
          v45 = 0;
          Handle = (void *)-1LL;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v46 = WdLogNewEntry5_WdAssertion(v44, v43);
            *(_QWORD *)(v46 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v46);
          }
          if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 232LL))() )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v49 = WdLogNewEntry5_WdAssertion(v48, v47);
              *(_QWORD *)(v49 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v49);
            }
            if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 136LL))() )
            {
              if ( !DXGGLOBAL::m_pGlobal )
              {
                v50 = WdLogNewEntry5_WdAssertion(v48, v47);
                *(_QWORD *)(v50 + 24) = 2238LL;
                WdLogEvent5_WdAssertion(v50);
              }
              (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 144LL))();
              v45 = 1;
            }
          }
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v51 = WdLogNewEntry5_WdAssertion(v48, v47);
            *(_QWORD *)(v51 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v51);
          }
          v52 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 272LL))();
          v55 = v52;
          if ( v52 )
          {
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(v52, &ApcState);
            v7 = ObOpenObjectByPointer(v8, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
            KeUnstackDetachProcess(&ApcState);
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v58 = WdLogNewEntry5_WdAssertion(v57, v56);
              *(_QWORD *)(v58 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v58);
            }
            (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 200LL))(v55);
          }
          else
          {
            v7 = -1073741823;
          }
          if ( v45 )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v59 = WdLogNewEntry5_WdAssertion(v54, v53);
              *(_QWORD *)(v59 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v59);
            }
            (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 184LL))();
          }
          if ( v7 >= 0 )
          {
            v22 = DXGGLOBAL::m_pGlobal == 0LL;
            a2->Token.Flip.hCompSurf = (LONG64)Handle;
            v60 = v8[3];
            *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v60;
            if ( v22 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v54, v53);
              *(_QWORD *)(v61 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v61);
            }
            (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, __int64, UINT64, LONG, UINT, UINT))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 104LL))(
              a2,
              v8,
              a2->Token.Flip.SwapChainIndex,
              a2->Token.Flip.PresentCount,
              v60,
              a2->CompositionBindingId,
              a2->Token.Blt.DirtyRegions.Rects[0].bottom,
              a2->Token.Flip.DestWidth,
              a2->Token.Flip.DestHeight);
          }
        }
      }
    }
  }
  ObfDereferenceObject(v8);
  if ( v9 )
    (*v9)[1](v9);
LABEL_94:
  if ( v7 == -1071775730 )
  {
    v7 = NotifySurfaceOfSkippedToken(a2);
    if ( v7 >= 0 )
      v7 = -1071775730;
  }
  else if ( v7 >= 0 )
  {
    goto LABEL_102;
  }
  CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
  if ( CompositionSyncKey )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v63 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v63 + 24) = 2238LL;
      WdLogEvent5_WdAssertion(v63);
    }
    (*(void (__fastcall **)(UINT64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 32LL))(
      CompositionSyncKey,
      1LL);
  }
LABEL_102:
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
