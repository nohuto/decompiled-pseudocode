__int64 __fastcall CActivationObjectManager::CreateActivationObject(
        CActivationObjectManager *this,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        __int64 a4,
        char a5,
        HWND a6,
        unsigned __int64 a7,
        struct _LUID *a8)
{
  HWND v8; // rsi
  __int64 v9; // rbp
  int v10; // edi
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rbx
  struct _OBJECT_ATTRIBUTES *v16; // rdx
  char v17; // cl
  unsigned int v18; // r8d
  char v19; // r9
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  Object = a3;
  v8 = a6;
  v9 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v10 = -1073741811;
  v11 = (_DWORD *)HMValidateHandleNoSecure((int)a6, 255);
  if ( v11 )
  {
    v14 = (unsigned __int16)*v11;
    v15 = (struct tagTHREADINFO *)*((_QWORD *)gpKernelHandleTable + 3 * v14 + 1);
    if ( v15 == PtiCurrentShared(v14, 3 * v14, v12, v13) )
    {
      Object = 0LL;
      v10 = CActivationObject::Create(v17, v16, v18, v19, v8, a7, (struct CActivationObject **)&Object);
      if ( v10 >= 0 )
      {
        CPushLock::AcquireLockExclusive((CPushLock *)(v9 + 16));
        v20 = Object;
        v10 = CActivationObjectManager::AddActivationObjectToHashTable(
                (CActivationObjectManager *)v9,
                (struct CActivationObject *)Object);
        if ( v10 >= 0 )
        {
          v21 = v20[5];
          v23 = 0LL;
          *a8 = (struct _LUID)v21;
          v26 = 0LL;
          v24 = 0LL;
          v25 = 0;
          CActivationObjectManager::NotifySystemSateChanged(v21, (__int64)v20, 0, (unsigned int *)&v23);
        }
        CPushLock::ReleaseLock((CPushLock *)(v9 + 16));
        if ( v10 < 0 && v20 )
          ObfDereferenceObject(v20);
      }
    }
  }
  return (unsigned int)v10;
}
