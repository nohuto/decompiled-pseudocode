/*
 * XREFs of DestroyWindowSmIcon @ 0x1C012F204
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C014A550 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct tagCURSOR *v4; // rbx

  v2 = *(_QWORD *)(a1[5] + 264);
  if ( !v2 )
    return 0LL;
  v3 = HMValidateHandleNoRip(v2, 3);
  v4 = (struct tagCURSOR *)v3;
  if ( !v3 || (*(_DWORD *)(v3 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(a1[5] + 264) = 0LL;
  _DestroyCursor(v4, 0);
  return 1LL;
}
