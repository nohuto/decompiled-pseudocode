/*
 * XREFs of sub_1800B8B90 @ 0x1800B8B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BAD3C @ 0x1800BAD3C (sub_1800BAD3C.c)
 */

HRESULT __fastcall sub_1800B8B90(__int64 a1)
{
  sub_1800BAD3C(a1 + 40, *(_QWORD *)(a1 + 32));
  return CoDisconnectContext(0xFFFFFFFF);
}
