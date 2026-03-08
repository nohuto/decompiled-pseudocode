/*
 * XREFs of EtwpIsValidImageAddress @ 0x140775684
 * Callers:
 *     EtwpFindDebugId @ 0x140775478 (EtwpFindDebugId.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14035D7C0 (RtlSectionTableFromVirtualAddress.c)
 */

bool __fastcall EtwpIsValidImageAddress(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  bool result; // al
  _DWORD *v7; // rax

  v5 = a4 - a2;
  result = 0;
  if ( a4 >= a2 && a4 + a5 >= a4 && a4 + a5 <= a2 + a3 )
  {
    if ( a2 < 0xFFFF800000000000uLL )
      return 1;
    v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(a1, a2, v5);
    if ( v7 )
    {
      if ( v5 + a5 <= (unsigned int)(v7[3] + v7[4]) && (v7[9] & 0x2000000) == 0 )
        return 1;
    }
  }
  return result;
}
