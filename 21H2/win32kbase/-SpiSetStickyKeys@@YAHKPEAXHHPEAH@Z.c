/*
 * XREFs of ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01657EC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C005FA80 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C14FC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     FastWriteProfileValue @ 0x1C0149810 (FastWriteProfileValue.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01BAF10 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C0206380 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C020ABD8 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetStickyKeys(int a1, _WORD *a2, int a3, unsigned int a4, int *a5)
{
  int v9; // ebp
  int v10; // r9d
  unsigned int v11; // eax
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int16 v17[40]; // [rsp+40h] [rbp-88h] BYREF

  memset(v17, 0, sizeof(v17));
  v9 = dword_1C0295A44 & 1;
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 8 )
    return 0LL;
  a2[3] = 0;
  v10 = *((_DWORD *)a2 + 1);
  if ( (v10 & 0x1FF) != v10 )
    return 0LL;
  v11 = v10 & 0xFFFFFFFD;
  v12 = v10 | 2;
  if ( (dword_1C0295A44 & 2) == 0 )
    v12 = v11;
  *((_DWORD *)a2 + 1) = v12;
  if ( a3 )
  {
    RtlStringCchPrintfW(v17, 40LL, L"%d");
    v13 = -1LL;
    do
      ++v13;
    while ( v17[v13] );
    a4 = (unsigned int)FastWriteProfileValue(0LL, 0xEu, (const WCHAR *)L"Flags", 1u, v17, 2 * (int)v13 + 2);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  v16[0] = 0LL;
  memmove(v16, &gStickyKeys, (unsigned int)gStickyKeys);
  memmove(&gStickyKeys, a2, *(unsigned int *)a2);
  LODWORD(gStickyKeys) = 8;
  if ( (dword_1C0295A44 & 1) == 0 )
  {
    if ( v9 )
      xxxTurnOffStickyKeys();
  }
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook(1LL);
  ApiSetEditionPostShellHookMessages(v14, 1LL, v16, &gStickyKeys);
  return 1LL;
}
