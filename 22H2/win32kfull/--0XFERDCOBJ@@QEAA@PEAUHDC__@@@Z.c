/*
 * XREFs of ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0274E04
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1C02757EC (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011CD7C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((_OWORD *)this + 1);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 3) = 1;
  v4 = PushThreadGuardedObject((char *)this + 48, this, XFERDCOBJ::ThreadCleanup);
  *((_DWORD *)this + 20) = v4;
  if ( v4 )
    XDCOBJ::vLock(this, a2);
  return this;
}
