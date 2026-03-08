/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F4F04
 * Callers:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F65C4 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u) )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), a2, 5u);
  return v3;
}
