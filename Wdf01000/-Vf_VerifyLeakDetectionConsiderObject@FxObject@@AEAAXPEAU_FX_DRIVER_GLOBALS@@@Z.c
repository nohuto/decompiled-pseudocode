void __fastcall FxObject::Vf_VerifyLeakDetectionConsiderObject(FxObject *this, _FX_DRIVER_GLOBALS *a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rbx
  int v5; // edx
  unsigned int level; // edi
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  FxVerifyLeakDetection = m_Globals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection
    && FxVerifyLeakDetection->Enabled
    && (FxVerifierIsDebugInfoFlagSetForType(
          m_Globals->DebugExtension->ObjectDebugInfo,
          this->m_Type,
          FxObjectDebugTrackObjectCount)
     || (_WORD)v5 == 4098) )
  {
    if ( v5 == 4098 )
    {
      if ( _InterlockedIncrement(&FxVerifyLeakDetection->DeviceCnt) >= 2 )
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, FxVerifyLeakDetection->Limit);
      goto LABEL_11;
    }
    if ( v5 != 4104 || BYTE5(this[2].__vftable) == 2 )
    {
LABEL_11:
      BYTE4(this[-1].m_ChildEntry.Blink) = 1;
      level = _InterlockedIncrement(&FxVerifyLeakDetection->ObjectCnt);
      if ( level == FxVerifyLeakDetection->LimitScaled )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids);
        WPP_IFR_SF_DDD(
          this->m_Globals,
          v7,
          v8,
          v9,
          traceGuid,
          level,
          FxVerifyLeakDetection->Limit,
          FxVerifyLeakDetection->LimitScaled);
        FxVerifierDbgBreakPoint(this->m_Globals);
        FxVerifyLeakDetection->Enabled = 0;
      }
    }
  }
}
