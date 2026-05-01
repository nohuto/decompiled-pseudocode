/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x180008730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
