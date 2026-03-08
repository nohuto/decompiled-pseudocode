/*
 * XREFs of ?OnChanged@CSceneMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180106B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneMesh::OnChanged(__int64 a1)
{
  *(_BYTE *)(a1 + 168) = 1;
  return 1LL;
}
