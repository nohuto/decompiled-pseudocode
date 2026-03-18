/*
 * XREFs of DestroyWindowSmIcon @ 0x1C013D1BC
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0157270 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022DD3C (xxxRecreateSmallIcons.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00244B4 (HMValidateHandleNoRip.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall DestroyWindowSmIcon(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct tagCURSOR *v4; // rbx

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v2 )
    return 0LL;
  v3 = HMValidateHandleNoRip(v2, 3);
  v4 = (struct tagCURSOR *)v3;
  if ( !v3 || (*(_DWORD *)(v3 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = 0LL;
  _DestroyCursor(v4, 0);
  return 1LL;
}
