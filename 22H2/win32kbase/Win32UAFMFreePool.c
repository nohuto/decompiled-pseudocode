/*
 * XREFs of Win32UAFMFreePool @ 0x1C013A230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMFreePool(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( qword_1C0256D80 )
    result = qword_1C0256D80();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0256D88;
    if ( qword_1C0256D88 )
      return qword_1C0256D88(a1, a2);
  }
  return result;
}
