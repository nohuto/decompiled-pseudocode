/*
 * XREFs of ExSecurePoolValidate @ 0x14060AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExSecurePoolValidate(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _BOOL8 result; // rax
  _QWORD *v5; // r8

  result = 0LL;
  v5 = (_QWORD *)(a3 - 16);
  if ( (unsigned __int64)v5 >= SecurePoolBase && (unsigned __int64)v5 < SecurePoolEnd )
    return *v5 == (a4 ^ a1 ^ a2);
  return result;
}
