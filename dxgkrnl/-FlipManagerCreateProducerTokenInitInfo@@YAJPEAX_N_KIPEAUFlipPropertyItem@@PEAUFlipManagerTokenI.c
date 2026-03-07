__int64 __fastcall FlipManagerCreateProducerTokenInitInfo(
        void *a1,
        bool a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct FlipPropertyItem *Src,
        struct FlipManagerTokenInitInfo *a6)
{
  FlipManagerObject *v7; // rdi
  _QWORD *v8; // r15
  __int64 v9; // r13
  int v11; // ebx
  int IsEnabledDeviceUsage; // eax
  char v13; // r8
  struct CFlipPropertySet *v14; // r12
  int v15; // eax
  int v16; // eax
  struct CFlipPresentUpdate *v17; // rsi
  __int64 Win32kImportTable; // rax
  _QWORD *v19; // rcx
  bool v21; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  struct CFlipPresentUpdate *v23; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  CFlipPropertySetBase *v25; // [rsp+60h] [rbp-10h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-8h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v8 = 0LL;
  P = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v21 = 0;
  v11 = CreateFlipPropertySetWorker<CFlipPropertySet>(a4, (char *)Src, a3, &v25);
  IsEnabledDeviceUsage = Feature_CompositionTextures__private_IsEnabledDeviceUsage();
  v14 = v25;
  if ( IsEnabledDeviceUsage )
  {
    if ( v11 < 0 )
      goto LABEL_25;
    if ( v25 )
    {
      CFlipPropertySetBase::FindProperty<BatchSyncInfo>((__int64)v25, &v26);
      v8 = v26;
      if ( v26 )
      {
        if ( *v26 )
        {
          if ( a3 )
          {
            v11 = -1073741811;
            goto LABEL_25;
          }
          v9 = *v26;
        }
      }
    }
  }
  else if ( v11 < 0 )
  {
    goto LABEL_25;
  }
  v15 = FlipManagerObject::ResolveHandle(a1, 2u, v13, (struct FlipManagerObject **)&Object);
  v7 = (FlipManagerObject *)Object;
  v11 = v15;
  if ( v15 >= 0 )
  {
    FlipManagerObject::IsDwmBound((FlipManagerObject *)Object, &v21);
    v16 = FlipManagerObject::CreatePresentUpdateForProducer(
            v7,
            a2,
            a3,
            v9 != 0,
            v14,
            &v23,
            (struct FlipManagerTokenIFlipInfo **)&P);
    v17 = v23;
    v11 = v16;
    if ( v16 < 0
      || (*((_QWORD *)a6 + 3) = *((_QWORD *)v23 + 8),
          v11 = ObReferenceObjectByPointer(v7, 3u, g_pDxgkCompositionObjectType, 0),
          v11 < 0) )
    {
      v19 = P;
    }
    else
    {
      if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage() && v9 )
      {
        Win32kImportTable = DxgkGetWin32kImportTable();
        (*(void (__fastcall **)(__int64, _QWORD))(Win32kImportTable + 48))(v9, 0LL);
      }
      *((_BYTE *)a6 + 16) = v21;
      *((_QWORD *)a6 + 1) = v7;
      *((_QWORD *)a6 + 4) = a3;
      *((_QWORD *)v17 + 1) = v7;
      v7 = 0LL;
      *(_QWORD *)a6 = v17;
      v17 = 0LL;
      if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() && v8 )
        *((_QWORD *)a6 + 6) = *v8;
      v19 = 0LL;
      *((_QWORD *)a6 + 5) = P;
    }
    if ( v19 )
      FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v19);
    if ( v17 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_25:
  if ( v14 )
    CFlipPropertySetBase::Release(v14);
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v11;
}
