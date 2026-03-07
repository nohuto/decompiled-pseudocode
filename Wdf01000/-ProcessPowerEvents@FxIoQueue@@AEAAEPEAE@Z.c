char __fastcall FxIoQueue::ProcessPowerEvents(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v6; // ecx
  __int32 v7; // ecx
  __int32 v8; // ecx
  int v9; // ecx
  _LIST_ENTRY *p_m_DriverOwned; // rsi
  unsigned __int8 v11; // al
  const void *ObjectHandleUnchecked; // rax
  unsigned __int16 v13; // r9
  const void *v14; // rax
  unsigned __int16 v15; // r9
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *v20; // rdx
  FxRequestBase *v21; // rsi
  FxIoQueue *v22; // rax
  unsigned int v23; // r14d
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v26; // r8
  unsigned __int8 v27; // r8
  WDFQUEUE__ *v28; // rax
  WDFREQUEST__ *v29; // r8
  __int64 v30; // r8
  unsigned __int8 v31; // al
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *v34; // rdx
  _LIST_ENTRY *v35; // rdx
  FxIoQueueIoStop m_IoStop; // xmm0
  FxIoQueue *v37; // rax
  unsigned int v38; // r14d
  const void *v39; // rax
  const void *v40; // rdx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r8
  WDFQUEUE__ *v43; // rax
  WDFREQUEST__ *v44; // r8
  unsigned __int8 v45; // r8
  __int32 v46; // ecx
  __int32 v47; // ecx
  __int32 v48; // ecx
  const void *v49; // rax
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v52; // rdx
  _LIST_ENTRY *Blink; // rdx
  const void *v54; // rax
  const void *v55; // rdx
  unsigned __int8 v56; // r8
  WDFQUEUE__ *v57; // rax
  void *v58; // r8
  unsigned __int8 FxVerboseOn; // al
  _LIST_ENTRY *v60; // rcx
  _LIST_ENTRY *p_m_PowerDriverNotified; // rsi
  char v62; // r14
  _LIST_ENTRY *v63; // rcx
  FxIoQueueIoResume **p_resumeCallback; // rdx
  _LIST_ENTRY *v65; // rdx
  _LIST_ENTRY *v66; // rax
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxIoQueueIoResume *v68; // rax
  const void *v69; // rax
  unsigned __int16 v70; // r9
  unsigned __int8 v71; // cl
  const void *v72; // rax
  FxIoQueueIoResume resumeCallback; // [rsp+40h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState > FxIoQueuePowerPurgeNotifyingDriver )
  {
    v46 = m_PowerState - 9;
    if ( !v46 )
      goto LABEL_84;
    v47 = v46 - 1;
    if ( !v47 )
    {
      this->m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      FxVerboseOn = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink != p_m_DriverOwned )
      {
        if ( FxVerboseOn )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
          v13 = 96;
          goto LABEL_79;
        }
        goto LABEL_80;
      }
      if ( !FxVerboseOn )
        return 1;
      v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v15 = 97;
LABEL_83:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v15, WPP_FxIoQueue_cpp_Traceguids, v14);
      return 1;
    }
    v48 = v47 - 1;
    if ( v48 )
    {
      if ( v48 == 1 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v49 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, v49);
        }
        this->m_PowerState = FxIoQueuePowerOn;
      }
      return 0;
    }
    p_m_PowerNotify = &this->m_PowerNotify;
    Flink = this->m_PowerNotify.Flink;
    if ( Flink == &this->m_PowerNotify )
    {
      this->m_PowerState = FxIoQueuePowerRestartingDriverNotified;
      return 1;
    }
    if ( Flink->Blink != p_m_PowerNotify )
      goto LABEL_96;
    v52 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_96;
    p_m_PowerNotify->Flink = v52;
    v52->Blink = p_m_PowerNotify;
    Blink = this->m_DriverOwned.Blink;
    if ( Blink->Flink != &this->m_DriverOwned )
      goto LABEL_96;
    Flink->Flink = &this->m_DriverOwned;
    v21 = (FxRequestBase *)&Flink[-19];
    Flink->Blink = Blink;
    Blink->Flink = Flink;
    this->m_DriverOwned.Blink = Flink;
    resumeCallback = this->m_IoResume;
    if ( !_mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] || v21->m_Canceled )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v15 = 99;
        goto LABEL_83;
      }
      return 1;
    }
    if ( m_Globals->FxVerboseOn )
    {
      FxObject::GetObjectHandleUnchecked(v21);
      v54 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v54, v55);
    }
    FxObject::AddRef(v21, (void *)0x646C6F48, 5602, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v56);
    FxObject::GetObjectHandleUnchecked(v21);
    v57 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&resumeCallback, v57, v58);
    v30 = 5608LL;
LABEL_55:
    v21->Release(v21, (void *)1684827976, v30, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v45);
    return 1;
  }
  if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
  {
    v32 = &this->m_PowerNotify;
    v33 = this->m_PowerNotify.Flink;
    if ( v33 == &this->m_PowerNotify )
    {
      this->m_PowerState = FxIoQueuePowerPurgeDriverNotified;
      return 1;
    }
    if ( v33->Blink != v32 )
      goto LABEL_96;
    v34 = v33->Flink;
    if ( v33->Flink->Blink != v33 )
      goto LABEL_96;
    v32->Flink = v34;
    v34->Blink = v32;
    v35 = this->m_PowerDriverNotified.Blink;
    if ( v35->Flink != &this->m_PowerDriverNotified )
      goto LABEL_96;
    v33->Flink = &this->m_PowerDriverNotified;
    v21 = (FxRequestBase *)&v33[-19];
    v33->Blink = v35;
    v35->Flink = v33;
    this->m_PowerDriverNotified.Blink = v33;
    m_IoStop = this->m_IoStop;
    BYTE1(v33[3].Flink) = 0;
    resumeCallback = (FxIoQueueIoResume)m_IoStop;
    if ( !_mm_srli_si128((__m128i)m_IoStop, 8).m128i_u64[0] || v21->m_Canceled )
      return 1;
    v37 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    if ( v37 == (FxIoQueue *)&this->m_DriverCancelable )
    {
LABEL_49:
      v38 = 2;
    }
    else
    {
      while ( ($B4160BD2E650AF3CBE6CB685E9139346 *)v37[-1].m_IoPkgListNode.m_ListEntry.Blink != &v21->120 )
      {
        v37 = (FxIoQueue *)v37->FxNonPagedObject::FxObject::__vftable;
        if ( v37 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_49;
      }
      v38 = 268435458;
    }
    if ( m_Globals->FxVerboseOn )
    {
      FxObject::GetObjectHandleUnchecked(v21);
      v39 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v39, v40);
    }
    FxObject::AddRef(v21, (void *)0x646C6F48, 5361, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v41);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v21, 512, v42);
    FxObject::GetObjectHandleUnchecked(v21);
    v43 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v43, v44, v38);
    v30 = 5371LL;
    goto LABEL_55;
  }
  v6 = m_PowerState - 3;
  if ( !v6 )
  {
    if ( this->m_Dispatching == 1 )
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    this->m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
    p_m_DriverOwned = &this->m_DriverOwned;
    v31 = m_Globals->FxVerboseOn;
    if ( p_m_DriverOwned->Flink != p_m_DriverOwned )
    {
      if ( v31 )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v13 = 86;
        goto LABEL_79;
      }
LABEL_80:
      v60 = p_m_DriverOwned->Flink;
      this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
      this->m_PowerNotify.Flink = v60;
      v60->Blink = &this->m_PowerNotify;
      this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
      p_m_DriverOwned->Blink = p_m_DriverOwned;
      p_m_DriverOwned->Flink = p_m_DriverOwned;
      return 1;
    }
    if ( v31 )
    {
      v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v15 = 87;
      goto LABEL_83;
    }
    return 1;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v16 = &this->m_PowerNotify;
    v17 = this->m_PowerNotify.Flink;
    if ( v17 == &this->m_PowerNotify )
    {
      this->m_PowerState = FxIoQueuePowerStoppingDriverNotified;
      return 1;
    }
    if ( v17->Blink == v16 )
    {
      v19 = v17->Flink;
      if ( v17->Flink->Blink == v17 )
      {
        v16->Flink = v19;
        v19->Blink = v16;
        v20 = this->m_PowerDriverNotified.Blink;
        if ( v20->Flink == &this->m_PowerDriverNotified )
        {
          v17->Flink = &this->m_PowerDriverNotified;
          v21 = (FxRequestBase *)&v17[-19];
          v17->Blink = v20;
          v20->Flink = v17;
          this->m_PowerDriverNotified.Blink = v17;
          resumeCallback = (FxIoQueueIoResume)this->m_IoStop;
          if ( !_mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] || v21->m_Canceled )
            return 1;
          v22 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
          if ( v22 == (FxIoQueue *)&this->m_DriverCancelable )
          {
LABEL_24:
            v23 = 1;
          }
          else
          {
            while ( ($B4160BD2E650AF3CBE6CB685E9139346 *)v22[-1].m_IoPkgListNode.m_ListEntry.Blink != &v21->120 )
            {
              v22 = (FxIoQueue *)v22->FxNonPagedObject::FxObject::__vftable;
              if ( v22 == (FxIoQueue *)&this->m_DriverCancelable )
                goto LABEL_24;
            }
            v23 = 268435457;
          }
          if ( m_Globals->FxVerboseOn )
          {
            FxObject::GetObjectHandleUnchecked(v21);
            _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
          }
          FxObject::AddRef(
            v21,
            (void *)0x646C6F48,
            5279,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Unlock(this, *PreviousIrql, v26);
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags(v21, 512, v27);
          FxObject::GetObjectHandleUnchecked(v21);
          v28 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
          FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v28, v29, v23);
          v30 = 5289LL;
          goto LABEL_55;
        }
      }
    }
LABEL_96:
    __fastfail(3u);
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      this->m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      v11 = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink != p_m_DriverOwned )
      {
        if ( v11 )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
          v13 = 88;
LABEL_79:
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v13, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
          goto LABEL_80;
        }
        goto LABEL_80;
      }
      if ( v11 )
      {
        v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        v15 = 89;
        goto LABEL_83;
      }
      return 1;
    }
    return 0;
  }
LABEL_84:
  p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
  v62 = 0;
  v63 = this->m_PowerDriverNotified.Flink;
  resumeCallback.Method = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))&resumeCallback;
  p_resumeCallback = (FxIoQueueIoResume **)&resumeCallback;
  resumeCallback.m_CallbackLock = (FxCallbackLock *)&resumeCallback;
  if ( v63 == &this->m_PowerDriverNotified )
    goto LABEL_92;
  do
  {
    v65 = v63->Flink;
    if ( (unsigned __int8)(BYTE1(v63[3].Flink) - 1) <= 1u )
    {
      if ( v65->Blink != v63 )
        goto LABEL_96;
      v66 = v63->Blink;
      if ( v66->Flink != v63 )
        goto LABEL_96;
      v66->Flink = v65;
      v65->Blink = v66;
      Method = resumeCallback.Method;
      if ( *(FxIoQueueIoResume **)resumeCallback.Method != &resumeCallback )
        goto LABEL_96;
      v63->Blink = (_LIST_ENTRY *)resumeCallback.Method;
      v63->Flink = (_LIST_ENTRY *)&resumeCallback;
      *(_QWORD *)Method = v63;
      resumeCallback.Method = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))v63;
    }
    v63 = v65;
  }
  while ( v65 != p_m_PowerDriverNotified );
  while ( 1 )
  {
    p_resumeCallback = (FxIoQueueIoResume **)resumeCallback.m_CallbackLock;
LABEL_92:
    if ( p_resumeCallback == (FxIoQueueIoResume **)&resumeCallback )
      break;
    if ( p_resumeCallback[1] != &resumeCallback )
      goto LABEL_96;
    v68 = *p_resumeCallback;
    if ( (FxIoQueueIoResume **)(*p_resumeCallback)->Method != p_resumeCallback )
      goto LABEL_96;
    resumeCallback.m_CallbackLock = (FxCallbackLock *)*p_resumeCallback;
    v68->Method = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *))&resumeCallback;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)(p_resumeCallback - 38), PreviousIrql);
    v62 = 1;
  }
  if ( p_m_PowerDriverNotified->Flink == p_m_PowerDriverNotified )
  {
    if ( !this->m_TwoPhaseCompletions )
    {
      v71 = m_Globals->FxVerboseOn;
      if ( this->m_Dispatching == 1 )
      {
        if ( v71 )
        {
          v72 = (const void *)FxObject::GetObjectHandleUnchecked(this);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v72);
        }
        this->m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !v71 )
        return v62;
      v69 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v70 = 95;
      goto LABEL_109;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v69 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v70 = 93;
LABEL_109:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v70, WPP_FxIoQueue_cpp_Traceguids, v69);
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v69 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v70 = 92;
    goto LABEL_109;
  }
  return v62;
}
