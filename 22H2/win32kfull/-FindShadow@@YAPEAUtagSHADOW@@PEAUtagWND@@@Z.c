/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00A38A4
 * Callers:
 *     WindowHasShadow @ 0x1C00A3870 (WindowHasShadow.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxAddShadow @ 0x1C0221654 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C02219BC (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C0221AA0 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C0221B1C (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0221BBC (zzzUpdateShadowAlpha.c)
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
