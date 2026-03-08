/*
 * XREFs of _GetMenuState @ 0x1C024E814
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00A5C50 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C02257E8 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  unsigned int v4; // r8d
  __int64 v5; // rax

  v2 = (_QWORD *)MNLookUpItem(a1, a2, 0, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)*v2 | *(_DWORD *)(*v2 + 4LL);
  v5 = v2[2];
  if ( v5 )
    return (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 44LL) << 8) + (v4 & 0xEF | 0x10);
  return v4;
}
