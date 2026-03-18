/*
 * XREFs of WbFindWarbirdProcess @ 0x1407E1754
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1407E15B4 (WbRemoveWarbirdProcess.c)
 * Callees:
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 */

__int64 __fastcall WbFindWarbirdProcess(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1407E3440((unsigned int)&dword_140C5A6D0, a1, 8, (unsigned int)&v5, 0LL);
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
