void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // r14
  unsigned int v11; // esi
  __int64 v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  int v16; // edi
  int v17; // edx
  float v18; // xmm3_4
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 200, *(unsigned int *)(a1 + 176));
        break;
      case 2:
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 200));
        break;
      case 3:
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 200));
        break;
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle(a1 + 200, *(unsigned int *)(a1 + 176));
  }
  if ( *(_DWORD *)(a1 + 176) != a2 )
  {
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v23 = a2;
      v22 = v8;
      v24 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_18037DA08,
        v7,
        v8,
        (__int64)&v24,
        (__int64)&v22,
        (__int64)&v23);
    }
    *(_DWORD *)(a1 + 176) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v10 = &v24;
      v24 = *(_QWORD *)(a1 + 336);
      v11 = 0;
      v25 = *(_QWORD *)(a1 + 344);
      v26 = *(_QWORD *)(a1 + 328);
      do
      {
        v12 = *v10;
        v22 = a2;
        v13 = *(_DWORD *)(v12 + 424);
        v14 = v13 + 1;
        if ( v13 + 1 >= v13 )
        {
          if ( v14 > *(_DWORD *)(v12 + 420) )
          {
            v15 = DynArrayImpl<0>::AddMultipleAndSet(v12 + 400, 4, 1, &v22);
            if ( v15 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v15, 0xC0u, 0LL);
          }
          else
          {
            v9 = *(unsigned int *)(v12 + 424);
            *(_DWORD *)(*(_QWORD *)(v12 + 400) + 4 * v9) = a2;
            *(_DWORD *)(v12 + 424) = v14;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        ++v11;
        ++v10;
      }
      while ( v11 < 3 );
    }
    if ( a2 )
    {
      v16 = a2 - 1;
      if ( !v16 )
      {
        v18 = *(float *)(a1 + 136);
        v17 = 1;
        *(_DWORD *)(a1 + 188) = 0;
        *(float *)(a1 + 528) = v18;
LABEL_34:
        v20 = *(_DWORD *)(a1 + 88);
        v24 = *(_QWORD *)(a1 + 80);
        LODWORD(v25) = v20;
        CInteractionTracker::AddPendingStateChange(a1, v17, &v24, v18);
LABEL_35:
        CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
        goto LABEL_36;
      }
      if ( v16 != 2 || (*(_BYTE *)(a1 + 540) & 0x40) != 0 )
        goto LABEL_35;
      v17 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 540) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 656LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL));
        if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v19 + 152LL))(
               v19,
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 540) |= 0x80u;
      }
      v17 = 0;
    }
    v18 = *(float *)(a1 + 136);
    goto LABEL_34;
  }
LABEL_36:
  v21 = *(_QWORD *)(a1 + 640);
  if ( v21 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v21, a1, *(unsigned int *)(a1 + 176));
  }
}
