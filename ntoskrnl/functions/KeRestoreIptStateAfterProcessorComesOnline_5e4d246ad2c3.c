struct _KPRCB *__fastcall KeRestoreIptStateAfterProcessorComesOnline(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *result; // rax
  _XSAVE_AREA *ExtendedState; // rdx

  if ( (_DWORD)KiIptMsrMask )
  {
    result = KeGetCurrentPrcb();
    ExtendedState = result->ExtendedState;
    if ( ExtendedState )
      return (struct _KPRCB *)KiRestoreIptState((char *)ExtendedState + (unsigned int)KeXStateLength, ExtendedState, a3);
  }
  return result;
}
