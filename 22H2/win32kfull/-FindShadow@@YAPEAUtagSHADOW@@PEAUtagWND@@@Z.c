/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BBE88
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E8B8 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00701D0 (UpdateWindowMonitor.c)
 *     WindowHasShadow @ 0x1C00BBE54 (WindowHasShadow.c)
 *     xxxAddShadow @ 0x1C013D9EC (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C013DE6C (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C023DB48 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C023DC50 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C023DCF0 (zzzMoveShadow.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  for ( result = gpshadowFirst;
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
