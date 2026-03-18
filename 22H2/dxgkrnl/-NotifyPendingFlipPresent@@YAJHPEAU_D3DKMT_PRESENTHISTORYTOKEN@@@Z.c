/*
 * XREFs of ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007A94C
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000ACBC (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000AA64 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000F0A8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00106D4 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C00108B0 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0012F7C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007ACC4 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C007C530 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x1C007C9D0 (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 */

__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // r14
  CCompositionSurface *v3; // r12
  int SessionTokenManager; // eax
  __int64 v6; // r8
  void *v7; // rsi
  int v8; // ebx
  _QWORD *v9; // r15
  char v10; // r13
  struct CCompositionSurface *v11; // r14
  UINT64 CompositionBindingId; // rdx
  UINT64 v13; // rdx
  UINT v14; // eax
  struct DXGGLOBAL *v15; // rax
  HWND v16; // r14
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  int v19; // eax
  struct DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *Global; // rax
  int v22; // eax
  UINT64 CompositionSyncKey; // rdi
  struct DXGGLOBAL *v24; // rax
  struct CCompositionSurface *v26; // [rsp+50h] [rbp-18h] BYREF
  void *Handle; // [rsp+B8h] [rbp+50h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+58h] BYREF
  HWND v30; // [rsp+C8h] [rbp+60h] BYREF

  hLogicalSurface = (void *)a2->Token.Flip.hLogicalSurface;
  v3 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&Handle);
  v7 = Handle;
  v8 = SessionTokenManager;
  if ( SessionTokenManager >= 0 )
  {
    v8 = CompositionSurfaceObject::ResolveHandle(hLogicalSurface, 2u, v6, (struct CompositionSurfaceObject **)&Object);
    if ( v8 >= 0 )
    {
      v9 = Object;
      v26 = 0LL;
      v30 = 0LL;
      v10 = 0;
      v8 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v26);
      if ( v8 < 0 )
      {
        v3 = v26;
LABEL_34:
        if ( v3 )
          CCompositionSurface::UnlockAndRelease(v3);
        goto LABEL_36;
      }
      v11 = v26;
      CompositionBindingId = a2->CompositionBindingId;
      LODWORD(Object) = 0;
      if ( CCompositionSurface::CheckBinding(
             v26,
             CompositionBindingId,
             (enum CompositionBufferType *)&Object,
             &v30,
             (bool *)&Handle) )
      {
        if ( (_DWORD)Object == 2 )
        {
          v13 = a2->CompositionBindingId;
          LOBYTE(Handle) = 0;
          LOBYTE(Object) = 0;
          v8 = CCompositionSurface::NotifyPendingFlipPresent(
                 v11,
                 v13,
                 &a2->Token.Flip,
                 (bool *)&Handle,
                 (bool *)&Object);
          if ( v8 >= 0 )
          {
            if ( (_BYTE)Handle )
            {
              v14 = a2->Token.Flip.Flags.Value | 0x200000;
              a2->Token.Flip.Flags.Value = v14;
              if ( (_BYTE)Object )
                a2->Token.Flip.Flags.Value = v14 | 0x400000;
            }
            v10 = *((_BYTE *)v11 + 112);
            a2->Token.Flip.Reserved = *((_DWORD *)v11 + 24);
          }
        }
        else
        {
          v8 = -1073741811;
        }
      }
      else
      {
        v8 = -1071775728;
      }
      CCompositionSurface::UnlockAndRelease(v11);
      if ( v8 < 0 )
        goto LABEL_36;
      if ( !a1 || !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v7 + 184LL))(v7) )
      {
        v8 = v30 != 0LL ? -1071775733 : -1071775730;
        goto LABEL_36;
      }
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
        v8 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)v7 + 104LL))(v7, v9);
      if ( v8 < 0 )
        goto LABEL_36;
      if ( v10 )
      {
LABEL_30:
        Handle = 0LL;
        v8 = DxgkCompositionObject::OpenDwmHandle(v9, &Handle);
        if ( v8 >= 0 )
        {
          a2->Token.Flip.hCompSurf = (LONG64)Handle;
          *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v9[3];
          Global = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, _QWORD, UINT64, LONG, UINT, UINT))(*((_QWORD *)Global + 38069) + 368LL))(
            a2,
            v9,
            a2->Token.Flip.SwapChainIndex,
            a2->Token.Flip.PresentCount,
            *((_QWORD *)&a2->Token.SurfaceComplete + 7),
            a2->CompositionBindingId,
            a2->Token.Blt.DirtyRegions.Rects[0].bottom,
            a2->Token.Flip.DestWidth,
            a2->Token.Flip.DestHeight);
          goto LABEL_34;
        }
LABEL_36:
        ObfDereferenceObject(v9);
        goto LABEL_37;
      }
      LODWORD(Handle) = 0;
      v15 = DXGGLOBAL::GetGlobal();
      (*(void (**)(void))(*((_QWORD *)v15 + 38069) + 472LL))();
      v16 = v30;
      v17 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 38069);
      if ( v16 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, void **))(v17 + 512))(v16, &Handle) )
          v8 = -1071775729;
        if ( v8 < 0 )
        {
LABEL_29:
          v20 = DXGGLOBAL::GetGlobal();
          (*(void (**)(void))(*((_QWORD *)v20 + 38069) + 520LL))();
          if ( v8 < 0 )
            goto LABEL_36;
          goto LABEL_30;
        }
      }
      else
      {
        LODWORD(Handle) = (*(__int64 (**)(void))(v17 + 488))();
      }
      v18 = DXGGLOBAL::GetGlobal();
      v19 = (*(__int64 (**)(void))(*((_QWORD *)v18 + 38069) + 504LL))();
      if ( !(_DWORD)Handle || v19 )
        v8 = v16 != 0LL ? -1071775733 : -1071775730;
      goto LABEL_29;
    }
  }
LABEL_37:
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  if ( (v8 == -1071775733 || v8 == -1071775730) && (v22 = NotifySurfaceOfSkippedToken(a2), v22 < 0) )
  {
    v8 = v22;
  }
  else if ( v8 >= 0 )
  {
    goto LABEL_46;
  }
  CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
  if ( CompositionSyncKey )
  {
    v24 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(UINT64, __int64))(*((_QWORD *)v24 + 38069) + 48LL))(CompositionSyncKey, 1LL);
  }
LABEL_46:
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
