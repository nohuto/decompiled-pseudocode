/*
 * XREFs of sub_1406C7AB4 @ 0x1406C7AB4
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1406872A4 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x1406C7E04 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_1406C7B18 @ 0x1406C7B18 (sub_1406C7B18.c)
 */

__int64 __fastcall sub_1406C7AB4(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1406C7B18((unsigned int)&dword_140C53D90, a1, 8, (unsigned int)&v5, 0LL);
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
