__int64 __fastcall FxDmaEnabler::PowerDown(FxDmaEnabler *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int level; // edi
  unsigned __int64 ObjectHandleUnchecked; // r14
  int globals; // esi
  const void *_a1; // rax
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int v8; // eax
  int (__fastcall *v9)(WDFDMAENABLER__ *); // rax
  int v10; // eax
  int (__fastcall *v11)(WDFDMAENABLER__ *); // rax
  int v12; // eax
  const void *v13; // rax
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d

  m_Globals = this->m_Globals;
  level = 0;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  globals = 0;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  }
  m_Method = this->m_EvtDmaEnablerSelfManagedIoStop.m_Method;
  if ( m_Method )
  {
    v8 = m_Method((WDFDMAENABLER__ *)ObjectHandleUnchecked);
    this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = v8;
    if ( v8 < 0 )
    {
      globals = 6;
      level = v8;
    }
  }
  v9 = this->m_EvtDmaEnablerDisable.m_Method;
  if ( v9 )
  {
    if ( !this->m_DmaEnablerFillFailed )
    {
      v10 = v9((WDFDMAENABLER__ *)ObjectHandleUnchecked);
      this->m_EvtDmaEnablerDisable.m_Status = v10;
      if ( v10 < 0 )
      {
        globals = 4;
        if ( level >= 0 )
          level = v10;
      }
    }
  }
  v11 = this->m_EvtDmaEnablerFlush.m_Method;
  if ( v11 )
  {
    if ( !this->m_DmaEnablerFillFailed && !this->m_DmaEnablerEnableFailed )
    {
      v12 = v11((WDFDMAENABLER__ *)ObjectHandleUnchecked);
      this->m_EvtDmaEnablerFlush.m_Status = v12;
      if ( v12 < 0 )
      {
        globals = 2;
        if ( level >= 0 )
          level = v12;
        goto LABEL_18;
      }
    }
  }
  if ( level < 0 )
  {
LABEL_18:
    v13 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qld(m_Globals, v14, v15, 0x1Bu, WPP_FxDmaEnabler_cpp_Traceguids, v13, globals, level);
  }
  return (unsigned int)level;
}
