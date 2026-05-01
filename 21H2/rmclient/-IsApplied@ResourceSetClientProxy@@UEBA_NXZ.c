/*
 * XREFs of ?IsApplied@ResourceSetClientProxy@@UEBA_NXZ @ 0x1800132C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ResourceSetClientProxy::IsApplied(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 120) == 1;
}
