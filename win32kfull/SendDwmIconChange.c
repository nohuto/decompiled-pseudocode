/*
 * XREFs of SendDwmIconChange @ 0x1C00A1060
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0107A14 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C014A550 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxGetWindowSmIcon @ 0x1C009FCA8 (xxxGetWindowSmIcon.c)
 *     DwmAsyncIconChange @ 0x1C00A110C (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1C00A47EC (_HasCaptionIcon.c)
 */

__int64 __fastcall SendDwmIconChange(struct tagWND *a1)
{
  __int64 v2; // rcx
  void *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  if ( (unsigned int)HasCaptionIcon(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(a1, 1) )
  {
    xxxGetWindowSmIcon(a1, 1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5);
  v3 = (void *)ReferenceDwmApiPort(v2);
  return DwmAsyncIconChange(v3);
}
