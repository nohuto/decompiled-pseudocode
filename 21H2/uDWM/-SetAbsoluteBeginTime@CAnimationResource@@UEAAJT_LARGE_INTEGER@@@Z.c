/*
 * XREFs of ?SetAbsoluteBeginTime@CAnimationResource@@UEAAJT_LARGE_INTEGER@@@Z @ 0x180044160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::SetAbsoluteBeginTime(union _LARGE_INTEGER *this, union _LARGE_INTEGER a2)
{
  __int64 result; // rax

  this[8] = a2;
  result = 0LL;
  BYTE1(this[9].LowPart) = 1;
  return result;
}
