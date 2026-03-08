/*
 * XREFs of ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0277844
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1C02781E8 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  int v4; // eax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 3) = 1;
  v4 = PushThreadGuardedObject((char *)this + 16, this, XFERDCOBJ::ThreadCleanup);
  *((_DWORD *)this + 12) = v4;
  if ( v4 )
    XDCOBJ::vLock(this, a2);
  return this;
}
