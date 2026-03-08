/*
 * XREFs of ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B954
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0017820 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     FastWriteProfileValue @ 0x1C015D3A0 (FastWriteProfileValue.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C023C590 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C0241F24 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetToggleKeys(int a1, unsigned int *a2, int a3, unsigned int a4, int *a5)
{
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int16 v15[40]; // [rsp+40h] [rbp-78h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *a2 != 8 )
    return 0LL;
  v9 = a2[1];
  if ( (v9 & 0x3F) != v9 )
    return 0LL;
  v10 = v9 | 2;
  if ( (dword_1C02D155C & 2) == 0 )
    v10 = a2[1] & 0xFFFFFFFD;
  a2[1] = v10;
  if ( a3 )
  {
    RtlStringCchPrintfW(v15, 40LL, L"%d");
    v11 = -1LL;
    do
      ++v11;
    while ( v15[v11] );
    a4 = (unsigned int)FastWriteProfileValue(0LL, 0x11u, (const WCHAR *)L"Flags", 1u, v15, 2 * (int)v11 + 2);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v14[0] = 0LL;
  memmove(v14, &gToggleKeys, (unsigned int)gToggleKeys);
  memmove(&gToggleKeys, a2, *a2);
  LODWORD(gToggleKeys) = 8;
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(4LL);
  ApiSetEditionPostShellHookMessages(v12, 4LL, v14, &gToggleKeys);
  return 1LL;
}
