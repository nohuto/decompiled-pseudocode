/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x18005CCF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x18005CD30 (RtlDeleteElementGenericTableAvlEx.c)
 *     FindNodeOrParent @ 0x18005D12C (FindNodeOrParent.c)
 */

char __fastcall RtlDeleteElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(a1, a2, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(a1, v4);
  return 1;
}
