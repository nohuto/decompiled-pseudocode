/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1C013A1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMFreePagedLookasideList(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( qword_1C0256DF0 )
    result = qword_1C0256DF0();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0256DF8;
    if ( qword_1C0256DF8 )
      return qword_1C0256DF8(a1, a2);
  }
  return result;
}
