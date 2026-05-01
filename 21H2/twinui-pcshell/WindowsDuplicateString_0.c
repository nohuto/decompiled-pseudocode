/*
 * XREFs of WindowsDuplicateString_0 @ 0x1800915FA
 * Callers:
 *     ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x18025A8BC (-duplicate_string@impl@winrt@@YAPEAXPEAX@Z.c)
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18035B900 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDuplicateString_0(HSTRING string, HSTRING *newString)
{
  return WindowsDuplicateString(string, newString);
}
