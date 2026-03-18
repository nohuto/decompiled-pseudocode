/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1C0048E6C
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C009AE90 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C00F914C (xxxSetWindowRgn.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     AllocateCvr @ 0x1C009DC70 (AllocateCvr.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalBeginDeferWindowPos(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  if ( (gdwPUDFlags & 0x40000000) == 0 && (signed int)a1 <= *((_DWORD *)&gSMWP + 8) )
  {
    gdwPUDFlags |= 0x40000000u;
    v2 = gSMWP;
    gSMWP = 0LL;
    *((_OWORD *)&gSMWP + 1) = 0LL;
    return v2;
  }
  v4 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v2 = v4;
  if ( v4 )
  {
    if ( (unsigned int)AllocateCvr(v4, a1) )
      return v2;
    Win32FreePool(v2);
  }
  return 0LL;
}
