/*
 * XREFs of EtwpTiQueryCodeIntegrityOptions @ 0x14078FE50
 * Callers:
 *     EtwTiLogDriverObjectLoad @ 0x14078FD38 (EtwTiLogDriverObjectLoad.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall EtwpTiQueryCodeIntegrityOptions(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 8LL;
  result = ZwQuerySystemInformation(103LL, (__int64)&v3);
  if ( (int)result >= 0 )
  {
    *a1 = HIDWORD(v3);
    return (unsigned int)result;
  }
  return result;
}
