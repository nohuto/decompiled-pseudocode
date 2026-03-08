/*
 * XREFs of ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007659C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0017FA0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     Feature_CompositionTextures__private_IsEnabledDeviceUsage @ 0x1C0026E2C (Feature_CompositionTextures__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z @ 0x1C0076058 (-LockForWrite@FlipManagerTokenObject@@QEAAJPEAPEAVCFlipManagerToken@@@Z.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1C0082BBC (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 */

void __fastcall CTokenManager::CompleteFlipManagerToken(
        CTokenManager *this,
        struct FlipManagerTokenObject *a2,
        bool *a3)
{
  struct CToken *v6; // rbx
  unsigned __int8 v7; // di
  bool v8; // si
  unsigned __int8 v9; // r13
  bool v10; // bp
  __int64 v11; // rdx
  char *v12; // rcx
  CTokenManager **v13; // rdx
  CTokenManager *v14; // rax
  __int64 v15; // rdi
  CTokenManager *v16; // rax
  CTokenManager **v17; // rdx
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  void (__fastcall *v24)(_QWORD, __int64, _QWORD, bool, _DWORD, _DWORD, _DWORD); // [rsp+58h] [rbp-40h]
  struct CToken *PreviousState; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int8 v26; // [rsp+B8h] [rbp+20h]

  PreviousState = 0LL;
  *a3 = 1;
  if ( (int)FlipManagerTokenObject::LockForWrite((char *)a2, &PreviousState) >= 0 )
  {
    v6 = PreviousState;
    v7 = 0;
    v8 = 0;
    v26 = 0;
    v9 = 0;
    LOBYTE(PreviousState) = 0;
    v10 = 0;
    v11 = *((_QWORD *)v6 + 8);
    v23 = *((_QWORD *)v6 + 10);
    if ( v11 )
    {
      v7 = *(_BYTE *)(v11 + 24);
      if ( v7 )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 28LL) == 1;
        v10 = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 48LL) != 0;
      }
      v9 = *(_BYTE *)(v11 + 78);
      v26 = *(_BYTE *)(v11 + 76);
      LOBYTE(PreviousState) = *(_BYTE *)(v11 + 84);
    }
    v21 = 0;
    v24 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, bool, _DWORD, _DWORD, _DWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal()
                                                                                         + 38069)
                                                                                       + 88LL);
    v22 = *((_QWORD *)v6 + 9);
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v22 + 40)) >= 0 )
    {
      v21 = *(_DWORD *)(v22 + 364);
      CPushLock::ReleaseLock((CPushLock *)(v22 + 40));
    }
    v24(v21, v23, v7, v8, v9, v26, (unsigned __int8)PreviousState);
    if ( *((_DWORD *)v6 + 8) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v6 + 1) + 24LL))((__int64)v6 + 8);
      v8 = 0;
    }
    if ( *((_BYTE *)v6 + 104) )
    {
      if ( !v7 )
      {
        if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() && *((_QWORD *)v6 + 11) )
        {
          Global = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)Global + 38069) + 48LL))(*((_QWORD *)v6 + 11), 1LL);
        }
        v12 = (char *)this + 288;
        v13 = (CTokenManager **)*((_QWORD *)this + 37);
        v14 = (struct CToken *)((char *)v6 + 16);
        if ( *v13 != (CTokenManager *)((char *)this + 288) )
          __fastfail(3u);
        goto LABEL_16;
      }
      if ( v8 )
      {
        if ( v10 )
        {
          v12 = (char *)this + 288;
          v13 = (CTokenManager **)*((_QWORD *)this + 37);
          v14 = (struct CToken *)((char *)v6 + 16);
          if ( *v13 != (CTokenManager *)((char *)this + 288) )
            __fastfail(3u);
LABEL_16:
          *(_QWORD *)v14 = v12;
          *((_QWORD *)v14 + 1) = v13;
          *v13 = v14;
          *((_QWORD *)v12 + 1) = v14;
          *a3 = 0;
LABEL_24:
          CPushLock::ReleaseLock((struct CToken *)((char *)v6 + 40));
          ObfDereferenceObject((char *)v6 - 32);
          v18 = DXGGLOBAL::GetGlobal();
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v18 + 38069) + 96LL))(v23);
          return;
        }
        v15 = *((_QWORD *)v6 + 9);
        PreviousState = 0LL;
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v15 + 40)) >= 0 )
        {
          CFlipManager::ConsumerIFlipTokenCompleted((CFlipManager *)(v15 + 32), v6, &PreviousState);
          CPushLock::ReleaseLock((CPushLock *)(v15 + 40));
          if ( PreviousState )
          {
            v16 = (struct CToken *)((char *)PreviousState + 8);
            v17 = (CTokenManager **)*((_QWORD *)this + 39);
            if ( *v17 != (CTokenManager *)((char *)this + 304) )
              __fastfail(3u);
            LODWORD(PreviousState) = 0;
            *((_QWORD *)v16 + 1) = v17;
            *(_QWORD *)v16 = (char *)this + 304;
            *v17 = v16;
            *((_QWORD *)this + 39) = v16;
            ZwSetEvent(*((HANDLE *)this + 9), (PLONG)&PreviousState);
            *a3 = 0;
          }
        }
      }
      else
      {
        v19 = *((_QWORD *)v6 + 9);
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v19 + 40)) >= 0 )
        {
          CFlipManager::ConsumerIFlipTokenSubmitted((CFlipManager *)(v19 + 32), v6);
          CPushLock::ReleaseLock((CPushLock *)(v19 + 40));
        }
      }
    }
    if ( a2 )
      ObfDereferenceObject(a2);
    goto LABEL_24;
  }
}
