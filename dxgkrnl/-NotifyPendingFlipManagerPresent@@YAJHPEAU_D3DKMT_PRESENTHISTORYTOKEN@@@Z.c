__int64 __fastcall NotifyPendingFlipManagerPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // r14
  int v3; // edi
  unsigned __int64 v4; // rbp
  __int64 Win32kImportTable; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  DxgkCompositionObject *v12; // rbx
  CPushLock *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  DxgkCompositionObject *v16; // rbx
  __int64 v17; // rax
  DxgkCompositionObject *v19; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v3 = 0;
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (**)(void))(Win32kImportTable + 472))();
  v8 = DxgkGetWin32kImportTable();
  v9 = (*(__int64 (**)(void))(v8 + 504))();
  if ( a1
    && !v9
    && (unsigned int)IsTokenManagerReady()
    && (v10 = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(v10 + 488))()) )
  {
    if ( (a2->Token.Gdi.ScrollRect.left & 4) != 0 )
      v3 = -1073741811;
  }
  else
  {
    v3 = -1071775730;
  }
  v11 = DxgkGetWin32kImportTable();
  (*(void (**)(void))(v11 + 520))();
  if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() )
  {
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -1071775730 )
      goto LABEL_29;
    if ( (int)FlipManagerTokenObject::ResolveHandleForWrite(FenceValue, &v19) >= 0 )
    {
      v16 = v19;
      if ( v3 < 0 || (v3 = FlipManagerTokenObject::MarkPending(v19), v3 < 0) )
      {
        FlipManagerTokenObject::GetAndClearSyncId(v16, &v20);
        v4 = v20;
      }
      else
      {
        a2->Token.Gdi.ScrollRect.left |= 4u;
        a2->Token.Flip.FenceValue = (UINT64)v16;
      }
      if ( (a2->Token.Gdi.ScrollRect.left & 4) == 0 )
        DxgkCompositionObject::Release(v16);
    }
    if ( v3 < 0 )
    {
LABEL_29:
      if ( v4 )
      {
        v17 = DxgkGetWin32kImportTable();
        (*(void (__fastcall **)(unsigned __int64, __int64))(v17 + 48))(v4, 1LL);
      }
    }
  }
  else if ( v3 >= 0 )
  {
    v3 = FlipManagerTokenObject::ResolveHandleForWrite(FenceValue, &v19);
    if ( v3 >= 0 )
    {
      v12 = v19;
      v3 = FlipManagerTokenObject::MarkPending(v19);
      if ( v3 >= 0 )
      {
        a2->Token.Gdi.ScrollRect.left |= 4u;
        a2->Token.Flip.FenceValue = (UINT64)v12;
        if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
        {
          v13 = (DxgkCompositionObject *)((char *)v12 + 72);
          if ( (int)CPushLock::AcquireLockShared((DxgkCompositionObject *)((char *)v12 + 72)) >= 0 )
          {
            v14 = *((_QWORD *)v12 + 15);
            CPushLock::ReleaseLock(v13);
            if ( v14 )
            {
              v15 = DxgkGetWin32kImportTable();
              (*(void (__fastcall **)(__int64, _QWORD))(v15 + 48))(v14, 0LL);
            }
          }
        }
        v12 = 0LL;
      }
      if ( v12 )
        DxgkCompositionObject::Release(v12);
    }
  }
  return (unsigned int)v3;
}
