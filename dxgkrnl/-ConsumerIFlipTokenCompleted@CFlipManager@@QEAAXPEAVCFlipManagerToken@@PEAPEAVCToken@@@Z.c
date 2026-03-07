void __fastcall CFlipManager::ConsumerIFlipTokenCompleted(
        CFlipManager::PresentHistory **this,
        struct CFlipManagerToken *a2,
        struct _LIST_ENTRY ***a3)
{
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r14d
  unsigned __int64 v9; // rdx
  struct CFlipPresentUpdate *v10; // r10
  struct DXGGLOBAL *Global; // rax
  bool IsSimpleUpdatePresent; // al
  __int64 v13; // r10
  bool v14; // r11
  CFlipManager *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  int updated; // eax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v21; // rcx
  CFlipManager::PresentHistory *v22; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  int v24; // eax
  struct CFlipManagerSignal *v25; // rdi
  char v26; // r15
  int v27; // eax
  unsigned int v28; // ecx
  struct DXGGLOBAL *v29; // rax
  struct CFlipManagerSignal *v30; // [rsp+30h] [rbp-30h] BYREF
  struct _LIST_ENTRY v31; // [rsp+38h] [rbp-28h] BYREF
  struct CFlipPresentUpdate **v32[2]; // [rsp+48h] [rbp-18h] BYREF
  char v33; // [rsp+58h] [rbp-8h]
  struct CFlipPresentUpdate *UpdateForPresentId; // [rsp+B8h] [rbp+58h] BYREF

  if ( !*((_BYTE *)this + 32) )
  {
    v6 = *((_QWORD *)a2 + 8);
    v30 = 0LL;
    v7 = *(_QWORD *)(v6 + 96);
    v8 = *(_DWORD *)(v7 + 44);
    UpdateForPresentId = CFlipManager::GetUpdateForPresentId((CFlipManager *)this, *((_QWORD *)a2 + 10));
    v10 = UpdateForPresentId;
    if ( !UpdateForPresentId )
    {
      CFlipManager::MarkAsLost(this, 3221225473LL, 17LL, v9);
      return;
    }
    v32[0] = this;
    v32[1] = &UpdateForPresentId;
    v33 = 1;
    if ( !v8 && CFlipManager::IsPresentCanceled((CFlipManager *)this, v9) )
    {
      Global = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*((_QWORD *)Global + 38069) + 352LL))(
        *((unsigned int *)this + 83),
        *((_QWORD *)a2 + 10),
        2LL);
      v10 = UpdateForPresentId;
    }
    IsSimpleUpdatePresent = CEndpointResourceStateManager::IsSimpleUpdatePresent(v10);
    v15 = (CFlipManager *)this;
    if ( !IsSimpleUpdatePresent )
    {
      v16 = *(_QWORD *)(v13 + 64);
      v17 = 3221225473LL;
LABEL_9:
      CFlipManager::MarkAsLost(v15, v17, 19LL, v16);
LABEL_35:
      v33 = 0;
      lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator()(v32);
      return;
    }
    CFlipManager::PurgeSkippedTokens((CFlipManager *)this, *(_QWORD *)(v13 + 64), v14);
    if ( *((_BYTE *)this + 32) )
      goto LABEL_35;
    if ( !v8 )
    {
      v18 = CFlipManager::ApplyUpdateToConsumer((CFlipManager *)this, UpdateForPresentId);
      v15 = (CFlipManager *)this;
      if ( v18 < 0 )
      {
        v16 = 0LL;
        v17 = (unsigned int)v18;
        goto LABEL_9;
      }
      v31.Blink = &v31;
      v31.Flink = &v31;
      updated = CFlipManager::ConsumerDwmProcessUpdateTokens((CFlipManager *)this, UpdateForPresentId, a2, &v31);
      if ( updated < 0 )
      {
        v16 = 0LL;
        v17 = (unsigned int)updated;
        v15 = (CFlipManager *)this;
        goto LABEL_9;
      }
      while ( 1 )
      {
        Flink = v31.Flink;
        if ( v31.Flink == &v31 )
          break;
        if ( v31.Flink->Blink != &v31 || (v21 = v31.Flink->Flink, v31.Flink->Flink->Blink != v31.Flink) )
          __fastfail(3u);
        v31.Flink = v31.Flink->Flink;
        v21->Blink = &v31;
        *a3 = &Flink[-1].Blink;
      }
      v22 = this[3];
      if ( v22 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v22);
        *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 12);
        *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 10);
        *((_DWORD *)NextEntry + 10) = 8;
      }
    }
    CFlipManager::UpdateNextConsumerPresentIdForUpdate((CFlipManager *)this, UpdateForPresentId, 0);
    v33 = 0;
    lambda_cfa2151ea50fd6eac09f4642f8eb6082_::operator()(v32);
    v24 = CFlipManagerSignal::Create(*((_QWORD *)a2 + 10), v8 == 0, &v30);
    if ( v24 >= 0 )
    {
      v25 = v30;
      v26 = 1;
      v27 = CEndpointResourceStateManager::PrepareBufferSignals((CEndpointResourceStateManager *)(this + 13), v30);
      if ( v27 >= 0
        && ((CFlipManager::ProcessSignal((CFlipManager *)this, v25, 0xFFFFFFFFFFFFFFFFuLL), v26 = 0, !v8)
          ? (v28 = *(_QWORD *)(v7 + 32) == 0LL)
          : (v28 = 3),
            v27 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, *((_QWORD *)a2 + 10), 0LL, v28),
            v27 >= 0) )
      {
        CFlipManager::FreeExpiredCancels((CFlipManager *)this, *((_QWORD *)a2 + 10));
        v29 = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(_QWORD, _QWORD, bool, bool))(*((_QWORD *)v29 + 38069) + 184LL))(
          *((unsigned int *)this + 83),
          *((_QWORD *)a2 + 10),
          *a3 != 0LL,
          v8 != 0);
        CFlipManager::PostFlipManagerIFlipFrameStatistics((CFlipManager *)this, a2);
      }
      else
      {
        CFlipManager::MarkAsLost(this, (unsigned int)v27, 19LL, 0LL);
        if ( v26 && v25 )
          (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))v25)(v25, 1LL);
      }
    }
    else
    {
      CFlipManager::MarkAsLost(this, (unsigned int)v24, 19LL, 0LL);
    }
    if ( v33 )
      goto LABEL_35;
  }
}
