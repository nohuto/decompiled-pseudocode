/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674
 * Callers:
 *     WindowHasShadow @ 0x1C002A3D0 (WindowHasShadow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00AE6B0 (UpdateWindowMonitor.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C02246CC (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C02247B0 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C022482C (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C02248CC (zzzUpdateShadowAlpha.c)
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
