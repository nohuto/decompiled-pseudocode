/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14003CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[7] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
