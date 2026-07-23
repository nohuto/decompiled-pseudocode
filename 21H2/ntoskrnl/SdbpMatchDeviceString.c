/*
 * XREFs of SdbpMatchDeviceString @ 0x140966164
 * Callers:
 *     SdbpMatchAcpi @ 0x1407D3288 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407D32DC (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407D3330 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407D3384 (SdbpMatchCpu.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v8, v9);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
