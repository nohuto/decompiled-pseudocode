/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1C0028A94
 * Callers:
 *     xxxSetWindowRgn @ 0x1C002656C (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028948 (xxxSetWindowPosAndBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00AD4D4 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C0239A1C (xxxArrangeIconicWindows.c)
 * Callees:
 *     AllocateCvr @ 0x1C0028B70 (AllocateCvr.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall InternalBeginDeferWindowPos(unsigned int a1)
{
  void *v2; // rbx
  __int64 v4; // rax

  if ( (gdwPUDFlags & 0x40000000) == 0 && (signed int)a1 <= *((_DWORD *)&gSMWP + 8) )
  {
    gdwPUDFlags |= 0x40000000u;
    v2 = (void *)gSMWP;
    gSMWP = 0LL;
    *((_OWORD *)&gSMWP + 1) = 0LL;
    return v2;
  }
  v4 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v2 = (void *)v4;
  if ( v4 )
  {
    if ( (unsigned int)AllocateCvr(v4, a1) )
      return v2;
    Win32FreePool(v2);
  }
  return 0LL;
}
