void __fastcall CComposition::ProcessComposition(CRenderTargetManager **this, bool *a2)
{
  char v4; // r15
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  CRenderTargetManager *v8; // rax
  __int64 *v9; // rdx
  __int64 *i; // rcx
  int v11; // esi
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // ebp
  __int64 v17; // r8
  CRenderTargetManager *v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // esi
  int v22; // eax
  unsigned int v23; // ecx
  int updated; // eax
  unsigned int v25; // ecx
  int v26; // esi
  __int64 v27; // rax
  void *v28; // rbx
  char v29[8]; // [rsp+30h] [rbp-58h] BYREF
  void *lpMem; // [rsp+38h] [rbp-50h]
  _BYTE v31[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( CComposition::s_cRenderFailures > 0x3C )
  {
    v29[0] = 1;
    TriggerFailFastOnNextFailure(1, CComposition::s_hrExpectedError);
    CFailFastInScope::CaptureDxgkRingBuffer((CFailFastInScope *)v29);
    v4 = v29[0];
  }
  else
  {
    v4 = 0;
  }
  *a2 = 0;
  v5 = CComposition::PreRender((CComposition *)this);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x282u, 0LL);
  if ( *((_BYTE *)this + 1276) )
  {
    updated = CRenderTargetManager::UpdateMPOCaps(this[27]);
    v26 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, updated, 0x288u, 0LL);
    if ( !v7 || v7 >= 0 && v26 < 0 )
      v7 = v26;
    *((_BYTE *)this + 1276) = 0;
  }
  *a2 = 0;
  v8 = this[32];
  v9 = (__int64 *)*((_QWORD *)v8 + 6);
  for ( i = (__int64 *)*((_QWORD *)v8 + 5); i != v9; i += 13 )
  {
    v27 = *i;
    *(_QWORD *)(v27 + 80) = 0LL;
    *(_QWORD *)(v27 + 72) = 0LL;
  }
  v11 = 0;
  v12 = 0;
  if ( *((_DWORD *)this + 186) )
  {
    while ( 1 )
    {
      v22 = CCachedVisualImage::Snapshot(*((CCachedVisualImage **)this[90] + v12));
      v11 = v22;
      if ( v22 < 0 )
        break;
      if ( ++v12 >= *((_DWORD *)this + 186) )
        goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x84Eu, 0LL);
  }
LABEL_9:
  *((_DWORD *)this + 186) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 90, 8LL);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180353680, 3u, v11, 0x379u, 0LL);
  v14 = CRenderTargetManager::Render(this[27], a2);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180353680, 3u, v14, 0x37Cu, 0LL);
  if ( v11 )
  {
    if ( v11 < 0 )
      goto LABEL_46;
    if ( v16 >= 0 )
      goto LABEL_15;
  }
  v11 = v16;
  if ( v16 < 0 )
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0x28Du, 0LL);
LABEL_15:
  if ( !v7 || v7 >= 0 && v11 < 0 )
    v7 = v11;
  CMeshCacheManager::ReleaseUnusedCaches(this[35]);
  if ( !*a2 )
  {
    v19 = CComposition::PostPresent((CComposition *)this, 1);
    v21 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x295u, 0LL);
    if ( !v7 || v7 >= 0 && v21 < 0 )
      v7 = v21;
  }
  CComposition::UpdateRenderFailureCount(v7);
  if ( v7 >= 0 )
  {
    v18 = this[27];
    if ( *((_BYTE *)v18 + 581) )
    {
      if ( !*((_BYTE *)v18 + 582) )
      {
        v7 = 142213121;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED,
            v17,
            1LL,
            v31);
      }
    }
  }
  CComposition::ProcessRenderingStatus((CComposition *)this, v7);
  if ( v4 )
  {
    TriggerFailFastOnNextFailure(0, 0);
    v28 = lpMem;
    if ( lpMem )
    {
      MilWerUnregisterMemoryBlock(lpMem);
      operator delete(v28);
    }
  }
}
