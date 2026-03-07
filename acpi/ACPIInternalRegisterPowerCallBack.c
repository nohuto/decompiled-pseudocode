__int64 __fastcall ACPIInternalRegisterPowerCallBack(
        volatile signed __int64 *CallbackContext,
        PCALLBACK_FUNCTION CallbackFunction)
{
  __int64 result; // rax
  NTSTATUS v5; // edi
  char v6; // r8
  const char *v7; // rax
  const char *v8; // rcx
  __int64 v9; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A8h] [rbp+67h] BYREF

  result = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  CallbackObject = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( (CallbackContext[1] & 0x4000000000000000LL) == 0 )
  {
    _InterlockedOr64(CallbackContext + 1, 0x4000000000000000uLL);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( v5 < 0 )
    {
      v6 = 0;
      v7 = (const char *)&unk_1C00622D0;
      v8 = (const char *)&unk_1C00622D0;
      if ( CallbackContext )
      {
        v9 = *((_QWORD *)CallbackContext + 1);
        v6 = (char)CallbackContext;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v7 = (const char *)*((_QWORD *)CallbackContext + 76);
          if ( (v9 & 0x400000000000LL) != 0 )
            v8 = (const char *)*((_QWORD *)CallbackContext + 77);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0xBu,
          (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
          v5,
          v6,
          v7,
          v8);
      v5 = 0;
      _InterlockedAnd64(CallbackContext + 1, 0xBFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExRegisterCallback(CallbackObject, CallbackFunction, (PVOID)CallbackContext);
    }
    return (unsigned int)v5;
  }
  return result;
}
