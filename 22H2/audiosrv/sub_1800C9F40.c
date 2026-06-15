/*
 * XREFs of sub_1800C9F40 @ 0x1800C9F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C9F40(__int64 a1, __int64 a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(
           qword_18019E640,
           *(_QWORD *)(a2 + 1048));
}
