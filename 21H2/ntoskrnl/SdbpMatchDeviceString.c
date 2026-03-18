/*
 * XREFs of SdbpMatchDeviceString @ 0x140A12C84
 * Callers:
 *     SdbpMatchCpu @ 0x14084328C (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x1408432E0 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140843334 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140843388 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
