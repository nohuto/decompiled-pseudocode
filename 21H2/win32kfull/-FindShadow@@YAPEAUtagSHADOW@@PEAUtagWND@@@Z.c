/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001F3A8
 * Callers:
 *     WindowHasShadow @ 0x1C001F374 (WindowHasShadow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C012E250 (zzzUpdateShadowAlpha.c)
 *     xxxUpdateShadowZorder @ 0x1C0239848 (xxxUpdateShadowZorder.c)
 *     zzzCloakShadow @ 0x1C0239924 (zzzCloakShadow.c)
 *     zzzMoveShadow @ 0x1C0239998 (zzzMoveShadow.c)
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
