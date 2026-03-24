/*
 * XREFs of SendShellClipChanged @ 0x1C01AEEF0
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01A2D04 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004CFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

void __fastcall SendShellClipChanged(void *Src, unsigned int a2)
{
  __int64 v2; // rsi
  char v3; // bp
  _DWORD *v4; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = v8;
  memset(v8, 0, 32);
  if ( a2 <= 1
    || (v6 = 16LL * (a2 - 1), v3 = 1, v6 <= 0xFFFFFFFF)
    && (unsigned int)(v6 + 32) >= 0x20
    && (v4 = Win32AllocPoolZInit((unsigned int)(v6 + 32), 1668506453LL)) != 0LL )
  {
    *v4 = 3;
    v4[2] = v2;
    memmove(v4 + 3, Src, 16 * v2);
    InputExtensibilityCallout::CoreMsgSendMessage(v7, 1);
    if ( v3 )
      Win32FreePool((__int64)v4);
  }
}
