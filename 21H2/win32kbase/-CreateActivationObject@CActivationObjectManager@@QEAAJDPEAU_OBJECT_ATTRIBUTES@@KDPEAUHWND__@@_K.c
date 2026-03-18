/*
 * XREFs of ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C00917C4
 * Callers:
 *     NtUserCreateActivationObject @ 0x1C00B80C0 (NtUserCreateActivationObject.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00918F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00919E0 (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z @ 0x1C0091CA0 (-Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

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
  CActivationObjectManager *v9; // rbp
  int v10; // edi
  _DWORD *v11; // rax
  __int64 v12; // rbx
  struct _OBJECT_ATTRIBUTES *v13; // rdx
  char v14; // cl
  unsigned int v15; // r8d
  char v16; // r9
  _QWORD *v17; // rsi
  struct _LUID v18; // rcx
  HWND v20; // [rsp+20h] [rbp-68h]
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  struct CActivationObject **v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF

  Object = a3;
  v8 = a6;
  v9 = qword_1C0296548;
  v10 = -1073741811;
  v11 = (_DWORD *)HMValidateHandleNoSecure((int)a6, 255);
  if ( v11 )
  {
    v12 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*v11 + 1);
    if ( v12 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      Object = 0LL;
      v10 = CActivationObject::Create(v14, v13, v15, v16, v8, a7, (struct CActivationObject **)&Object);
      if ( v10 >= 0 )
      {
        CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)v9 + 16));
        v17 = Object;
        v10 = CActivationObjectManager::AddActivationObjectToHashTable(v9, (struct CActivationObject *)Object);
        if ( v10 >= 0 )
        {
          v18 = (struct _LUID)v17[5];
          v23 = 0LL;
          *a8 = v18;
          v26 = 0LL;
          v24 = 0LL;
          v25 = 0;
          CActivationObjectManager::NotifySystemSateChanged(v18, v17, 0LL, &v23, v20, v21, v22);
        }
        CPushLock::ReleaseLock((CActivationObjectManager *)((char *)v9 + 16));
        if ( v10 < 0 && v17 )
          ObfDereferenceObject(v17);
      }
    }
  }
  return (unsigned int)v10;
}
