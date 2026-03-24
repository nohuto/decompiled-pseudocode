/*
 * XREFs of ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0003CA0
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0003880 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0003A40 (xxxRegisterGhostWindow.c)
 * Callees:
 *     InternalSetProp @ 0x1C0038408 (InternalSetProp.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 */

__int64 __fastcall SetGhostProp(struct tagWND *a1, HWND a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rdx

  v3 = 0;
  Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
  if ( ((Prop + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (Prop != -1 || a2 != (HWND)-1LL) )
    return (unsigned int)InternalSetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), a2, 5LL);
  return v3;
}
