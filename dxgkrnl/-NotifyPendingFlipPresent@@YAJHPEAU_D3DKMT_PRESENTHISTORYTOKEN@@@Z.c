__int64 __fastcall NotifyPendingFlipPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *hLogicalSurface; // rsi
  CCompositionSurface *v3; // r12
  int SessionTokenManager; // eax
  __int64 v6; // r8
  void *v7; // r14
  int v8; // ebx
  _QWORD *v9; // r15
  char v10; // r13
  struct CCompositionSurface *v11; // rsi
  UINT64 CompositionBindingId; // rdx
  UINT64 v13; // rdx
  UINT v14; // eax
  __int64 v15; // rax
  HWND v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 Win32kImportTable; // rax
  __int64 v22; // rax
  int v23; // eax
  UINT64 CompositionSyncKey; // rdi
  __int64 v25; // rax
  struct CCompositionSurface *v27; // [rsp+50h] [rbp-18h] BYREF
  void *Handle; // [rsp+B8h] [rbp+50h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+58h] BYREF
  HWND v31; // [rsp+C8h] [rbp+60h] BYREF

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
      v27 = 0LL;
      v31 = 0LL;
      v10 = 0;
      v8 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v27);
      if ( v8 < 0 )
      {
        v3 = v27;
LABEL_36:
        if ( v3 )
          CCompositionSurface::UnlockAndRelease(v3);
        goto LABEL_38;
      }
      v11 = v27;
      CompositionBindingId = a2->CompositionBindingId;
      LODWORD(Object) = 0;
      if ( CCompositionSurface::CheckBinding(
             v27,
             CompositionBindingId,
             (enum CompositionBufferType *)&Object,
             &v31,
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
        goto LABEL_38;
      if ( !a1 || !(*(unsigned int (__fastcall **)(void *))(*(_QWORD *)v7 + 184LL))(v7) )
      {
        v8 = v31 != 0LL ? -1071775733 : -1071775730;
        goto LABEL_38;
      }
      if ( (a2->Token.Flip.Flags.Value & 0x2000000) == 0 )
        v8 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)v7 + 104LL))(v7, v9);
      if ( v8 < 0 )
        goto LABEL_38;
      if ( v10 )
      {
LABEL_30:
        Handle = 0LL;
        v8 = DxgkCompositionObject::OpenDwmHandle(v9, &Handle);
        if ( v8 >= 0 )
        {
          a2->Token.Flip.hCompSurf = (LONG64)Handle;
          *((_QWORD *)&a2->Token.SurfaceComplete + 7) = v9[3];
          if ( !(unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() )
          {
            Win32kImportTable = DxgkGetWin32kImportTable();
            (*(void (__fastcall **)(union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *, _QWORD))(Win32kImportTable + 56))(
              &a2->Token,
              0LL);
          }
          v22 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD *, _QWORD, _QWORD, _QWORD, UINT64, LONG, UINT, UINT))(v22 + 368))(
            a2,
            v9,
            a2->Token.Flip.SwapChainIndex,
            a2->Token.Flip.PresentCount,
            *((_QWORD *)&a2->Token.SurfaceComplete + 7),
            a2->CompositionBindingId,
            a2->Token.Blt.DirtyRegions.Rects[0].bottom,
            a2->Token.Flip.DestWidth,
            a2->Token.Flip.DestHeight);
          goto LABEL_36;
        }
LABEL_38:
        ObfDereferenceObject(v9);
        goto LABEL_39;
      }
      LODWORD(Handle) = 0;
      v15 = DxgkGetWin32kImportTable();
      (*(void (**)(void))(v15 + 472))();
      v16 = v31;
      v17 = DxgkGetWin32kImportTable();
      if ( v16 )
      {
        if ( !(*(unsigned int (__fastcall **)(HWND, void **))(v17 + 512))(v16, &Handle) )
          v8 = -1071775729;
        if ( v8 < 0 )
        {
LABEL_29:
          v20 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v20 + 520))();
          if ( v8 < 0 )
            goto LABEL_38;
          goto LABEL_30;
        }
      }
      else
      {
        LODWORD(Handle) = (*(__int64 (**)(void))(v17 + 488))();
      }
      v18 = DxgkGetWin32kImportTable();
      v19 = (*(__int64 (**)(void))(v18 + 504))();
      if ( !(_DWORD)Handle || v19 )
        v8 = v16 != 0LL ? -1071775733 : -1071775730;
      goto LABEL_29;
    }
  }
LABEL_39:
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v8 == -1071775733 || v8 == -1071775730 )
  {
    v23 = NotifySurfaceOfSkippedToken(a2);
    if ( v23 < 0 )
      v8 = v23;
  }
  if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() )
  {
    if ( v8 < 0 )
    {
      CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
      if ( CompositionSyncKey )
      {
        v25 = DxgkGetWin32kImportTable();
        (*(void (__fastcall **)(UINT64, __int64))(v25 + 48))(CompositionSyncKey, 1LL);
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
