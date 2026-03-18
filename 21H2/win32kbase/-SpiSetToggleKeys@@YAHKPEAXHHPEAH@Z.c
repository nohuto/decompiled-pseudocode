/*
 * XREFs of ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01659A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C005FA80 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C14FC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     FastWriteProfileValue @ 0x1C0149810 (FastWriteProfileValue.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C0206380 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C020ABD8 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetToggleKeys(int a1, unsigned int *a2, int a3, unsigned int a4, int *a5)
{
  unsigned int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 v16[40]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 8 )
    return 0LL;
  v9 = a2[1];
  if ( (v9 & 0x3F) != v9 )
    return 0LL;
  v10 = v9 & 0xFFFFFFFD;
  v11 = v9 | 2;
  if ( (dword_1C0295A0C & 2) == 0 )
    v11 = v10;
  a2[1] = v11;
  if ( a3 )
  {
    RtlStringCchPrintfW(v16, 40LL, L"%d");
    v12 = -1LL;
    do
      ++v12;
    while ( v16[v12] );
    a4 = (unsigned int)FastWriteProfileValue(0LL, 0x11u, (const WCHAR *)L"Flags", 1u, v16, 2 * (int)v12 + 2);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v15[0] = 0LL;
  memmove(v15, &gToggleKeys, (unsigned int)gToggleKeys);
  memmove(&gToggleKeys, a2, *a2);
  LODWORD(gToggleKeys) = 8;
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(4LL);
  ApiSetEditionPostShellHookMessages(v13, 4LL, v15, &gToggleKeys);
  return 1LL;
}
