/*
 * XREFs of bDeletePalette @ 0x1C00CB0A0
 * Callers:
 *     GdiThreadCallout @ 0x1C00420F0 (GdiThreadCallout.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

__int64 __fastcall bDeletePalette(__int64 a1)
{
  unsigned int v1; // ebx
  int *v2; // rax
  unsigned int v3; // ebx
  int *v5; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  v6 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 40LL);
  EngAcquireSemaphore(v6);
  v2 = (int *)HmgShareLockCheck(v1, 8);
  v3 = 0;
  v5 = v2;
  if ( v2 )
  {
    v3 = XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)&v5, 0);
    if ( v5 )
      HmgDecrementShareReferenceCountEx(v5, 0LL);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v6);
  return v3;
}
