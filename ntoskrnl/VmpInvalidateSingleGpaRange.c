/*
 * XREFs of VmpInvalidateSingleGpaRange @ 0x14045E678
 * Callers:
 *     VmpProcessInvalidateSlat @ 0x1405F8654 (VmpProcessInvalidateSlat.c)
 * Callees:
 *     HvlMapGpaPages @ 0x140676A60 (HvlMapGpaPages.c)
 */

__int64 __fastcall VmpInvalidateSingleGpaRange(int a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  result = HvlMapGpaPages(a1, a2, a4 != 0 ? -2130640896 : 16842752, a3, 0LL, (__int64)&v6);
  if ( (int)result < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  if ( v6 != a3 )
    NT_ASSERT("PageCountProcessed == NumberOfPages");
  return result;
}
