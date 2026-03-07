void __fastcall CManipulationManager::OnInteractionUpdate(struct CComposition **this)
{
  int *v2; // r13
  char v3; // r12
  __int64 v4; // rdx
  unsigned int *v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // r9
  CVisual *v12; // r15
  struct CInteraction *v13; // rsi
  __int64 v14; // rdx
  int v15; // edx
  int v16; // edx
  void *v17; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  const struct CInteraction *v23; // rdx
  BOOL v24; // eax
  const struct CInteraction *v25; // rdx
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  const struct CInteraction *v31; // rdx
  const char *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // r9d
  unsigned int v37; // ecx
  const char *v38; // rax
  const struct CInteraction *v39; // rdx
  BOOL v40; // eax
  const struct CInteraction *v41; // rdx
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  const struct CInteraction *v47; // rdx
  const char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // r9d
  struct CInteraction *InteractionInternal; // rax
  CResource *v53; // rcx
  struct CComposition *v54; // r14
  __int64 v55; // rax
  void (__fastcall *v56)(struct CComposition *, unsigned __int64, CResource **); // r12
  CResource *v57; // rcx
  void *v58; // rcx
  __int64 v59; // [rsp+A8h] [rbp-80h] BYREF
  CResource *updated; // [rsp+B0h] [rbp-78h] BYREF
  int v61; // [rsp+B8h] [rbp-70h] BYREF
  int v62; // [rsp+BCh] [rbp-6Ch] BYREF
  int v63; // [rsp+C0h] [rbp-68h] BYREF
  BOOL v64; // [rsp+C4h] [rbp-64h] BYREF
  BOOL v65; // [rsp+C8h] [rbp-60h] BYREF
  BOOL v66; // [rsp+CCh] [rbp-5Ch] BYREF
  int v67; // [rsp+D0h] [rbp-58h] BYREF
  int v68; // [rsp+D4h] [rbp-54h] BYREF
  BOOL v69; // [rsp+D8h] [rbp-50h] BYREF
  BOOL v70; // [rsp+DCh] [rbp-4Ch] BYREF
  BOOL v71; // [rsp+E0h] [rbp-48h] BYREF
  int v72; // [rsp+E4h] [rbp-44h] BYREF
  int v73; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v74; // [rsp+ECh] [rbp-3Ch] BYREF
  int v75; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v77; // [rsp+100h] [rbp-28h] BYREF
  __int64 v78; // [rsp+108h] [rbp-20h] BYREF
  __int64 v79; // [rsp+110h] [rbp-18h] BYREF
  __int64 v80; // [rsp+118h] [rbp-10h] BYREF
  __int64 v81; // [rsp+120h] [rbp-8h] BYREF
  __int64 v82; // [rsp+128h] [rbp+0h] BYREF
  unsigned __int64 v83; // [rsp+130h] [rbp+8h]
  __int64 v84; // [rsp+138h] [rbp+10h] BYREF
  __int64 v85; // [rsp+140h] [rbp+18h] BYREF
  __int64 v86; // [rsp+148h] [rbp+20h] BYREF
  __int64 v87; // [rsp+150h] [rbp+28h] BYREF
  _BYTE v88[48]; // [rsp+158h] [rbp+30h] BYREF
  _BYTE v89[48]; // [rsp+188h] [rbp+60h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v88, "GestureTargetingUpdate", 0LL);
  v2 = &v63;
  CManipulationManager::LockComposition(this[2], 1);
  v3 = 0;
  v75 = 0;
  do
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v89,
      "GestureTargetingUpdateEvent",
      (const struct InputTraceLogging::PerfRegion *)v88);
    v5 = (unsigned int *)CQueue<CManipulationManager::InteractionUpdate *>::Remove(
                           &CManipulationManager::s_InteractionUpdateQueue,
                           v4,
                           v2);
    v7 = v5;
    v2 = 0LL;
    if ( !v5 )
      goto LABEL_17;
    v8 = *v5 - 5;
    if ( v8 && (v9 = v8 - 1) != 0 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v19 = v10 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            v20 = wil::details::static_lazy<InputTraceLogging>::get(
                    v6,
                    _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
            v11 = *(_DWORD **)(v20 + 8);
            if ( *v11 > 4u )
            {
              if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v20 + 8), 2048LL) )
              {
                v37 = v7[11];
                if ( v37 )
                {
                  if ( v37 == 1 )
                    v38 = "Y";
                  else
                    v38 = "UNKNOWN";
                }
                else
                {
                  v38 = "X";
                }
                v39 = (const struct CInteraction *)*((_QWORD *)v7 + 2);
                v78 = (__int64)v38;
                LOBYTE(v59) = (v7[16] & 2) != 0;
                if ( v39 )
                {
                  v81 = *((_QWORD *)v39 + 214);
                  v40 = *((_QWORD *)v39 + 35) != 0LL;
                }
                else
                {
                  v81 = 0LL;
                  v40 = 0;
                }
                v69 = v40;
                v70 = InputTraceLogging::InteractionInputTransparency(v39);
                v71 = InputTraceLogging::InteractionFurtherProcessingForInput(v41);
                if ( v42 )
                  v43 = *(_BYTE *)(v42 + 192) & 1;
                else
                  v43 = 0;
                v72 = v43;
                if ( v42 )
                {
                  v62 = *(_DWORD *)(v42 + 188);
                  v44 = 0LL;
                  v45 = *(_QWORD *)(v42 + 104);
                  if ( v45 )
                    v44 = *(_QWORD *)(v45 + 64);
                  v82 = v44;
                  v46 = *(_DWORD *)(v42 + 1704);
                }
                else
                {
                  v62 = 0;
                  v46 = 0;
                  v82 = 0LL;
                }
                v73 = v46;
                v77 = (__int64)InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v42);
                v48 = InputTraceLogging::InteractionSourceTypeToString(v47);
                v49 = *v7;
                v76 = (__int64)v48;
                v86 = v50;
                v87 = v50;
                updated = (CResource *)InputTraceLogging::MidManipulationUpdateTypeToString(v49);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapSz<char>>(
                  v51,
                  (int)&dword_180379B31,
                  (__int64)&updated,
                  (__int64)&v87,
                  (__int64)&v86,
                  (__int64)&v76,
                  (__int64)&v77,
                  (__int64)&v73,
                  (__int64)&v82,
                  (__int64)&v62,
                  (__int64)&v72,
                  (__int64)&v71,
                  (__int64)&v70,
                  (__int64)&v69,
                  (__int64)&v81,
                  (__int64)&v59,
                  (__int64)&v78);
              }
            }
          }
          else
          {
            v22 = wil::details::static_lazy<InputTraceLogging>::get(
                    v6,
                    _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
            v11 = *(_DWORD **)(v22 + 8);
            if ( *v11 > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v22 + 8), 2048LL) )
            {
              v23 = (const struct CInteraction *)*((_QWORD *)v7 + 2);
              updated = (CResource *)*((_QWORD *)v7 + 1);
              if ( v23 )
              {
                v79 = *((_QWORD *)v23 + 214);
                v24 = *((_QWORD *)v23 + 35) != 0LL;
              }
              else
              {
                v79 = 0LL;
                v24 = 0;
              }
              v64 = v24;
              v65 = InputTraceLogging::InteractionInputTransparency(v23);
              v66 = InputTraceLogging::InteractionFurtherProcessingForInput(v25);
              if ( v26 )
                v27 = *(_BYTE *)(v26 + 192) & 1;
              else
                v27 = 0;
              v67 = v27;
              if ( v26 )
              {
                v61 = *(_DWORD *)(v26 + 188);
                v28 = 0LL;
                v29 = *(_QWORD *)(v26 + 104);
                if ( v29 )
                  v28 = *(_QWORD *)(v29 + 64);
                v80 = v28;
                v30 = *(_DWORD *)(v26 + 1704);
              }
              else
              {
                v61 = 0;
                v30 = 0;
                v80 = 0LL;
              }
              v68 = v30;
              v76 = (__int64)InputTraceLogging::InteractionDefaultToString((const struct CInteraction *)v26);
              v32 = InputTraceLogging::InteractionSourceTypeToString(v31);
              v33 = *v7;
              v77 = (__int64)v32;
              v84 = v34;
              v85 = v34;
              v78 = InputTraceLogging::MidManipulationUpdateTypeToString(v33);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                v35,
                (int)&dword_18037A214,
                (__int64)&v78,
                (__int64)&v85,
                (__int64)&v84,
                (__int64)&v77,
                (__int64)&v76,
                (__int64)&v68,
                (__int64)&v80,
                (__int64)&v61,
                (__int64)&v67,
                (__int64)&v66,
                (__int64)&v65,
                (__int64)&v64,
                (__int64)&v79,
                (__int64)&updated);
            }
          }
        }
        else
        {
          InputTraceLogging::GestureTargeting::TemporaryInteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)v7);
        }
      }
      else
      {
        InputTraceLogging::GestureTargeting::InteractionConfigurationUpdate((const struct CManipulationManager::InteractionUpdate *)v7);
      }
    }
    else
    {
      InputTraceLogging::GestureTargeting::UpdateCapture((const struct CManipulationManager::InteractionUpdate *)v7);
    }
    v12 = (CVisual *)*((_QWORD *)v7 + 1);
    v13 = (struct CInteraction *)*((_QWORD *)v7 + 2);
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    v14 = *v7;
    if ( (int)v14 <= 5 )
    {
      if ( (_DWORD)v14 == 5 )
      {
        CManipulationManager::OnCapturePointer((CManipulationManager *)this, v7[6], v13);
      }
      else
      {
        if ( (unsigned int)v14 >= 4 )
        {
          if ( (_DWORD)v14 == 4 )
          {
            updated = 0LL;
            InteractionInternal = CVisual::GetInteractionInternal(v12);
            CManipulationContext::FindWorkspace((struct MCCollections *)(this + 20), InteractionInternal, &v74);
            v53 = updated;
            v54 = this[2];
            v83 = v74 | 0xFFFFFFFE00000000uLL;
            v55 = *(_QWORD *)v54;
            updated = 0LL;
            v56 = *(void (__fastcall **)(struct CComposition *, unsigned __int64, CResource **))(v55 + 56);
            if ( v53 )
              CResource::InternalRelease(v53);
            v56(v54, v83, &updated);
            v57 = updated;
            if ( updated )
            {
              CManipulationContext::OnVisualPropertyChange(v12, updated);
              v57 = updated;
            }
            v3 = 1;
            if ( v57 )
              CResource::InternalRelease(v57);
          }
          goto LABEL_12;
        }
        CManipulationContext::InvalidateMCs(this + 20, v12, v13, (unsigned int)v14, &v75);
      }
LABEL_75:
      v3 = 1;
      goto LABEL_12;
    }
    v15 = v14 - 6;
    if ( !v15 )
    {
      CManipulationManager::OnCaptureManipulation((CManipulationManager *)this, v13, v7[6], *((_QWORD *)v7 + 4));
      goto LABEL_12;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      CInteractionProcessor::SetInteractionConfiguration((char *)v13 + 352, v7[10], v7[11], *((_QWORD *)v7 + 7), v7[12]);
      v17 = (void *)*((_QWORD *)v7 + 7);
      if ( v17 )
        operator delete(v17);
      goto LABEL_12;
    }
    v21 = v16 - 1;
    if ( !v21 )
    {
      LOBYTE(v11) = v7[16] & 1;
      CInteractionProcessor::SetTemporaryConfiguration(
        (_DWORD)v13 + 352,
        v7[11],
        v7[10],
        (_DWORD)v11,
        **((_DWORD **)v7 + 7));
      v58 = (void *)*((_QWORD *)v7 + 7);
      if ( v58 )
        operator delete(v58, 0LL);
      goto LABEL_12;
    }
    v14 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 != 1 )
        goto LABEL_12;
      goto LABEL_75;
    }
    LODWORD(v14) = (v7[16] & 2) != 0;
    CInteractionProcessor::SetRailsEnabled((char *)v13 + 352, v14, v7[11]);
LABEL_12:
    if ( v12 )
      CQueue<CResource *>::Insert(this + 10, v14, v12);
    if ( v13 )
      CQueue<CResource *>::Insert(this + 10, v14, v13);
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
      (CManipulationManager::InteractionUpdate *)v7,
      v14);
LABEL_17:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v89);
  }
  while ( v63-- );
  if ( v3 )
    CManipulationContext::Revalidate((struct MCCollections *)(this + 20));
  ReleaseSRWLockShared((PSRWLOCK)this[2] + 84);
  if ( *((_DWORD *)this + 24) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this[2] + 82) + 32LL))(
      *((_QWORD *)this[2] + 82),
      0LL,
      0x4000LL);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v88);
}
