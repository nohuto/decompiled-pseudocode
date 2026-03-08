/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01BDA10
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01BD944 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  struct tagWND *v4; // rax
  __int64 v5; // rcx

  EnterCrit(1LL, 0LL);
  v4 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), 1);
  if ( v4 && (*(_BYTE *)(*((_QWORD *)v4 + 5) + 27LL) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow(v4, (__m128i *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v5);
}
