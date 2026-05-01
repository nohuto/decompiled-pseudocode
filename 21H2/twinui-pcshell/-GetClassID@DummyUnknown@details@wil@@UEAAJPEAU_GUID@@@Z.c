/*
 * XREFs of ?GetClassID@DummyUnknown@details@wil@@UEAAJPEAU_GUID@@@Z @ 0x18008ECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::DummyUnknown::GetClassID(wil::details::DummyUnknown *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct _GUID *)((char *)this + 24);
  return result;
}
