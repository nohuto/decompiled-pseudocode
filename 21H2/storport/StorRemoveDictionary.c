/*
 * XREFs of StorRemoveDictionary @ 0x1C0017C4C
 * Callers:
 *     RaidAdapterRemoveUnit @ 0x1C0017B78 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DEF8 (RaidAdapterRemoveNormalChildren.c)
 * Callees:
 *     StorFindDictionary @ 0x1C0005ADC (StorFindDictionary.c)
 */

__int64 __fastcall StorRemoveDictionary(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  result = StorFindDictionary((__int64)a1, a2, &v6);
  if ( (int)result >= 0 )
  {
    v4 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v5 = (_QWORD *)v6[1], (_QWORD *)*v5 != v6) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*a1;
  }
  return result;
}
