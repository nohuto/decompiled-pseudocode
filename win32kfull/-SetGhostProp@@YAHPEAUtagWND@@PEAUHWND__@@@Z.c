/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F4FB8
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F5244 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax

  v3 = 0;
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
  if ( !Prop || Prop == -1 && a2 != (HWND)-1LL )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), (__int64)a2, 5u);
  return v3;
}
