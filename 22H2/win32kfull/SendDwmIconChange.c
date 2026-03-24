/*
 * XREFs of SendDwmIconChange @ 0x1C0038960
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00234E4 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0035D20 (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00E9D5C (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D6D0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0242E7C (xxxRecreateSmallIcons.c)
 * Callees:
 *     DwmAsyncIconChange @ 0x1C0038A00 (DwmAsyncIconChange.c)
 *     xxxGetWindowSmIcon @ 0x1C0038CA8 (xxxGetWindowSmIcon.c)
 *     _HasCaptionIcon @ 0x1C0061CF8 (_HasCaptionIcon.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall SendDwmIconChange(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 && xxxGetWindowSmIcon(a1) )
    xxxGetWindowSmIcon(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  v4 = (void *)ReferenceDwmApiPort(v3, v2);
  return DwmAsyncIconChange(v4);
}
