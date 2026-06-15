/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140014D4C
 * Callers:
 *     WinMain @ 0x140014C30 (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister_EtwEventRegister()
{
  __int64 result; // rax

  result = 0LL;
  if ( !AUDIO_EVENT_PROVIDER_Context )
    return EtwEventRegister(
             &AUDIO_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &AUDIO_EVENT_PROVIDER_Context);
  return result;
}
