/*
 * XREFs of DestroyWindowSmIcon @ 0x1C007C580
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023DC90 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C024343C (xxxRecreateSmallIcons.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004879C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 */

__int64 __fastcall DestroyWindowSmIcon(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  struct tagCURSOR *v5; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL);
  if ( !v2 )
    return 0LL;
  v4 = HMValidateHandleNoRip(v2, 3);
  v5 = (struct tagCURSOR *)v4;
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = 0LL;
  _DestroyCursor(v5, 0);
  return 1LL;
}
