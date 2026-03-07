__int64 __fastcall CFlipManager::CreatePresentUpdateForProducer(
        CFlipManager *this,
        char a2,
        __int64 a3,
        unsigned __int8 a4,
        struct CFlipPropertySet *a5,
        struct CFlipPresentUpdate **a6,
        struct FlipManagerTokenIFlipInfo **a7)
{
  struct FlipManagerObject *v7; // r14
  int v8; // ebp
  int v12; // esi
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  struct CFlipPresentUpdate *v15; // rbx
  __int64 v16; // r9
  _QWORD *v17; // rdx
  int v18; // eax
  CEndpointResourceStateManager *v19; // rbp
  struct FlipManagerObject *v20; // r8
  CEndpointResourceStateManager *v21; // rcx
  struct CFlipPresentUpdate *v22; // rdx
  int v23; // eax
  CFlipManager::PresentHistory *v24; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v7 = (CFlipManager *)((char *)this - 32);
  v8 = a4;
  v12 = -1073741823;
  if ( *((_QWORD *)this + 6) == 1LL )
  {
    v13 = *((_QWORD *)this + 29);
    if ( v13 > 0xFFFFFFFF )
      CFlipManager::MarkAsLost(this, 3221225473LL, 22LL, v13);
  }
  if ( !*((_BYTE *)this + 32) )
  {
    v14 = DXGQUOTAALLOCATOR<256,1970291526>::operator new();
    v15 = (struct CFlipPresentUpdate *)v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v16 = *((_QWORD *)this + 29);
    *(_QWORD *)(v14 + 8) = 0LL;
    v17 = (_QWORD *)((v14 + 24) & -(__int64)(v14 != -16));
    v17[1] = v17;
    *v17 = v17;
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_DWORD *)(v14 + 88) = 0;
    *(_QWORD *)v14 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
    *(_QWORD *)(v14 + 16) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
    *(_QWORD *)(v14 + 64) = v16;
    *(_BYTE *)(v14 + 72) = a2;
    *(_QWORD *)(v14 + 80) = a3;
    if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
    {
      v18 = *((_DWORD *)this + 82);
      if ( !v18 )
      {
        v18 = v8 + 1;
        *((_DWORD *)this + 82) = v8 + 1;
      }
      v19 = (CFlipManager *)((char *)this + 56);
      v20 = v7;
      v21 = (CFlipManager *)((char *)this + 56);
      v22 = v15;
      if ( v18 == 2 )
      {
        v23 = CEndpointResourceStateManager::PrepareCompTexOptimizedUpdateForStateManager(v21, v15, v7);
LABEL_13:
        v12 = v23;
        if ( v23 < 0
          || *((_QWORD *)this + 6) == 1LL
          && (v12 = CEndpointResourceStateManager::PrepareIFlipInfo(v19, a5, *((_DWORD *)this + 83), v15, a7), v12 < 0) )
        {
          (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
        }
        else
        {
          CFlipPresentUpdate::SetFlipPropertySet(v15, a5);
          v24 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
          if ( v24 )
          {
            NextEntry = CFlipManager::PresentHistory::GetNextEntry(v24);
            *((_DWORD *)NextEntry + 10) = 0;
            *((_QWORD *)NextEntry + 2) = *((_QWORD *)v15 + 8);
          }
          *a6 = v15;
        }
        return (unsigned int)v12;
      }
    }
    else
    {
      v19 = (CFlipManager *)((char *)this + 56);
      v20 = v7;
      v21 = (CFlipManager *)((char *)this + 56);
      v22 = v15;
    }
    v23 = CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(v21, v22, v20);
    goto LABEL_13;
  }
  return (unsigned int)v12;
}
