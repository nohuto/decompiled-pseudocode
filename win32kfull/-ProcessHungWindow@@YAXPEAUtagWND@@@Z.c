/*
 * XREFs of ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4E68
 * Callers:
 *     NtUserQueryWindow @ 0x1C00A0010 (NtUserQueryWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleHungWindow @ 0x1C0149170 (EditionHandleHungWindow.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F5038 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F51CC (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall ProcessHungWindow(struct tagWND *a1)
{
  struct tagWND *v2; // rbx
  const struct tagTHREADINFO **v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
  v2 = ShouldProcessHungWindow(a1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (const struct tagTHREADINFO **)*((_QWORD *)v2 + 15);
      if ( !v3 || !IsHungWindow(v3) )
        break;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 15);
    }
    _GhostOwnerWindowAndOwnees(v2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
}
