/*
 * XREFs of GreChangeGhostFont @ 0x1C027A490
 * Callers:
 *     NtGdiChangeGhostFont @ 0x1C02C4780 (NtGdiChangeGhostFont.c)
 * Callees:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C026D16C (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 */

__int64 __fastcall GreChangeGhostFont(Gre::Base *a1, int a2)
{
  __int64 v4; // r8
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)Gre::Base::Globals(a1) + 796);
  v6[0] = v4;
  if ( v4 && *(_DWORD *)(v4 + 28) )
    return PUBLIC_PFTOBJ::ChangeGhostFont((PUBLIC_PFTOBJ *)v6, a1, a2);
  else
    return 0LL;
}
