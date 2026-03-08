/*
 * XREFs of EditionInputExtensibilityCallout @ 0x1C01C6930
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientCallDevCallbackSimple @ 0x1C0214078 (xxxClientCallDevCallbackSimple.c)
 */

__int64 __fastcall EditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 4) == 1 || *(_DWORD *)(a2 + 4) == 3 )
    return xxxClientCallDevCallbackSimple();
  return result;
}
