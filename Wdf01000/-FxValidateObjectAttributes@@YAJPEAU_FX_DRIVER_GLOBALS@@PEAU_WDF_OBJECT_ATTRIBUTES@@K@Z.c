__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *_a3; // rcx
  const void *ContextSizeOverride; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  unsigned int v9; // ebx
  __int64 ContextSize; // rax
  unsigned __int64 v11; // r11
  void *ParentObject; // rcx

  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      _a3 = Attributes->ContextTypeInfo;
      if ( _a3 )
      {
        if ( ((_a3->Size - 24) & 0xFFFFFFEF) != 0 )
        {
          v9 = -1073741820;
          WPP_IFR_SF_qqddd(
            FxDriverGlobals,
            (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
            6u,
            0xCu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            _a3,
            _a3->Size,
            40,
            -1073741820);
          return v9;
        }
        ContextSize = _a3->ContextSize;
        if ( ContextSize && !_a3->ContextName )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qqqd(
            FxDriverGlobals,
            2u,
            6u,
            0xDu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            _a3,
            ContextSize,
            -1071644151);
          return v9;
        }
      }
      ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
      if ( ContextSizeOverride )
      {
        if ( !_a3 )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qid(
            FxDriverGlobals,
            2u,
            6u,
            0xEu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            (__int64)ContextSizeOverride,
            -1071644151);
          return v9;
        }
        v11 = _a3->ContextSize;
        if ( (unsigned __int64)ContextSizeOverride < v11 )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qqqd(
            FxDriverGlobals,
            2u,
            6u,
            0xFu,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ContextSizeOverride,
            v11,
            -1071644151);
          return v9;
        }
      }
      if ( (Flags & 1) == 0 )
      {
        if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
        {
          v9 = -1071644142;
          WPP_IFR_SF_qd(
            FxDriverGlobals,
            2u,
            0x12u,
            0x11u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            -1071644142);
          return v9;
        }
        goto LABEL_7;
      }
      ParentObject = Attributes->ParentObject;
      if ( !ParentObject )
      {
LABEL_7:
        ExecutionLevel = Attributes->ExecutionLevel;
        if ( ExecutionLevel == WdfExecutionLevelInvalid || ExecutionLevel > WdfExecutionLevelDispatch )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x12u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ExecutionLevel,
            0xC0200209);
          return v9;
        }
        SynchronizationScope = Attributes->SynchronizationScope;
        if ( SynchronizationScope == WdfSynchronizationScopeInvalid
          || SynchronizationScope > WdfSynchronizationScopeNone )
        {
          v9 = -1071644151;
          WPP_IFR_SF_qdd(
            FxDriverGlobals,
            2u,
            6u,
            0x13u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            SynchronizationScope,
            0xC0200209);
          return v9;
        }
        if ( (Flags & 4) == 0
          && SynchronizationScope != WdfSynchronizationScopeInheritFromParent
          && SynchronizationScope != WdfSynchronizationScopeNone )
        {
          v9 = -1071644144;
          WPP_IFR_SF_qDd(
            FxDriverGlobals,
            (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
            6u,
            0x14u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            SynchronizationScope,
            0xC0200210);
          return v9;
        }
        if ( (Flags & 2) == 0 && ExecutionLevel != WdfExecutionLevelInheritFromParent )
        {
          v9 = -1071644143;
          WPP_IFR_SF_qDd(
            FxDriverGlobals,
            (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
            6u,
            0x15u,
            WPP_FxValidateFunctions_cpp_Traceguids,
            Attributes,
            ExecutionLevel,
            0xC0200211);
          return v9;
        }
        return 0LL;
      }
      v9 = -1071644145;
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        6u,
        0x10u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        (__int64)ParentObject,
        -1071644145);
    }
    else
    {
      v9 = -1073741820;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)WPP_FxValidateFunctions_cpp_Traceguids,
        6u,
        0xBu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  else
  {
    if ( (Flags & 8) == 0 )
      return 0LL;
    v9 = -1071644142;
    WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, 0xC0200212);
  }
  return v9;
}
