/*
 * XREFs of ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x18025A70C
 * Callers:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F4434 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x180256BA0 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x1800915DA (WindowsDuplicateString_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING __fastcall winrt::impl::duplicate_string(winrt::impl *this, void *a2)
{
  HRESULT v2; // eax
  HSTRING newString; // [rsp+38h] [rbp+10h] BYREF

  newString = 0LL;
  v2 = WindowsDuplicateString_0((HSTRING)this, &newString);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return newString;
}
