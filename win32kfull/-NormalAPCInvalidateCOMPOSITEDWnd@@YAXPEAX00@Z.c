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
