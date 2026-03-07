__int64 __fastcall DxgkQuerySwapChainBindingStatus(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // ebx
  void *FenceValue; // rbp
  int v6; // edi
  __int64 Win32kImportTable; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rsi
  NTSTATUS v13; // eax
  _QWORD *v14; // rbp
  __int64 v15; // rax
  UINT64 CompositionSyncKey; // rsi
  __int64 v17; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  void *Handle; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2->Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
  {
    FenceValue = (void *)a2->Token.Flip.FenceValue;
    if ( FenceValue )
    {
      v6 = 0;
      Handle = 0LL;
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (**)(void))(Win32kImportTable + 472))();
      v8 = DxgkGetWin32kImportTable();
      v9 = (*(__int64 (**)(void))(v8 + 504))();
      if ( !a1
        || v9
        || !(unsigned int)IsTokenManagerReady()
        || (v10 = DxgkGetWin32kImportTable(), !(*(unsigned int (**)(void))(v10 + 488))()) )
      {
        v6 = -1071775730;
      }
      v11 = DxgkGetWin32kImportTable();
      (*(void (**)(void))(v11 + 520))();
      if ( v6 >= 0 )
      {
        Object = 0LL;
        v12 = 0LL;
        v13 = ObReferenceObjectByHandle(FenceValue, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
        v14 = Object;
        v6 = v13;
        if ( v13 >= 0 )
        {
          if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 2 )
          {
            v12 = v14;
          }
          else
          {
            ObfDereferenceObject(v14);
            v6 = -1073741788;
          }
        }
        if ( v6 >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v12 + 9, 0LL);
          v6 = 0;
          if ( *((_DWORD *)v12 + 16) )
            v6 = -1073741823;
          else
            (*(void (__fastcall **)(_QWORD *))(v12[5] + 16LL))(v12 + 5);
          CPushLock::ReleaseLock((CPushLock *)(v12 + 9));
          if ( v6 >= 0 )
          {
            v6 = DxgkCompositionObject::OpenDwmHandle(v12, &Handle);
            if ( v6 >= 0 )
            {
              if ( !(unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() )
              {
                v15 = DxgkGetWin32kImportTable();
                (*(void (__fastcall **)(_QWORD, _QWORD))(v15 + 48))(v12[13], 0LL);
              }
              a2->Token.Flip.FenceValue = (UINT64)Handle;
            }
          }
          ObfDereferenceObject(v12);
        }
      }
      if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() )
      {
        if ( v6 < 0 )
        {
          CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
          if ( CompositionSyncKey )
          {
            v17 = DxgkGetWin32kImportTable();
            (*(void (__fastcall **)(UINT64, __int64))(v17 + 48))(CompositionSyncKey, 1LL);
          }
        }
      }
      return (unsigned int)v6;
    }
  }
  else if ( a2->Model == D3DKMT_PM_FLIPMANAGER )
  {
    return (unsigned int)NotifyPendingFlipManagerPresent(a1, a2);
  }
  else
  {
    return (unsigned int)NotifyPendingFlipPresent(a1, a2);
  }
  return v2;
}
