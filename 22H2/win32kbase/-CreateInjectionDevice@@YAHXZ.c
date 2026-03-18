/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x1C01EFB2C
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C01EFCB4 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1C01EFFC0 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0198FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C01EFB84 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 CreateInjectionDevice(void)
{
  unsigned int v0; // ebx
  struct tagRECT *v1; // rdx
  void *v2; // rcx
  struct tagRECT *v3; // r8

  v0 = 0;
  if ( (int)RIMIDE_InitializePointerDeviceInjection(
              2,
              10,
              *((_QWORD *)gpDispInfo + 12),
              3u,
              1,
              0,
              &TouchExtensibility::ghInjectionDevice) >= 0 )
    return GetDeviceRects(v2, v1, v3);
  return v0;
}
