/*
 * XREFs of IsImmersiveApplicationBandId @ 0x1C0112D98
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C006A184 (_anonymous_namespace_--EligibleWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveApplicationBandId(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 >= 8 && (a1 == 13 || a1 <= 11) )
    return 1LL;
  return result;
}
