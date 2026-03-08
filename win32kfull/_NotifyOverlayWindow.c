/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01C9960
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     NtUserNotifyOverlayWindow @ 0x1C01D8EC0 (NtUserNotifyOverlayWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01C8548 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C026FE38 (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // r8d
  int v4; // eax
  int v5; // edi
  unsigned int v6; // r9d
  bool v7; // zf
  void *v8; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = gcOverlays;
  v4 = *((_DWORD *)a1 + 80) & 0x10000;
  v5 = 0;
  v6 = 0;
  if ( !a2 )
  {
    if ( !v4 )
      return 1;
    if ( gcOverlays )
    {
      v2 = 1;
      --gcOverlays;
      *((_DWORD *)a1 + 80) &= ~0x10000u;
      v7 = v3 == 1;
      goto LABEL_10;
    }
LABEL_11:
    gcOverlays = -1;
    goto LABEL_12;
  }
  if ( v4 )
  {
    v2 = 1;
    goto LABEL_13;
  }
  if ( gcOverlays + 1 < (unsigned int)gcOverlays )
    goto LABEL_11;
  ++gcOverlays;
  v2 = 1;
  *((_DWORD *)a1 + 80) |= 0x10000u;
  v7 = v3 == 0;
LABEL_10:
  LOBYTE(v5) = v7;
LABEL_12:
  v6 = v2;
LABEL_13:
  if ( v2 )
  {
    if ( v6 )
      FixupOverlayWindowAttributes(a1);
    if ( v5 )
    {
      v8 = (void *)ReferenceDwmApiPort(a1);
      DwmAsyncNotifyWindowShadowChange(v8);
      xxxSendNotifyMessage((struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
