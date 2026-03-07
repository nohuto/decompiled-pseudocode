__int64 PopInitializeAdpm()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140C398D8 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140C398DC = 3;
  PopExtendConnectionState(0);
  result = ExSubscribeWnfStateChange(
             (__int64)&v1,
             (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE,
             1,
             0,
             (__int64)PopAdaptiveWnfCallback,
             0LL);
  if ( !CmNtSkipRegistryInit )
    return PopAdaptiveInitializeBootContext();
  return result;
}
