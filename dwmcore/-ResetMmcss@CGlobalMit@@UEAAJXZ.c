/*
 * XREFs of ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x1800C8320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C84A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CGlobalMit::ResetMmcss(wil::details **this, void *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_BYTE *)this + 32) || !this[2] )
    return (unsigned int)-2147467260;
  else
    wil::details::SetEvent(this[17], a2);
  return v2;
}
