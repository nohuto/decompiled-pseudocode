void __fastcall CFlipManager::ConsumerDwmApplyUpdate(
        CFlipManager *this,
        char *Object,
        struct CCompositionFrame *a3,
        struct CFlipPresentUpdate **a4)
{
  unsigned __int64 v5; // r12
  char *v6; // rsi
  char v8; // r13
  int v9; // r15d
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v11; // r14
  struct DXGGLOBAL *Global; // rax
  struct CFlipPresentUpdate *UpdateForPresentId; // rax
  __int64 v14; // r10
  struct CFlipPresentUpdate *v15; // rsi
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int (__fastcall *v19)(__int64, struct CFlipManagerSignal *); // rbx
  __int64 v20; // rax
  void (__fastcall *v21)(_QWORD, _QWORD); // rax
  int v22; // eax
  CFlipManager *v23; // rcx
  struct CFlipManagerSignal *v24; // rbx
  NTSTATUS updated; // eax
  CFlipManager *v26; // rcx
  char v27; // r12
  CCompositionFrame *i; // r9
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *v31; // rdx
  struct DXGGLOBAL *v32; // rax
  unsigned __int64 v33; // rax
  struct DXGGLOBAL *v34; // rax
  __int64 v35; // rdx
  char **v36; // rcx
  struct CFlipManagerSignal *v37; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY v38; // [rsp+28h] [rbp-20h] BYREF
  struct CFlipManagerToken *v39; // [rsp+90h] [rbp+48h] BYREF
  char *v40; // [rsp+98h] [rbp+50h]
  CCompositionFrame *v41; // [rsp+A0h] [rbp+58h]
  struct CFlipPresentUpdate **v42; // [rsp+A8h] [rbp+60h]

  v42 = a4;
  v41 = a3;
  v40 = Object;
  v5 = *((_QWORD *)a3 + 5) + (*((_QWORD *)a3 + 7) >> 1);
  v6 = Object;
  v39 = 0LL;
  v8 = 1;
  v9 = 0;
  if ( !*((_BYTE *)this + 32) && *((_QWORD *)this + 5) )
  {
    FlipManagerTokenObject::LockForWrite(Object, &v39);
    (*(void (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
    Flink = (struct _LIST_ENTRY *)*((_QWORD *)v39 + 12);
    v11 = *((_QWORD *)v39 + 10);
    v38.Flink = Flink;
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 104LL))(
      *((unsigned int *)this + 83),
      *((_QWORD *)v39 + 10));
    if ( v11 < *((_QWORD *)this + 31) )
      goto LABEL_44;
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, v11);
    v15 = UpdateForPresentId;
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL, v11);
LABEL_43:
      v6 = v40;
LABEL_44:
      v34 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*((_QWORD *)v34 + 38069) + 112LL))(
        *((unsigned int *)this + 83),
        v11);
      CFlipManagerToken::UnlockAndRelease(v39);
      if ( !v8 )
        return;
      goto LABEL_45;
    }
    if ( v14 != v11 || !CFlipManager::IsPresentCanceled(this, *((_QWORD *)UpdateForPresentId + 8)) )
      goto LABEL_15;
    if ( CEndpointResourceStateManager::IsSimpleUpdatePresent(v15) )
    {
      v18 = *((_QWORD *)v39 + 8);
      if ( !*(_BYTE *)(v18 + 78) && !*(_BYTE *)(v18 + 76) )
      {
        v9 = 3;
        goto LABEL_15;
      }
      v16 = DXGGLOBAL::GetGlobal();
      v17 = 1LL;
    }
    else
    {
      v16 = DXGGLOBAL::GetGlobal();
      v17 = 0LL;
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64))(*((_QWORD *)v16 + 38069) + 352LL))(
      *((unsigned int *)this + 83),
      v11,
      v17);
LABEL_15:
    if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
    {
      v37 = (struct CFlipManagerSignal *)*((_QWORD *)v39 + 11);
      if ( v37 )
      {
        v19 = *(unsigned int (__fastcall **)(__int64, struct CFlipManagerSignal *))(*((_QWORD *)DXGGLOBAL::GetGlobal()
                                                                                    + 38069)
                                                                                  + 64LL);
        v20 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v41 + 72LL))(v41);
        if ( v19(v20, v37) )
        {
LABEL_18:
          v8 = 0;
          goto LABEL_43;
        }
        Flink = v38.Flink;
      }
    }
    if ( v9 != 3 && *((_QWORD *)this + 31) != v11 || (unsigned __int64)Flink > v5 )
      goto LABEL_18;
    CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)v15 + 16));
    *((_DWORD *)v15 + 22) = v9;
    v21 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 160LL);
    v21(*((unsigned int *)this + 83), --*((_QWORD *)this + 21));
    v37 = 0LL;
    v22 = CFlipManagerSignal::Create(v11, v9 == 0, &v37);
    if ( v22 < 0 )
    {
      CFlipManager::MarkAsLost(this, (unsigned int)v22, 19LL, 0LL);
LABEL_42:
      CFlipManager::ReleaseKernelPresentUpdateReferences(v23, v15);
      *v42 = v15;
      goto LABEL_43;
    }
    v24 = v37;
    updated = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v37);
    v26 = this;
    if ( updated < 0 )
    {
LABEL_38:
      CFlipManager::MarkAsLost(v26, (unsigned int)updated, 19LL, 0LL);
      if ( v24 )
        (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v24)(v24, 1LL);
      goto LABEL_42;
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v15, 2u);
    v27 = 0;
    if ( v9 )
      goto LABEL_40;
    updated = CFlipManager::ApplyUpdateToConsumer(this, v15);
    v26 = this;
    if ( updated < 0 )
      goto LABEL_38;
    v38.Blink = &v38;
    v38.Flink = &v38;
    updated = CFlipManager::ConsumerDwmProcessUpdateTokens(this, v15, v39, &v38);
    if ( updated < 0 )
      goto LABEL_37;
    for ( i = v41; ; *((_QWORD *)i + 20) = v29 )
    {
      v29 = v38.Flink;
      if ( v38.Flink == &v38 )
        break;
      v27 = 1;
      if ( v38.Flink->Blink != &v38 )
        goto LABEL_49;
      v30 = v38.Flink->Flink;
      if ( v38.Flink->Flink->Blink != v38.Flink )
        goto LABEL_49;
      v38.Flink = v38.Flink->Flink;
      v30->Blink = &v38;
      v31 = (struct _LIST_ENTRY *)*((_QWORD *)i + 20);
      if ( v31->Flink != (struct _LIST_ENTRY *)((char *)i + 152) )
        goto LABEL_49;
      v29->Flink = (struct _LIST_ENTRY *)((char *)i + 152);
      v29->Blink = v31;
      v31->Flink = v29;
    }
    if ( !v27 )
    {
LABEL_40:
      v32 = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*((_QWORD *)v32 + 38069) + 296LL))(
        *((unsigned int *)this + 83),
        v11);
      v33 = (*(__int64 (__fastcall **)(CCompositionFrame *))(*(_QWORD *)v41 + 72LL))(v41);
      CFlipManager::ProcessSignal(this, v24, v33);
    }
    else
    {
      updated = CCompositionFrame::AddFlipManagerSignal(i, (CFlipManager *)((char *)this - 32), v24);
      if ( updated < 0 )
      {
LABEL_37:
        v26 = this;
        goto LABEL_38;
      }
    }
    CFlipManager::FreeExpiredCancels(this, v11);
    goto LABEL_42;
  }
LABEL_45:
  v35 = *((_QWORD *)v6 + 6);
  if ( *(char **)(v35 + 8) != v6 + 48 || (v36 = (char **)*((_QWORD *)v6 + 7), *v36 != v6 + 48) )
LABEL_49:
    __fastfail(3u);
  *v36 = (char *)v35;
  *(_QWORD *)(v35 + 8) = v36;
  ObfDereferenceObject(v6);
}
