/*
 * XREFs of ?GetBackgroundTaskId@CProcess@@UEAA?AU_GUID@@XZ @ 0x18001A1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CProcess::GetBackgroundTaskId(CProcess *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = *(struct _GUID *)((char *)this + 536);
  return result;
}
