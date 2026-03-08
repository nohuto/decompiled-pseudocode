/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0020580
 * Callers:
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0020500 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C018B320 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0197440 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // rbx
  PDEVOBJ *v2; // rdi
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *(_QWORD *)this;
  v2 = this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  if ( (v3 & 1) == 0 )
    return 0LL;
  if ( (v3 & 0x1000000) != 0 )
    return 0LL;
  if ( *(_DWORD *)(v1 + 2588) != 5 && (v3 & 0x20000) == 0 )
  {
    this = *(PDEVOBJ **)(v1 + 2552);
    if ( (((unsigned __int64)this + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)this + 40) & 0x800000) == 0 )
      return 0LL;
  }
  v4 = *(_QWORD *)(v1 + 24);
  v5 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v6 = *(_QWORD *)v2;
  return (*(_DWORD *)(*(_QWORD *)v2 + 2096LL) & 0x400) == 0
      && (*(_DWORD *)(v6 + 1792) & 0x8000000) == 0
      && (*(_DWORD *)(v6 + 40) & 0x48000000) == 0
      && (*(_DWORD *)(v4 + 40) & 0x1000000) == 0
      && *(_DWORD *)(v5 + 6360) != 0;
}
