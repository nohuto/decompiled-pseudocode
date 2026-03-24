/*
 * XREFs of XmEmulateInterrupt @ 0x140395D3C
 * Callers:
 *     x86BiosExecuteInterruptShadowed @ 0x140395CE0 (x86BiosExecuteInterruptShadowed.c)
 * Callees:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 *     x86BiosTranslateAddress @ 0x140397450 (x86BiosTranslateAddress.c)
 */

__int64 __fastcall XmEmulateInterrupt(unsigned __int8 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a1;
  if ( !XmEmulatorInitialized )
    return 4LL;
  XmStatus = 0;
  word_140CED5CC = dword_140CED730;
  dword_140CED5B8 = HIWORD(dword_140CED730);
  v4 = x86BiosTranslateAddress((unsigned __int16)dword_140CED730, HIWORD(dword_140CED730));
  *(_WORD *)(v4 - 6) = -1;
  *(_DWORD *)(v4 - 4) = 0xFFFF;
  LOWORD(dword_140CED5B8) = dword_140CED5B8 - 6;
  v5 = x86BiosTranslateAddress(0LL, 0LL);
  return XmEmulateStream(v6, *(unsigned __int16 *)(v5 + 4 * v2 + 2), *(unsigned __int16 *)(v5 + 4 * v2), a2);
}
