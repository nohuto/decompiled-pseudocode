/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00BC1E8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E958 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C0070270 (UpdateWindowMonitor.c)
 *     WindowHasShadow @ 0x1C00BC1B4 (WindowHasShadow.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C013E34C (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C023E108 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C023E210 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C023E2B0 (zzzMoveShadow.c)
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
