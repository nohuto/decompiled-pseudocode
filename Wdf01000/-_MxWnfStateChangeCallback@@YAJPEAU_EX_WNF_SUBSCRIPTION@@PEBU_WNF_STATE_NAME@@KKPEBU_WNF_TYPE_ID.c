__int64 __fastcall _MxWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *Subscription,
        const _WNF_STATE_NAME *StateName,
        __int64 EventMask,
        __int64 ChangeStamp,
        const _WNF_TYPE_ID *TypeId,
        __int64 (__fastcall **CallbackContext)(_QWORD, _QWORD, _QWORD, _QWORD))
{
  return CallbackContext[2](CallbackContext, CallbackContext[3], EventMask, ChangeStamp);
}
