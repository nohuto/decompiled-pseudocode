int __fastcall imp_WdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  int result; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Size; // edx
  unsigned int _a1; // eax
  unsigned __int16 v12; // r9
  int v13; // edi
  __int16 v14; // r8
  unsigned int v15; // r9d
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF

  pParent = 0LL;
  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 24);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtr(v4, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    m_Globals = pParent->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    if ( !Timer )
      FxVerifierNullBugCheck(pParent->m_Globals, retaddr);
    Size = Config->Size;
    if ( ((Config->Size - 24) & 0xFFFFFFE7) != 0 || Size == 48 )
    {
      v13 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, Size, 0x12u, 0xAu, WPP_FxTimerApi_cpp_Traceguids, Size, 40, -1073741820);
    }
    else
    {
      _a1 = Config->Period;
      if ( _a1 <= 0x7FFFFFFF )
      {
        if ( Size <= 0x18
          || _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pParent->m_Globals, Size, 0xDu)
          || (_a1 = Config->TolerableDelay, _a1 <= v15) )
        {
          if ( Size <= 0x20 || (_a1 = Config->TolerableDelay) == 0 || !Config->UseHighResolutionTimer )
          {
            result = FxValidateObjectAttributes(m_Globals, Attributes, 2);
            if ( result < 0 )
              return result;
            if ( !Config->Period || Attributes->ExecutionLevel != WdfExecutionLevelPassive )
              return FxTimer::_Create(m_Globals, Config, Attributes, pParent, Timer);
            v13 = -1073741637;
            WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimerApi_cpp_Traceguids, 0xC00000BB);
            return v13;
          }
          v12 = 14;
        }
        else
        {
          v12 = v14 - 1;
        }
      }
      else
      {
        v12 = 11;
      }
      v13 = -1073741811;
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, v12, WPP_FxTimerApi_cpp_Traceguids, _a1, -1073741811);
    }
    return v13;
  }
  return result;
}
