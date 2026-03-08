/*
 * XREFs of sub_1406AF110 @ 0x1406AF110
 * Callers:
 *     WbGetWarbirdProcess @ 0x1406AEEB8 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x14070546C (WbRemoveWarbirdProcess.c)
 * Callees:
 *     sub_1406AF180 @ 0x1406AF180 (sub_1406AF180.c)
 */

__int64 __fastcall sub_1406AF110(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1406AF180((unsigned int)&dword_140C706C0, a1, 8, (unsigned int)&v5, 0LL);
  if ( (int)result >= 0 && a2 )
  {
    v4 = v5;
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 232));
      v4 = v5;
    }
    *a2 = v4;
  }
  return result;
}
